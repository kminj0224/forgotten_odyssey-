/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019fe28  Symbol: FUN_0019fe28 */

void FUN_0019fe28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_0019fe94 + 0x19fe34;
  if ((((param_2 != 0) && (param_1 != 0)) && (*(int *)(param_2 + 4) == 0x12)) &&
     ((*(int *)(param_2 + 8) != 0 &&
      (iVar1 = FUN_0019c30c(*(undefined4 *)(param_2 + 0xc),iVar2 + DAT_0019fe98), iVar1 == 0)))) {
    if (*(int *)(param_2 + 0xc) == 0) {
      FUN_00190950(param_1,6,iVar2 + DAT_0019fea0);
    }
    else {
      FUN_00190950(param_1,7,iVar2 + DAT_0019fe9c);
      FUN_00190a68(param_1,*(undefined4 *)(param_2 + 0xc));
    }
    FUN_00190950(param_1,1,iVar2 + DAT_0019fea4);
    FUN_0018ac20(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_2 + 8));
  }
  return;
}


