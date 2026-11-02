/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f440  Symbol: FUN_0019f440 */

void FUN_0019f440(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 == 0) {
    return;
  }
  if ((param_4 == 0) && (iVar3 = DAT_0019f49c, param_3 == 0)) {
LAB_0019f488:
    FUN_0019f1a8(param_1,0x69,DAT_0019f498 + 0x19f44c + iVar3,param_2);
  }
  else {
    if (*(int *)(param_1 + 0xd8) == 1) {
      uVar1 = *(undefined4 *)(iVar2 + 0x2c);
    }
    else {
      iVar3 = DAT_0019f4a0;
      if (*(int *)(param_1 + 0xd8) != 2) goto LAB_0019f488;
      uVar1 = *(undefined4 *)(iVar2 + 0x30);
    }
    FUN_00194770(param_1 + 0x6c,uVar1,param_2,param_3,param_4);
  }
  return;
}


