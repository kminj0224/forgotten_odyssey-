/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018cafc  Symbol: FUN_0018cafc */

int FUN_0018cafc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar4 = 0;
  while( true ) {
    if (param_2 == 0) {
      return iVar4;
    }
    iVar1 = FUN_0018caec(param_1,param_2);
    if (iVar1 == 0) break;
    iVar3 = iVar1;
    if (iVar2 != 0) {
      *(int *)(iVar2 + 0x18) = iVar1;
      *(int *)(iVar1 + 0x1c) = iVar2;
      iVar3 = iVar4;
    }
    param_2 = *(int *)(param_2 + 0x18);
    iVar2 = iVar1;
    iVar4 = iVar3;
  }
  return 0;
}


