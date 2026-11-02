/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192b88  Symbol: FUN_00192b88 */

int FUN_00192b88(int param_1,byte **param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *local_14;
  
  local_14 = *param_2;
  iVar2 = FUN_001928d8(param_1,&local_14);
  if ((iVar2 != 0) || (bVar1 = *local_14, local_14 = local_14 + 1, bVar1 != 0x40)) {
    local_14 = *param_2;
  }
  iVar2 = FUN_001929e4(param_1,&local_14);
  if (iVar2 == 0) {
    if (*local_14 == 0x3a) {
      pbVar3 = local_14 + 1;
      if (9 < (byte)(local_14[1] - 0x30)) {
        return 1;
      }
      if (param_1 != 0) {
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      while (local_14 = pbVar3, (*pbVar3 - 0x30 & 0xff) < 10) {
        if (param_1 != 0) {
          *(uint *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) * 10 + (uint)*pbVar3 + -0x30;
        }
        pbVar3 = pbVar3 + 1;
      }
    }
    *param_2 = local_14;
  }
  return iVar2;
}


