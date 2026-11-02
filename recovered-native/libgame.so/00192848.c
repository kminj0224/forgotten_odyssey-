/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192848  Symbol: FUN_00192848 */

undefined4 FUN_00192848(int *param_1,char **param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 == (char **)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    pcVar4 = *param_2;
    if (((byte)(*pcVar4 + 0xbfU) < 0x1a) || (uVar2 = 2, (byte)(*pcVar4 + 0x9fU) < 0x1a)) {
      do {
        do {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        } while ((byte)(cVar1 + 0xbfU) < 0x1a);
      } while (((((byte)(cVar1 + 0x9fU) < 0x1a) || ((byte)(cVar1 - 0x30U) < 10)) || (cVar1 == '+'))
              || ((cVar1 == '-' || (cVar1 == '.'))));
      if (param_1 != (int *)0x0) {
        if (*param_1 != 0) {
          (***(code ***)(DAT_001928d0 + 0x192854 + DAT_001928d4))();
        }
        iVar3 = FUN_0019c88c(*param_2,(int)pcVar4 - (int)*param_2);
        *param_1 = iVar3;
      }
      *param_2 = pcVar4;
      uVar2 = 0;
    }
  }
  return uVar2;
}


