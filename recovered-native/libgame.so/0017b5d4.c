/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017b5d4  Symbol: FUN_0017b5d4 */

undefined4 FUN_0017b5d4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  code **ppcVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 300) == 0) {
    ppcVar3 = *(code ***)(DAT_0017b650 + 0x17b5e4 + DAT_0017b654);
    iVar1 = (**ppcVar3)(0xdc);
    if (iVar1 != 0) {
      *(int *)(param_1 + 300) = iVar1;
      iVar1 = (**ppcVar3)(0x2c);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x154) = iVar1;
        *(undefined4 *)(param_1 + 0x130) = 0x37;
        goto LAB_0017b63c;
      }
    }
  }
  else {
    if (param_2 + 4 < *(int *)(param_1 + 0x130)) {
LAB_0017b63c:
      return *(undefined4 *)(param_1 + 0x130);
    }
    iVar4 = (param_2 + 5) * 2;
    ppcVar3 = *(code ***)(DAT_0017b650 + 0x17b5e4 + DAT_0017b658);
    pcVar2 = *ppcVar3;
    iVar1 = (*pcVar2)(*(int *)(param_1 + 300),(param_2 + 5) * 8,DAT_0017b658,pcVar2,param_4);
    if (iVar1 != 0) {
      *(int *)(param_1 + 300) = iVar1;
      iVar1 = __divsi3(iVar4,5);
      iVar1 = (**ppcVar3)(*(undefined4 *)(param_1 + 0x154),iVar1 << 2);
      if (iVar1 != 0) {
        *(int *)(param_1 + 0x154) = iVar1;
        *(int *)(param_1 + 0x130) = iVar4;
        goto LAB_0017b63c;
      }
    }
  }
  FUN_00179430(param_1,0);
  return 0xffffffff;
}


