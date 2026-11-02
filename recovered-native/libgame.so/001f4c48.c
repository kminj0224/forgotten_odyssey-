/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001f4c48  Symbol: FUN_001f4c48 */

void FUN_001f4c48(int param_1,wchar_t param_2,wchar_t *param_3,wchar_t *param_4,int param_5,
                 size_t param_6)

{
  int *piVar1;
  wchar_t wVar2;
  wchar_t wVar3;
  wchar_t *__s;
  size_t __n;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = *(uint *)(param_1 + 0xc) & 0xb0;
  __n = param_5 - param_6;
  if (uVar6 == 0x20) {
    wmemcpy(param_3,param_4,param_6);
    wmemset(param_3 + param_6,param_2,__n);
    return;
  }
  if (uVar6 == 0x10) {
    piVar1 = (int *)FUN_001f1db0(param_1 + 0x6c);
    wVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0x2d);
    wVar3 = *param_4;
    if (wVar3 != wVar2) {
      wVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0x2b);
      wVar3 = *param_4;
      if (wVar3 != wVar2) {
        wVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0x30);
        if (((*param_4 == wVar2) && (1 < (int)param_6)) &&
           ((wVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0x78), param_4[1] == wVar2 ||
            (wVar2 = (**(code **)(*piVar1 + 0x28))(piVar1,0x58), param_4[1] == wVar2)))) {
          *param_3 = *param_4;
          iVar4 = 8;
          param_3[1] = param_4[1];
          iVar5 = 2;
          __s = param_3 + 2;
          goto LAB_001f4c84;
        }
        goto LAB_001f4c7c;
      }
    }
    __s = param_3 + 1;
    *param_3 = wVar3;
    iVar4 = 4;
    iVar5 = 1;
  }
  else {
LAB_001f4c7c:
    iVar4 = 0;
    iVar5 = 0;
    __s = param_3;
  }
LAB_001f4c84:
  wmemset(__s,param_2,__n);
  wmemcpy(__s + __n,(wchar_t *)((int)param_4 + iVar4),param_6 - iVar5);
  return;
}


