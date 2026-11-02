/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f848  Symbol: FUN_0019f848 */

undefined * FUN_0019f848(undefined *param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  
  iVar4 = DAT_0019f8fc;
  *param_1 = 0x26;
  param_1[1] = 0x23;
  param_1[2] = 0x78;
  puVar2 = param_1 + 3;
  if ((0xf < (int)param_2) && (puVar2 = param_1 + 4, 0xff < (int)param_2)) {
    if (DAT_0019f900 < (int)param_2) {
      if (DAT_0019f904 < (int)param_2) {
        if (DAT_0019f908 < (int)param_2) {
          puVar2 = param_1 + 8;
        }
        else {
          puVar2 = param_1 + 7;
        }
      }
      else {
        puVar2 = param_1 + 6;
      }
    }
    else {
      puVar2 = param_1 + 5;
    }
  }
  iVar4 = iVar4 + 0x19f85a + DAT_0019f90c;
  puVar3 = puVar2;
  while( true ) {
    if ((int)param_2 < 1) {
      puVar2[1] = 0x3b;
      puVar2[2] = 0;
      return puVar2 + 2;
    }
    uVar1 = (param_2 & 0xf) - 1;
    if (uVar1 < 0xf) break;
    *puVar3 = 0x30;
    param_2 = (int)param_2 >> 4;
    puVar3 = puVar3 + -1;
  }
                    /* WARNING: Could not emulate address calculation at 0x0019f8a2 */
                    /* WARNING: Treating indirect jump as call */
  puVar2 = (undefined *)(*(code *)(*(int *)(iVar4 + uVar1 * 4) + iVar4))();
  return puVar2;
}


