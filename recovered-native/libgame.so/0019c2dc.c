/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c2dc  Symbol: FUN_0019c2dc */

int FUN_0019c2dc(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (param_1 != param_2) {
    if (param_1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
      if (param_2 != 0) {
        iVar3 = 0;
        do {
          pbVar1 = (byte *)(param_2 + iVar3);
          iVar2 = (uint)*(byte *)(param_1 + iVar3) - (uint)*pbVar1;
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar3 = iVar3 + 1;
          iVar2 = 0;
        } while (*pbVar1 != 0);
      }
    }
  }
  return iVar2;
}


