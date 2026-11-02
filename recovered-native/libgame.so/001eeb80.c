/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eeb80  Symbol: FUN_001eeb80 */

undefined4 * FUN_001eeb80(undefined4 *param_1,int *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_c [4];
  
  iVar3 = *param_2;
  if (*(uint *)(iVar3 + -0xc) < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_001c45d0((int)&DAT_001eebdc + DAT_001eebdc);
  }
  uVar4 = *(uint *)(iVar3 + -0xc) - param_3;
  if (param_4 < uVar4) {
    iVar2 = param_3 + param_4;
  }
  else {
    iVar2 = param_3 + uVar4;
  }
  uVar1 = FUN_001eea38(iVar3 + param_3,iVar3 + iVar2,auStack_c,0);
  *param_1 = uVar1;
  return param_1;
}


