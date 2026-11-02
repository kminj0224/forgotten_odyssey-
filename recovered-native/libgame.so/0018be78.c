/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018be78  Symbol: FUN_0018be78 */

undefined4 FUN_0018be78(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 == 0) || (iVar2 = *(int *)(param_1 + 0x14), iVar2 == 0)) {
LAB_0018beba:
    uVar1 = 0xffffffff;
  }
  else {
    iVar4 = *(int *)(iVar2 + 0x2c);
    if (iVar4 == param_1) {
      *(undefined4 *)(iVar2 + 0x2c) = *(undefined4 *)(iVar4 + 0x18);
      if (*(int *)(iVar4 + 0x18) != 0) {
        *(undefined4 *)(*(int *)(iVar4 + 0x18) + 0x1c) = 0;
      }
    }
    else {
      do {
        iVar2 = iVar4;
        if (iVar2 == 0) goto LAB_0018beba;
        iVar4 = *(int *)(iVar2 + 0x18);
      } while (*(int *)(iVar2 + 0x18) != param_1);
      iVar3 = *(int *)(param_1 + 0x18);
      *(int *)(iVar2 + 0x18) = iVar3;
      iVar4 = param_1;
      if (iVar3 != 0) {
        *(int *)(iVar3 + 0x1c) = iVar2;
      }
    }
    FUN_0018bdf4(iVar4);
    uVar1 = 0;
  }
  return uVar1;
}


