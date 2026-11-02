/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ee368  Symbol: FUN_001ee368 */

int * FUN_001ee368(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    iVar2 = *param_1;
    iVar1 = *(int *)(iVar2 + -0xc);
    if (0x3ffffffcU - iVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4558((int)&DAT_001ee428 + DAT_001ee42c);
    }
    uVar3 = param_2 + iVar1;
    if ((*(uint *)(iVar2 + -8) < uVar3) || (0 < *(int *)(iVar2 + -4))) {
      FUN_001ee274(param_1,uVar3);
      iVar2 = *param_1;
      iVar1 = *(int *)(iVar2 + -0xc);
    }
    if (param_2 == 1) {
      *(char *)(iVar2 + iVar1) = (char)param_3;
    }
    else {
      memset((void *)(iVar2 + iVar1),param_3,param_2);
    }
    iVar1 = *param_1;
    if (iVar1 + -0xc != DAT_001ee428 + 0x1ee408) {
      *(undefined4 *)(iVar1 + -4) = 0;
      *(uint *)(iVar1 + -0xc) = uVar3;
      *(undefined *)(iVar1 + uVar3) = 0;
    }
  }
  return param_1;
}


