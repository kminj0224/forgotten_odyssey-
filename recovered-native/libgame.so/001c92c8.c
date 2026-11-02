/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c92c8  Symbol: __convert_to_v<float> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<float>(char const*, float&, std::_Ios_Iostate&, int* const&) */

void std::__convert_to_v<float>(char *param_1,float *param_2,_Ios_Iostate *param_3,int **param_4)

{
  char *__s;
  size_t sVar1;
  char *__locale;
  float fVar2;
  int iVar3;
  float fVar4;
  char *local_24 [2];
  
  __s = setlocale(6,(char *)0x0);
  if (__s == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar1 = strlen(__s);
    __locale = (char *)operator_new__(sVar1 + 1);
    memcpy(__locale,__s,sVar1 + 1);
    setlocale(6,(char *)(DAT_001c9428 + 0x1c9320));
  }
  strtod(param_1,local_24);
  fVar2 = (float)__truncdfsf2();
  *param_2 = fVar2;
  if ((local_24[0] == param_1) || (*local_24[0] != '\0')) {
    *param_2 = 0.0;
    *(undefined4 *)param_3 = 4;
  }
  else {
    iVar3 = __unordsf2((uint)fVar2 & 0x7fffffff,DAT_001c942c);
    if ((iVar3 == 0) && (iVar3 = __aeabi_fcmpgt((uint)fVar2 & 0x7fffffff,DAT_001c942c), iVar3 == 0))
    {
      iVar3 = __aeabi_fcmpeq(fVar2,DAT_001c9430);
      fVar4 = DAT_001c942c;
      if (iVar3 == 0) {
        iVar3 = __aeabi_fcmpeq(fVar2,DAT_001c9434);
        if (iVar3 == 0) goto LAB_001c9360;
        fVar4 = -3.402823e+38;
      }
    }
    else {
      iVar3 = __aeabi_fcmpgt(fVar2,0);
      fVar4 = DAT_001c942c;
      if (iVar3 == 0) {
        fVar4 = -3.402823e+38;
      }
    }
    *param_2 = fVar4;
    *(undefined4 *)param_3 = 4;
  }
LAB_001c9360:
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  return;
}


