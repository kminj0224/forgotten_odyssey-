/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00206728  Symbol: FUN_00206728 */

uint FUN_00206728(undefined4 param_1,int *param_2,char *param_3,char *param_4,int param_5)

{
  size_t sVar1;
  uint uVar2;
  int local_1c;
  
  local_1c = *param_2;
  uVar2 = (uint)(param_5 != 0 && param_3 < param_4);
  if (param_5 != 0 && param_3 < param_4) {
    uVar2 = 0;
    do {
      sVar1 = mbrtowc((wchar_t *)0x0,param_3,(int)param_4 - (int)param_3,(mbstate_t *)&local_1c);
      if (sVar1 == 0xffffffff) {
        return uVar2;
      }
      if (sVar1 == 0xfffffffe) {
        return uVar2;
      }
      if (sVar1 == 0) {
        sVar1 = 1;
      }
      param_5 = param_5 + -1;
      param_3 = param_3 + sVar1;
      *param_2 = local_1c;
      uVar2 = sVar1 + uVar2;
    } while (param_3 < param_4 && param_5 != 0);
  }
  return uVar2;
}


