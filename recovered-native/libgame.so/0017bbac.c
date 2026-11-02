/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017bbac  Symbol: FUN_0017bbac */

void FUN_0017bbac(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = DAT_0017bc48 + 0x17bbb8;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0xd4) != 0) && (*(int *)(param_1 + 0xac) == -1)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x54) = 0x2a;
  }
  iVar3 = param_3;
  iVar1 = DAT_0017bc50;
  if (param_2 == 0) {
    iVar3 = 0;
    param_2 = param_3;
    iVar1 = DAT_0017bc4c;
  }
  FUN_001a5374(0,0,0,param_1,0,1,*(undefined4 *)(param_1 + 0x54),3,0,0,param_2,iVar3,0,0,0,
               iVar2 + iVar1,param_2);
  if ((param_1 != 0) && (*(undefined4 *)(param_1 + 0xc) = 0, *(int *)(param_1 + 0x120) == 0)) {
    *(undefined4 *)(param_1 + 0xd4) = 1;
  }
  return;
}


