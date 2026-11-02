/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136b30  Symbol: pauseTarget */

/* cocos2d::CCScheduler::pauseTarget(cocos2d::CCObject*) */

undefined8 __thiscall cocos2d::CCScheduler::pauseTarget(CCScheduler *this,CCObject *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  byte local_14;
  byte bStack_13;
  byte bStack_12;
  byte bStack_11;
  
  local_14 = (byte)param_1;
  bStack_13 = (byte)((uint)param_1 >> 8);
  bStack_12 = (byte)((uint)param_1 >> 0x10);
  bStack_11 = (byte)((uint)param_1 >> 0x18);
  if (*(int *)(this + 0x28) != 0) {
    uVar2 = ((uint)param_1 & 0xff) + DAT_00136c88 + (uint)bStack_11 * 0x1000000 +
            (uint)bStack_12 * 0x10000 + (uint)bStack_13 * 0x100 ^ DAT_00136c8c;
    uVar3 = DAT_00136c90 - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_00136c94 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    piVar5 = *(int **)(*(int *)(this + 0x28) + 0x14);
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
  if (*(int *)(this + 0x24) != 0) {
    uVar2 = (uint)local_14 + DAT_00136c88 + (uint)bStack_11 * 0x1000000 + (uint)bStack_12 * 0x10000
            + (uint)bStack_13 * 0x100 ^ DAT_00136c8c;
    uVar3 = DAT_00136c90 - uVar2 ^ uVar2 << 8;
    uVar4 = (DAT_00136c94 - uVar2) - uVar3 ^ uVar3 >> 0xd;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 0xc;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 0x10;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 5;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 >> 3;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 << 10;
    piVar5 = *(int **)(*(int *)(this + 0x24) + 0xc);
    iVar6 = *(int *)(((uVar3 >> 0xf ^ (uVar4 - uVar2) - uVar3) & piVar5[1] - 1U) * 0xc + *piVar5);
    if (iVar6 != 0) {
      iVar6 = iVar6 - piVar5[5];
    }
    for (; iVar6 != 0; iVar6 = *(int *)(iVar6 + 0x1c) - piVar5[5]) {
      if ((*(int *)(iVar6 + 0x24) == 4) &&
         (iVar1 = memcmp(*(void **)(iVar6 + 0x20),&local_14,4), iVar1 == 0)) {
        *(undefined *)(*(int *)(iVar6 + 4) + 0x10) = 1;
        break;
      }
      if (*(int *)(iVar6 + 0x1c) == 0) break;
    }
  }
  return CONCAT17(bStack_11,CONCAT16(bStack_12,CONCAT15(bStack_13,CONCAT14(local_14,this))));
}


