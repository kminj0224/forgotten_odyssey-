/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00205a74  Symbol: FUN_00205a74 */

int * FUN_00205a74(int *param_1,wchar_t *param_2,int param_3,wchar_t param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  wchar_t *pwVar4;
  wchar_t wVar5;
  uint uVar6;
  wchar_t *pwVar7;
  uint uVar8;
  int *piVar9;
  wchar_t *__s1;
  size_t __n;
  byte local_24 [8];
  
  param_1[1] = 0;
  FUN_001d4f84(local_24,param_1);
  uVar6 = (uint)local_24[0];
  __s1 = param_2;
  if (uVar6 == 0) {
LAB_00205ab0:
    if (0 < param_3) {
      *__s1 = L'\0';
    }
    if (param_1[1] == 0) {
      uVar6 = uVar6 | 4;
    }
    else if (uVar6 == 0) {
      return param_1;
    }
    iVar2 = (int)param_1 + *(int *)(*param_1 + -0xc);
    FUN_001d1404(iVar2,uVar6 | *(uint *)(iVar2 + 0x14));
    return param_1;
  }
  piVar9 = *(int **)((int)param_1 + *(int *)(*param_1 + -0xc) + 0x7c);
  pwVar7 = (wchar_t *)piVar9[2];
  if ((wchar_t *)piVar9[3] <= pwVar7) goto LAB_00205c60;
  do {
    wVar5 = *pwVar7;
    __s1 = param_2;
LAB_00205b20:
    do {
      iVar2 = param_1[1];
LAB_00205b24:
      if (param_3 <= iVar2 + 1) {
        if (wVar5 == L'\xffffffff') {
LAB_00205c78:
          uVar6 = 2;
        }
        else if (param_4 == wVar5) {
LAB_00205b44:
          uVar8 = piVar9[2];
          uVar6 = piVar9[3];
          param_1[1] = iVar2 + 1;
          if (uVar8 < uVar6) {
            piVar9[2] = uVar8 + 4;
            uVar6 = 0;
          }
          else {
            (**(code **)(*piVar9 + 0x28))(piVar9);
            uVar6 = 0;
          }
        }
        else {
          uVar6 = 4;
        }
        goto LAB_00205ab0;
      }
      if (wVar5 == L'\xffffffff') goto LAB_00205c78;
      if (wVar5 == param_4) goto LAB_00205b44;
      pwVar4 = (wchar_t *)piVar9[3];
      pwVar7 = (wchar_t *)piVar9[2];
      sVar1 = (int)pwVar4 - (int)pwVar7 >> 2;
      __n = (param_3 - iVar2) - 1;
      if ((int)sVar1 <= (int)__n) {
        __n = sVar1;
      }
      if (1 < (int)__n) {
        pwVar7 = wmemchr(pwVar7,param_4,__n);
        if (pwVar7 != (wchar_t *)0x0) {
          __n = (int)pwVar7 - (int)(wchar_t *)piVar9[2] >> 2;
        }
        wmemcpy(__s1,(wchar_t *)piVar9[2],__n);
        iVar3 = piVar9[2];
        uVar8 = piVar9[3];
        uVar6 = iVar3 + __n * 4;
        iVar2 = __n + param_1[1];
        piVar9[2] = uVar6;
        __s1 = __s1 + __n;
        param_1[1] = iVar2;
        if (uVar6 < uVar8) {
          wVar5 = *(wchar_t *)(iVar3 + __n * 4);
        }
        else {
          wVar5 = (**(code **)(*piVar9 + 0x24))(piVar9);
          iVar2 = param_1[1];
        }
        goto LAB_00205b24;
      }
      param_2 = __s1 + 1;
      *__s1 = wVar5;
      param_1[1] = param_1[1] + 1;
      if (pwVar7 < pwVar4) {
        wVar5 = *pwVar7;
        piVar9[2] = (int)(pwVar7 + 1);
      }
      else {
        wVar5 = (**(code **)(*piVar9 + 0x28))(piVar9);
      }
      __s1 = param_2;
    } while (wVar5 == L'\xffffffff');
    pwVar7 = (wchar_t *)piVar9[2];
  } while (pwVar7 < (wchar_t *)piVar9[3]);
LAB_00205c60:
  wVar5 = (**(code **)(*piVar9 + 0x24))(piVar9);
  goto LAB_00205b20;
}


