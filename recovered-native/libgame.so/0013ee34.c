/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ee34  Symbol: pauseTarget */

/* cocos2d::CCActionManager::pauseTarget(cocos2d::CCObject*) */

undefined8 cocos2d::CCActionManager::pauseTarget(CCObject *param_1)

{
  int iVar1;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined local_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  
  local_14 = (undefined)in_r1;
  bStack_13 = (byte)(in_r1 >> 8);
  bStack_12 = (byte)(in_r1 >> 0x10);
  bStack_11 = (byte)(in_r1 >> 0x18);
  if (*(int *)(param_1 + 0x14) != 0) {
    uVar2 = (in_r1 & 0xff) + DAT_0013eee0 + (uint)bStack_11 * 0x1000000 + (uint)bStack_12 * 0x10000
            + (uint)bStack_13 * 0x100 ^ DAT_0013eee4;
    uVar3 = DAT_0013eee8 - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_0013eeec - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    piVar5 = *(int **)(*(int *)(param_1 + 0x14) + 0x14);
    iVar6 = *(int *)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar5[1] - 1U) * 0xc + *piVar5);
    if (iVar6 != 0) {
      iVar6 = iVar6 - piVar5[5];
    }
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x24) - piVar5[5]) {
      if ((*(int *)(iVar6 + 0x2c) == 4) &&
         (iVar1 = memcmp(*(void **)(iVar6 + 0x28),&local_14,4), iVar1 == 0)) {
        *(undefined *)(iVar6 + 0x11) = 1;
        break;
      }
      if (*(int *)(iVar6 + 0x24) == 0) break;
    }
  }
  return CONCAT17(bStack_11,CONCAT16(bStack_12,CONCAT15(bStack_13,CONCAT14(local_14,param_1))));
}


