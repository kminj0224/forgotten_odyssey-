/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00200268  Symbol: FUN_00200268 */

void FUN_00200268(int *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined auStack_14 [8];
  
  iVar1 = *param_1;
  if ((param_2 != *(uint *)(iVar1 + -8)) || (0 < *(int *)(iVar1 + -4))) {
    uVar2 = *(uint *)(iVar1 + -0xc);
    if (param_2 < uVar2) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_2 - uVar2;
    }
    iVar1 = FUN_00200188((uint *)(iVar1 + -0xc),auStack_14,iVar3);
    if (*param_1 + -0xc != DAT_002002e0 + 0x2002a8) {
      FUN_001ff644(*param_1 + -0xc,auStack_14);
    }
    *param_1 = iVar1;
  }
  return;
}


