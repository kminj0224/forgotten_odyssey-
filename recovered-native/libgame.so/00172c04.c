/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00172c04  Symbol: png_warning */

void png_warning(int param_1,char *param_2)

{
  char *pcVar1;
  FILE *__stream;
  int iVar2;
  
  pcVar1 = param_2;
  if (param_1 != 0) {
    if (*param_2 == '#') {
      pcVar1 = param_2 + 1;
      iVar2 = 1;
      do {
        if (*pcVar1 == ' ') goto LAB_00172c16;
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 1;
      } while (iVar2 != 0xf);
      pcVar1 = param_2 + 0xf;
    }
LAB_00172c16:
    if (*(code **)(param_1 + 0x108) != (code *)0x0) {
      (**(code **)(param_1 + 0x108))();
      return;
    }
  }
  __stream = (FILE *)(*(int *)(DAT_00172c58 + 0x172c0e + DAT_00172c5c) + 0xa8);
  fprintf(__stream,(char *)(DAT_00172c58 + 0x172c0e + DAT_00172c60),pcVar1);
  fputc(10,__stream);
  return;
}


