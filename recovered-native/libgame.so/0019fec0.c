/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fec0  Symbol: FUN_0019fec0 */

uint FUN_0019fec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0019ff38 + 0x19fecc;
  if (param_2 == 0) {
    if (param_1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    iVar1 = FUN_0019c30c(param_2,iVar2 + DAT_0019ff3c);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0019c30c(param_2,iVar2 + DAT_0019ff40);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_0019c30c(param_2,iVar2 + DAT_0019ff44);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = FUN_0019c30c(param_1,iVar2 + DAT_0019ff48);
  if ((iVar1 == 0) && (iVar1 = FUN_0019c30c(param_1,iVar2 + DAT_0019ff4c), iVar1 == 0)) {
    iVar2 = FUN_0019c30c(param_1,iVar2 + DAT_0019ff50);
    return (uint)(iVar2 != 0);
  }
  return 1;
}


