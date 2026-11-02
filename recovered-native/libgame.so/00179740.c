/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00179740  Symbol: FUN_00179740 */

int FUN_00179740(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_001797a8 + 0x17974c;
  if (param_2 == 0) {
    iVar1 = 0;
    FUN_00179364(param_1,iVar2 + DAT_001797ac,0);
  }
  else {
    if (**(int **)(iVar2 + DAT_001797b0) != 0) {
      (***(code ***)(iVar2 + DAT_001797b4))
                (**(undefined4 **)(iVar2 + DAT_001797b8),iVar2 + DAT_001797bc,param_2,
                 *(code ***)(iVar2 + DAT_001797b4),param_4);
    }
    iVar1 = FUN_001795e0(param_1);
    if (iVar1 == 0) {
      FUN_00179430(param_1,iVar2 + DAT_001797c0);
    }
    else {
      *(int *)(iVar1 + 0xc) = param_2;
      *(int *)(iVar1 + 0x10) = param_2;
      iVar2 = FUN_0019c49c(param_2);
      *(int *)(iVar1 + 0x18) = iVar2;
      *(int *)(iVar1 + 0x14) = param_2 + iVar2;
    }
  }
  return iVar1;
}


