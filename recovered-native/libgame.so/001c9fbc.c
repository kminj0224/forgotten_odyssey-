/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9fbc  Symbol: FUN_001c9fbc */

uint FUN_001c9fbc(int *param_1,undefined *param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  size_t __n;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar5 = (uint)*(byte *)((int)param_1 + 0x46);
    if (uVar5 != 0) {
      iVar1 = (**(code **)(*param_1 + 0x34))(param_1,0xffffffff);
      if (iVar1 == -1) {
        return 0;
      }
      iVar1 = param_1[0xf];
      param_1[1] = iVar1;
      param_1[2] = iVar1;
      param_1[3] = iVar1;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined *)((int)param_1 + 0x46) = 0;
      uVar5 = 0;
    }
    goto LAB_001ca01c;
  }
  puVar4 = param_2;
  if (param_3 < 1) {
    uVar5 = 0;
LAB_001ca16c:
    puVar2 = (undefined *)param_1[1];
    puVar3 = (undefined *)param_1[2];
  }
  else {
    puVar2 = (undefined *)param_1[1];
    puVar3 = (undefined *)param_1[2];
    if (puVar3 == puVar2) {
      puVar4 = param_2 + 1;
      *param_2 = *puVar3;
      uVar5 = 1;
      param_1[2] = param_1[2] + 1;
      param_3 = param_3 + -1;
      param_2 = puVar4;
      if (*(char *)(param_1 + 0x14) == '\0') goto LAB_001ca01c;
      goto LAB_001ca16c;
    }
    uVar5 = 0;
  }
  iVar1 = param_1[0x12];
  if (puVar3 != puVar2) {
    iVar1 = iVar1 + 1;
  }
  param_1[0x12] = iVar1;
  param_1[1] = param_1[0xf];
  param_1[2] = iVar1;
  param_1[3] = param_1[0x13];
  *(undefined *)(param_1 + 0x14) = 0;
  param_2 = puVar4;
LAB_001ca01c:
  uVar6 = param_1[0xb];
  if ((uint)param_1[0x10] < 2) {
    iVar1 = 1;
  }
  else {
    iVar1 = param_1[0x10] - 1;
  }
  if (iVar1 < param_3) {
    if ((int *)param_1[0x15] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4358();
    }
    iVar1 = (**(code **)(*(int *)param_1[0x15] + 0x18))();
    if ((iVar1 != 0) && ((uVar6 & 8) != 0)) {
      __n = param_1[3] - (int)(void *)param_1[2];
      if (__n != 0) {
        memcpy(param_2,(void *)param_1[2],__n);
        param_2 = param_2 + __n;
        uVar5 = uVar5 + __n;
        param_3 = param_3 - __n;
        param_1[2] = param_1[2] + __n;
      }
      while( true ) {
        iVar1 = FUN_00207f6c(param_1 + 9,param_2,param_3);
        if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4828(DAT_001ca218 + 0x1ca214);
        }
        if (iVar1 == 0) break;
        param_3 = param_3 - iVar1;
        uVar5 = uVar5 + iVar1;
        if (param_3 == 0) goto LAB_001ca174;
        param_2 = param_2 + iVar1;
      }
      if (param_3 != 0) {
        iVar1 = param_1[0xf];
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        *(undefined *)((int)param_1 + 0x45) = 0;
        param_1[1] = iVar1;
        param_1[2] = iVar1;
        param_1[3] = iVar1;
        return uVar5;
      }
LAB_001ca174:
      iVar1 = param_1[0xf];
      param_1[1] = iVar1;
      param_1[2] = iVar1;
      param_1[3] = iVar1;
      if (((param_1[0xb] & 0x10U) == 0) || ((uint)param_1[0x10] < 2)) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
      }
      else {
        param_1[5] = iVar1;
        param_1[4] = iVar1;
        param_1[6] = iVar1 + (param_1[0x10] - 1U);
      }
      *(undefined *)((int)param_1 + 0x45) = 1;
      return uVar5;
    }
  }
  iVar1 = FUN_001ebff8(param_1,param_2,param_3);
  return uVar5 + iVar1;
}


