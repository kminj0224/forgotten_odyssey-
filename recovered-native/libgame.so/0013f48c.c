/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f48c  Symbol: removeAction */

/* cocos2d::CCActionManager::removeAction(cocos2d::CCAction*) */

undefined8 cocos2d::CCActionManager::removeAction(CCAction *param_1)

{
  int iVar1;
  int in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint **ppuVar6;
  undefined local_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  
  local_1c = (undefined)in_r1;
  bStack_1b = (byte)((uint)in_r1 >> 8);
  bStack_1a = (byte)((uint)in_r1 >> 0x10);
  bStack_19 = (byte)((uint)in_r1 >> 0x18);
  if (in_r1 != 0) {
    uVar3 = *(uint *)(in_r1 + 0x14);
    local_1c = (undefined)uVar3;
    bStack_1b = (byte)(uVar3 >> 8);
    bStack_1a = (byte)(uVar3 >> 0x10);
    bStack_19 = (byte)(uVar3 >> 0x18);
    if (*(int *)(param_1 + 0x14) != 0) {
      uVar3 = (uVar3 & 0xff) + DAT_0013f564 + (uint)bStack_19 * 0x1000000 +
              (uint)bStack_1a * 0x10000 + (uint)bStack_1b * 0x100 ^ DAT_0013f568;
      uVar2 = DAT_0013f56c - uVar3 ^ uVar3 << 8;
      uVar4 = (DAT_0013f570 - uVar3) - uVar2 ^ uVar2 >> 0xd;
      uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 0xc;
      uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 << 0x10;
      uVar4 = (uVar4 - uVar3) - uVar2 ^ uVar2 >> 5;
      uVar3 = (uVar3 - uVar2) - uVar4 ^ uVar4 >> 3;
      uVar2 = (uVar2 - uVar4) - uVar3 ^ uVar3 << 10;
      piVar5 = *(int **)(*(int *)(param_1 + 0x14) + 0x14);
      ppuVar6 = *(uint ***)
                 (((uVar2 >> 0xf ^ (uVar4 - uVar3) - uVar2) & piVar5[1] - 1U) * 0xc + *piVar5);
      if (ppuVar6 != (uint **)0x0) {
        ppuVar6 = (uint **)((int)ppuVar6 - piVar5[5]);
      }
      for (; ppuVar6 != (uint **)0x0; ppuVar6 = (uint **)((int)ppuVar6[9] - piVar5[5])) {
        if ((ppuVar6[0xb] == (uint *)0x4) && (iVar1 = memcmp(ppuVar6[10],&local_1c,4), iVar1 == 0))
        {
          uVar3 = 0;
          goto LAB_0013f546;
        }
        if (ppuVar6[9] == (uint *)0x0) break;
      }
    }
  }
LAB_0013f562:
  return CONCAT17(bStack_19,CONCAT16(bStack_1a,CONCAT15(bStack_1b,CONCAT14(local_1c,param_1))));
LAB_0013f546:
  if (uVar3 == **ppuVar6) goto LAB_0013f562;
  if (*(int *)(uVar3 * 4 + (*ppuVar6)[2]) == in_r1) {
    if (uVar3 != 0xffffffff) {
      removeActionAtIndex((CCActionManager *)param_1,uVar3,(_hashElement *)ppuVar6);
    }
    goto LAB_0013f562;
  }
  uVar3 = uVar3 + 1;
  goto LAB_0013f546;
}


