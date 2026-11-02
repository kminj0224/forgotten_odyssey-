/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017ba44  Symbol: FUN_0017ba44 */

undefined4 FUN_0017ba44(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x168) << 0xc < 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x184) != 0x59) {
    if (param_2 == 0) {
      if (param_3 == 0) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x24);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = (*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) + *(int *)(iVar3 + 0x24);
      }
      if ((uint)(*(int *)(param_3 + 0x48) * 3) < (uint)((iVar1 + *(int *)(param_1 + 0x1bc)) * 10)) {
        return 0;
      }
    }
    else {
      if (param_2 <= DAT_0017badc) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0x24);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = (*(int *)(iVar3 + 0x10) - *(int *)(iVar3 + 0xc)) + *(int *)(iVar3 + 0x24);
      }
      uVar2 = (iVar1 + *(int *)(param_1 + 0x1bc)) * 10;
      if ((param_2 < uVar2) && ((uint)(*(int *)(param_1 + 0x1b8) * 3) < uVar2)) {
        return 0;
      }
    }
    FUN_0017b7fc(param_1,0x59,0);
  }
  return 1;
}


