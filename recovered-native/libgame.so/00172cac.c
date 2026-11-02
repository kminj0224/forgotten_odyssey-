/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172cac  Symbol: png_error */

void png_error(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  FILE *pFVar2;
  
  iVar1 = DAT_00172d10 + 0x172cb8;
  if (param_1 == 0) {
    pFVar2 = (FILE *)(*(int *)(iVar1 + DAT_00172d14) + 0xa8);
    fprintf(pFVar2,(char *)(iVar1 + DAT_00172d18),param_2,param_4,param_4);
    fputc(10,pFVar2);
  }
  else {
    if (*(code **)(param_1 + 0x104) != (code *)0x0) {
      (**(code **)(param_1 + 0x104))();
    }
    pFVar2 = (FILE *)(*(int *)(iVar1 + DAT_00172d14) + 0xa8);
    fprintf(pFVar2,(char *)(iVar1 + DAT_00172d18),param_2);
    fputc(10,pFVar2);
    if (*(code **)(param_1 + 0x100) != (code *)0x0) {
      (**(code **)(param_1 + 0x100))(param_1,1);
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}


