/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5c68  Symbol: FUN_001a5c68 */

int * FUN_001a5c68(int param_1,int param_2)

{
  int *__s;
  int iVar1;
  int iVar2;
  code **ppcVar3;
  
  iVar2 = DAT_001a5cf4 + 0x1a5c74;
  ppcVar3 = *(code ***)(iVar2 + DAT_001a5cf8);
  __s = (int *)(**ppcVar3)(0xc);
  if (__s == (int *)0x0) {
    (***(code ***)(iVar2 + DAT_001a5cfc))
              (**(undefined4 **)(iVar2 + DAT_001a5d00),iVar2 + DAT_001a5d04);
  }
  else {
    memset(__s,0,0xc);
    iVar1 = (**ppcVar3)(0xc);
    *__s = iVar1;
    if (iVar1 == 0) {
      (***(code ***)(iVar2 + DAT_001a5cfc))
                (**(undefined4 **)(iVar2 + DAT_001a5d00),iVar2 + DAT_001a5d08);
      (***(code ***)(iVar2 + DAT_001a5d0c))(__s);
      __s = (int *)0x0;
    }
    else {
      *(int *)iVar1 = iVar1;
      *(int *)(*__s + 4) = *__s;
      *(undefined4 *)(*__s + 8) = 0;
      if (param_1 != 0) {
        __s[1] = param_1;
      }
      if (param_2 == 0) {
        __s[2] = iVar2 + DAT_001a5d10;
      }
      else {
        __s[2] = param_2;
      }
    }
  }
  return __s;
}


