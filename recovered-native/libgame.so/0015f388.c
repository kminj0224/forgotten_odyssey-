/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f388  Symbol: unzGoToNextFile */

/* cocos2d::unzGoToNextFile(void*) */

int cocos2d::unzGoToNextFile(void *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (void *)0x0) {
    iVar2 = 0x66;
  }
  else {
    if ((*(uint *)((int)param_1 + 0x60) | *(uint *)((int)param_1 + 100)) != 0) {
      uVar4 = *(uint *)((int)param_1 + 0x50);
      if ((((*(int *)((int)param_1 + 0x38) == DAT_0015f420) && (*(int *)((int)param_1 + 0x3c) == 0))
          || (uVar4 + 1 != *(int *)((int)param_1 + 0x38))) ||
         (*(int *)((int)param_1 + 0x54) + (uint)(0xfffffffe < uVar4) !=
          *(int *)((int)param_1 + 0x3c))) {
        uVar1 = *(int *)((int)param_1 + 0xa8) + *(int *)((int)param_1 + 0xac) + 0x2e +
                *(int *)((int)param_1 + 0xb0);
        uVar3 = *(uint *)((int)param_1 + 0x58);
        *(uint *)((int)param_1 + 0x58) = uVar3 + uVar1;
        *(uint *)((int)param_1 + 0x5c) = *(int *)((int)param_1 + 0x5c) + (uint)CARRY4(uVar3,uVar1);
        *(uint *)((int)param_1 + 0x50) = uVar4 + 1;
        *(uint *)((int)param_1 + 0x54) = *(int *)((int)param_1 + 0x54) + (uint)(0xfffffffe < uVar4);
        iVar2 = FUN_0015e82c(param_1,(int)param_1 + 0x80,(int)param_1 + 0xd8,0,0,0,0,0,0);
        *(uint *)((int)param_1 + 0x60) = (uint)(iVar2 == 0);
        *(undefined4 *)((int)param_1 + 100) = 0;
        return iVar2;
      }
    }
    iVar2 = 100;
  }
  return -iVar2;
}


