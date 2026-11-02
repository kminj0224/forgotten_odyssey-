/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018c898  Symbol: FUN_0018c898 */

int FUN_0018c898(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_1 == 0) || (*(int *)(param_1 + 0x50) == 0)) {
    iVar2 = FUN_0018a130(param_2,param_3);
  }
  else {
    uVar1 = FUN_0019d178(*(int *)(param_1 + 0x50),param_3,0xffffffff);
    iVar2 = FUN_0018a0c4(param_2,uVar1);
  }
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x20) = param_1, param_4 != 0)) {
    iVar3 = FUN_0018c4e4(param_1,param_4);
    *(int *)(iVar2 + 0xc) = iVar3;
    if (iVar3 != 0) {
      while (*(int *)(iVar3 + 0x18) != 0) {
        *(int *)(iVar3 + 0x14) = iVar2;
        iVar3 = *(int *)(iVar3 + 0x18);
      }
      *(int *)(iVar3 + 0x14) = iVar2;
    }
    *(int *)(iVar2 + 0x10) = iVar3;
  }
  return iVar2;
}


