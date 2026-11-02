/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ca21c  Symbol: FUN_001ca21c */

uint FUN_001ca21c(int *param_1,wchar_t *param_2,int param_3)

{
  size_t __n;
  wchar_t *pwVar1;
  int iVar2;
  wchar_t *pwVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  if (*(char *)(param_1 + 0x15) == '\0') {
    uVar5 = (uint)*(byte *)((int)param_1 + 0x46);
    if (uVar5 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x34))(param_1,0xffffffff);
      if (iVar2 == -1) {
        return 0;
      }
      iVar2 = param_1[0xf];
      param_1[1] = iVar2;
      param_1[2] = iVar2;
      param_1[3] = iVar2;
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      *(undefined *)((int)param_1 + 0x46) = 0;
      uVar5 = 0;
    }
    goto LAB_001ca278;
  }
  if (param_3 < 1) {
    pwVar3 = (wchar_t *)param_1[1];
    pwVar1 = (wchar_t *)param_1[2];
    uVar5 = 0;
LAB_001ca3d8:
    iVar2 = param_1[0x13];
    if (pwVar1 == pwVar3) {
      iVar4 = 0;
    }
    else {
      iVar4 = 4;
    }
  }
  else {
    pwVar3 = (wchar_t *)param_1[2];
    if (pwVar3 == (wchar_t *)param_1[1]) {
      pwVar1 = pwVar3 + 1;
      param_3 = param_3 + -1;
      uVar5 = 1;
      *param_2 = *pwVar3;
      param_2 = param_2 + 1;
      goto LAB_001ca3d8;
    }
    iVar2 = param_1[0x13];
    uVar5 = 0;
    iVar4 = 4;
  }
  param_1[0x13] = iVar2 + iVar4;
  param_1[1] = param_1[0xf];
  param_1[2] = iVar2 + iVar4;
  param_1[3] = param_1[0x14];
  *(undefined *)(param_1 + 0x15) = 0;
LAB_001ca278:
  uVar6 = param_1[0xb];
  if ((uint)param_1[0x10] < 2) {
    iVar2 = 1;
  }
  else {
    iVar2 = param_1[0x10] - 1;
  }
  if (iVar2 < param_3) {
    if ((int *)param_1[0x16] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4358();
    }
    iVar2 = (**(code **)(*(int *)param_1[0x16] + 0x18))();
    if ((iVar2 != 0) && ((uVar6 & 8) != 0)) {
      __n = param_1[3] - (int)(wchar_t *)param_1[2] >> 2;
      if (__n != 0) {
        wmemcpy(param_2,(wchar_t *)param_1[2],__n);
        uVar5 = uVar5 + __n;
        param_3 = param_3 - __n;
        param_2 = param_2 + __n;
        param_1[2] = param_1[2] + __n * 4;
      }
      while( true ) {
        iVar2 = FUN_00207f6c(param_1 + 9,param_2,param_3);
        if (iVar2 == -1) {
                    /* WARNING: Subroutine does not return */
          FUN_001c4828(DAT_001ca47c + 0x1ca478);
        }
        if (iVar2 == 0) break;
        param_3 = param_3 - iVar2;
        uVar5 = uVar5 + iVar2;
        if (param_3 == 0) goto LAB_001ca3ec;
        param_2 = param_2 + iVar2;
      }
      if (param_3 != 0) {
        iVar2 = param_1[0xf];
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        *(undefined *)((int)param_1 + 0x45) = 0;
        param_1[1] = iVar2;
        param_1[2] = iVar2;
        param_1[3] = iVar2;
        return uVar5;
      }
LAB_001ca3ec:
      iVar2 = param_1[0xf];
      param_1[1] = iVar2;
      param_1[2] = iVar2;
      param_1[3] = iVar2;
      if (((param_1[0xb] & 0x10U) == 0) || ((uint)param_1[0x10] < 2)) {
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
      }
      else {
        param_1[5] = iVar2;
        param_1[4] = iVar2;
        param_1[6] = iVar2 + (param_1[0x10] - 1U) * 4;
      }
      *(undefined *)((int)param_1 + 0x45) = 1;
      return uVar5;
    }
  }
  iVar2 = FUN_001ebe50(param_1,param_2,param_3);
  return uVar5 + iVar2;
}


