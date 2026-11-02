/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00196440  Symbol: FUN_00196440 */

undefined4 FUN_00196440(char *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (((param_1 != (char *)0x0) && (*param_1 == 'o')) && (param_1[1] == 'n')) {
    iVar3 = DAT_0019647c + 0x19644a + DAT_00196480;
    puVar2 = (undefined4 *)(iVar3 + 0x20);
    do {
      iVar1 = FUN_0019c30c(param_1,*puVar2);
      if (iVar1 != 0) {
        return 1;
      }
      puVar2 = puVar2 + 1;
    } while (puVar2 != (undefined4 *)(iVar3 + 0x68));
  }
  return 0;
}


