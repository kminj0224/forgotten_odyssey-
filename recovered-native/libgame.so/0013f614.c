/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f614  Symbol: removeActionByTag */

/* cocos2d::CCActionManager::removeActionByTag(unsigned int, cocos2d::CCObject*) */

undefined8 __thiscall
cocos2d::CCActionManager::removeActionByTag(CCActionManager *this,uint param_1,CCObject *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint **ppuVar6;
  undefined local_1c;
  byte bStack_1b;
  byte bStack_1a;
  byte bStack_19;
  CCObject *pCStack_18;
  
  local_1c = SUB41(param_2,0);
  bStack_1b = (byte)((uint)param_2 >> 8);
  bStack_1a = (byte)((uint)param_2 >> 0x10);
  bStack_19 = (byte)((uint)param_2 >> 0x18);
  if (*(int *)(this + 0x14) != 0) {
    uVar2 = ((uint)param_2 & 0xff) + DAT_0013f6f4 + (uint)bStack_19 * 0x1000000 +
            (uint)bStack_1a * 0x10000 + (uint)bStack_1b * 0x100 ^ DAT_0013f6f8;
    uVar3 = DAT_0013f6fc - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_0013f700 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    piVar5 = *(int **)(*(int *)(this + 0x14) + 0x14);
    ppuVar6 = *(uint ***)
               (((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar5[1] - 1U) * 0xc + *piVar5);
    pCStack_18 = param_2;
    if (ppuVar6 != (uint **)0x0) {
      ppuVar6 = (uint **)((int)ppuVar6 - piVar5[5]);
    }
    for (; ppuVar6 != (uint **)0x0; ppuVar6 = (uint **)((int)ppuVar6[9] - piVar5[5])) {
      if ((ppuVar6[0xb] == (uint *)0x4) && (iVar1 = memcmp(ppuVar6[10],&local_1c,4), iVar1 == 0)) {
        uVar2 = 0;
        goto LAB_0013f6da;
      }
      if (ppuVar6[9] == (uint *)0x0) break;
    }
  }
LAB_0013f6f0:
  return CONCAT17(bStack_19,CONCAT16(bStack_1a,CONCAT15(bStack_1b,CONCAT14(local_1c,this))));
LAB_0013f6da:
  if (uVar2 == **ppuVar6) goto LAB_0013f6f0;
  iVar1 = *(int *)(uVar2 * 4 + (*ppuVar6)[2]);
  if ((*(uint *)(iVar1 + 0x1c) == param_1) &&
     (*(int *)(iVar1 + 0x14) == CONCAT13(bStack_19,CONCAT12(bStack_1a,CONCAT11(bStack_1b,local_1c)))
     )) {
    removeActionAtIndex(this,uVar2,(_hashElement *)ppuVar6);
    goto LAB_0013f6f0;
  }
  uVar2 = uVar2 + 1;
  goto LAB_0013f6da;
}


