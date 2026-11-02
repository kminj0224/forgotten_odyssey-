/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017d3a4  Symbol: FUN_0017d3a4 */

void FUN_0017d3a4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x160) != 0) {
    FUN_0018e988(*(int *)(param_1 + 0x160),DAT_0017d3d8 + 0x17d3b4 + DAT_0017d3dc,param_1);
    iVar1 = FUN_0018ea30(*(undefined4 *)(param_1 + 0x160));
    if (iVar1 == 0) {
      FUN_0018f328(*(undefined4 *)(param_1 + 0x160),0);
      *(undefined4 *)(param_1 + 0x160) = 0;
    }
  }
  return;
}


