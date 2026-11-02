/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001c9438  Symbol: __convert_to_v<double> */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* void std::__convert_to_v<double>(char const*, double&, std::_Ios_Iostate&, int* const&) */

void std::__convert_to_v<double>(char *param_1,double *param_2,_Ios_Iostate *param_3,int **param_4)

{
  char *pcVar1;
  size_t sVar2;
  char *__locale;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  char *local_24 [2];
  
  pcVar1 = setlocale(6,(char *)0x0);
  if (pcVar1 == (char *)0x0) {
    __locale = (char *)0x0;
  }
  else {
    sVar2 = strlen(pcVar1);
    __locale = (char *)operator_new__(sVar2 + 1);
    memcpy(__locale,pcVar1,sVar2 + 1);
    setlocale(6,(char *)(DAT_001c955c + 0x1c9490));
  }
  pcVar1 = param_1;
  strtod(param_1,local_24);
  *(char **)param_2 = pcVar1;
  *(undefined4 *)((int)param_2 + 4) = extraout_r1;
  if ((local_24[0] == param_1) || (*local_24[0] != '\0')) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    *(undefined4 *)param_3 = 4;
  }
  else {
    iVar3 = __aeabi_dcmpeq();
    uVar4 = DAT_001c9564;
    if (iVar3 == 0) {
      iVar3 = __aeabi_dcmpeq(pcVar1,extraout_r1);
      if (iVar3 == 0) goto LAB_001c94d4;
      uVar4 = 0xffefffff;
    }
    *(undefined4 *)param_2 = 0xffffffff;
    *(undefined4 *)((int)param_2 + 4) = uVar4;
    *(undefined4 *)param_3 = 4;
  }
LAB_001c94d4:
  setlocale(6,__locale);
  if (__locale != (char *)0x0) {
    operator_delete__(__locale);
  }
  return;
}


