/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c444  Symbol: FUN_0019c444 */

byte * FUN_0019c444(byte *param_1,byte *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != (byte *)0x0) {
    iVar3 = 0;
    if (param_2 != (byte *)0x0) {
      for (; param_2[iVar3] != 0; iVar3 = iVar3 + 1) {
      }
      if (iVar3 == 0) {
        return param_1;
      }
      iVar4 = DAT_0019c494 + 0x19c450 + DAT_0019c498;
      for (; *param_1 != 0; param_1 = param_1 + 1) {
        cVar1 = *(char *)(iVar4 + (uint)*param_2);
        if ((*(char *)(iVar4 + (uint)*param_1) == cVar1) &&
           (iVar2 = FUN_0019c3dc(param_1,param_2,iVar3,cVar1,param_4), iVar2 == 0)) {
          return param_1;
        }
      }
    }
    param_1 = (byte *)0x0;
  }
  return param_1;
}


