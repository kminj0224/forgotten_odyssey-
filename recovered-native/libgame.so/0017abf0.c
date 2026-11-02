/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017abf0  Symbol: FUN_0017abf0 */

undefined4 FUN_0017abf0(char *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1 == (char *)0x0) {
LAB_0017accc:
    uVar2 = 0;
  }
  else {
    cVar1 = *param_1;
    if (((cVar1 == 'I') || (cVar1 == 'i')) && (param_1[1] == '-')) {
      for (param_1 = param_1 + 2;
          ((byte)(*param_1 + 0x9fU) < 0x1a || ((byte)(*param_1 + 0xbfU) < 0x1a));
          param_1 = param_1 + 1) {
      }
    }
    else if (((cVar1 == 'X') || (cVar1 == 'x')) && (param_1[1] == '-')) {
      for (param_1 = param_1 + 2;
          ((byte)(*param_1 + 0x9fU) < 0x1a || ((byte)(*param_1 + 0xbfU) < 0x1a));
          param_1 = param_1 + 1) {
      }
    }
    else {
      if (((0x19 < (byte)(cVar1 + 0x9fU)) && (0x19 < (byte)(cVar1 + 0xbfU))) ||
         ((0x19 < (byte)(param_1[1] + 0x9fU) && (0x19 < (byte)(param_1[1] + 0xbfU)))))
      goto LAB_0017accc;
      param_1 = param_1 + 2;
    }
    while (*param_1 != '\0') {
      if ((*param_1 != '-') ||
         ((0x19 < (byte)(param_1[1] + 0x9fU) && (0x19 < (byte)(param_1[1] + 0xbfU)))))
      goto LAB_0017accc;
      for (param_1 = param_1 + 2;
          ((byte)(*param_1 + 0x9fU) < 0x1a || ((byte)(*param_1 + 0xbfU) < 0x1a));
          param_1 = param_1 + 1) {
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}


