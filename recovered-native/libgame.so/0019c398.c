/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019c398  Symbol: FUN_0019c398 */

int FUN_0019c398(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (param_1 != param_2) {
    if (param_1 == 0) {
      iVar2 = -1;
    }
    else {
      iVar2 = 1;
      if (param_2 != 0) {
        iVar4 = 0;
        iVar3 = DAT_0019c3d4 + 0x19c3a4 + DAT_0019c3d8;
        do {
          pbVar1 = (byte *)(param_2 + iVar4);
          iVar2 = (uint)*(byte *)(iVar3 + (uint)*(byte *)(param_1 + iVar4)) -
                  (uint)*(byte *)(iVar3 + (uint)*pbVar1);
          if (iVar2 != 0) {
            return iVar2;
          }
          iVar4 = iVar4 + 1;
          iVar2 = 0;
        } while (*pbVar1 != 0);
      }
    }
  }
  return iVar2;
}


