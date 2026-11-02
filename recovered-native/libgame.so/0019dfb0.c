/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019dfb0  Symbol: FUN_0019dfb0 */

void FUN_0019dfb0(int param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    if (*param_2 == '#') {
      uVar1 = FUN_0018b0f4();
    }
    else {
      uVar1 = FUN_0018b04c(*(undefined4 *)(param_1 + 8));
    }
    iVar2 = FUN_0018c194(*(undefined4 *)(param_1 + 0x34),uVar1);
    if (iVar2 == 0) {
      FUN_0018bf48(uVar1);
    }
  }
  return;
}


