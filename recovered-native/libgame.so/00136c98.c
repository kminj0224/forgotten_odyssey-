/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136c98  Symbol: isTargetPaused */

/* cocos2d::CCScheduler::isTargetPaused(cocos2d::CCObject*) */

undefined8 cocos2d::CCScheduler::isTargetPaused(CCObject *param_1)

{
  int iVar1;
  uint in_r1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  undefined local_14 [8];
  
  uVar4 = *(uint *)(param_1 + 0x28);
  if (uVar4 != 0) {
    piVar5 = *(int **)(uVar4 + 0x14);
    uVar4 = (in_r1 & 0xff) + DAT_00136d44 + (in_r1 & 0xff000000) + (in_r1 >> 0x10 & 0xff) * 0x10000
            + (in_r1 >> 8 & 0xff) * 0x100 ^ DAT_00136d48;
    uVar2 = DAT_00136d4c - uVar4 ^ uVar4 << 8;
    uVar3 = (DAT_00136d50 - uVar4) - uVar2 ^ uVar2 >> 0xd;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 0xc;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 0x10;
    uVar3 = (uVar3 - uVar4) - uVar2 ^ uVar2 >> 5;
    uVar4 = (uVar4 - uVar2) - uVar3 ^ uVar3 >> 3;
    uVar2 = (uVar2 - uVar3) - uVar4 ^ uVar4 << 10;
    iVar6 = *(int *)(((uVar2 >> 0xf ^ (uVar3 - uVar4) - uVar2) & piVar5[1] - 1U) * 0xc + *piVar5);
    if (iVar6 != 0) {
      iVar6 = iVar6 - piVar5[5];
    }
    while (iVar6 != 0) {
      if ((*(int *)(iVar6 + 0x2c) == 4) &&
         (iVar1 = memcmp(*(void **)(iVar6 + 0x28),local_14,4), iVar1 == 0)) {
        uVar4 = (uint)*(byte *)(iVar6 + 0x11);
        goto LAB_00136d3e;
      }
      uVar4 = *(uint *)(iVar6 + 0x24);
      if (uVar4 == 0) goto LAB_00136d3e;
      iVar6 = uVar4 - piVar5[5];
    }
    uVar4 = 0;
  }
LAB_00136d3e:
  return CONCAT44(param_1,uVar4);
}


