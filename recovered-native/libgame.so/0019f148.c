/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f148  Symbol: FUN_0019f148 */

void FUN_0019f148(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0019f1a0 + 0x19f154;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xac) == -1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x6b;
  }
  FUN_001a5374(0,0,0,param_1,0,1,0x6b,1,0,0,param_2,0,0,0,0,iVar1 + DAT_0019f1a4,param_2);
  return;
}


