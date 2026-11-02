/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c956c  Symbol: __convert_to_v<long_double> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<long double>(char const*, long double&, std::_Ios_Iostate&, int* const&)
    */

void std::__convert_to_v<long_double>
               (char *param_1,longdouble *param_2,_Ios_Iostate *param_3,int **param_4)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar1 = strlen(__s);
    __locale = (char *)operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,(char *)(DAT_001c96b8 + 0x1c95c0));
  }
  iVar2 = sscanf(param_1,(char *)(DAT_001c96bc + 0x1c95d0),param_2);
  if ((iVar2 == 0) || (iVar2 == -1)) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_3 = 4;
    setlocale(6,__locale);
    if (__locale == (char *)0x0) {
      return;
    }
  }
  else {
    uVar4 = *(undefined4 *)param_2;
    uVar5 = *(undefined4 *)((int)param_2 + 4);
    iVar2 = __aeabi_dcmpeq(uVar4,uVar5,0,DAT_001c96c0,param_4);
    uVar3 = DAT_001c96c4;
    if (iVar2 == 0) {
      iVar2 = __aeabi_dcmpeq(uVar4,uVar5,0,DAT_001c96c8,param_4);
      if (iVar2 == 0) {
        setlocale(6,__locale);
        if (__locale == (char *)0x0) {
          return;
        }
        goto LAB_001c9604;
      }
      uVar3 = 0xffefffff;
    }
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)((int)param_2 + 4) = uVar3;
    *(undefined4 *)param_3 = 4;
    setlocale(6,__locale);
    if (__locale == (char *)0x0) {
      return;
    }
  }
LAB_001c9604:
  operator_delete__(__locale);
  return;
}


