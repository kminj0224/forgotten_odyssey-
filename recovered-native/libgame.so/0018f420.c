/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f420  Symbol: FUN_0018f420 */

void FUN_0018f420(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar2 = DAT_0018f458 + 0x18f428;
  piVar4 = (int *)(iVar2 + DAT_0018f45c);
  if (*piVar4 != 0) {
    iVar1 = piVar4[1] + -1;
    piVar4 = piVar4 + iVar1 * 4 + 2;
    for (; -1 < iVar1; iVar1 = iVar1 + -1) {
      *piVar4 = 0;
      piVar4[1] = 0;
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar4 = piVar4 + -4;
    }
    puVar3 = (undefined4 *)(iVar2 + DAT_0018f45c);
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  return;
}


