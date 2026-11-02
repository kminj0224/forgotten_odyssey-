/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d6dc  Symbol: FUN_0019d6dc */

undefined4 FUN_0019d6dc(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019d718 + 0x19d6e8;
  if (((*(int *)(iVar3 + DAT_0019d71c) == 0) && (iVar1 = FUN_0019d5e4(), iVar1 == 0)) ||
     (param_1 == (int *)0x0)) {
    uVar2 = 0xffffffff;
  }
  else {
    iVar3 = iVar3 + DAT_0019d71c;
    FUN_0019c27c(*(undefined4 *)(iVar3 + 4));
    *param_1 = *param_1 + 1;
    FUN_0019c280(*(undefined4 *)(iVar3 + 4));
    uVar2 = 0;
  }
  return uVar2;
}


