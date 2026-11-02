/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c3dc  Symbol: FUN_0019c3dc */

int FUN_0019c3dc(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_3 < 1) || (param_1 == param_2)) {
    iVar2 = 0;
  }
  else if (param_1 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
    if (param_2 != 0) {
      iVar4 = 0;
      iVar3 = DAT_0019c424 + 0x19c3e6 + DAT_0019c428;
      do {
        pbVar1 = (byte *)(param_2 + iVar4);
        iVar2 = (uint)*(byte *)(iVar3 + (uint)*(byte *)(param_1 + iVar4)) -
                (uint)*(byte *)(iVar3 + (uint)*pbVar1);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + -1;
        if (param_3 == 0) {
          return 0;
        }
        iVar4 = iVar4 + 1;
        iVar2 = 0;
      } while (*pbVar1 != 0);
    }
  }
  return iVar2;
}


