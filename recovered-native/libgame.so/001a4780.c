/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4780  Symbol: FUN_001a4780 */

undefined4 FUN_001a4780(char *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  code **ppcVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = DAT_001a47fc + 0x1a478c;
  if (param_1 != (char *)0x0) {
    piVar4 = (int *)(iVar7 + DAT_001a4800);
    puVar1 = (undefined4 *)*piVar4;
    iVar2 = 0;
    if ((undefined4 *)*piVar4 != (undefined4 *)0x0) {
      while (iVar8 = iVar2, puVar6 = puVar1, iVar8 < piVar4[1]) {
        iVar3 = strcmp((char *)puVar6[1],param_1);
        puVar1 = puVar6 + 2;
        iVar2 = iVar8 + 1;
        if (iVar3 == 0) {
          ppcVar5 = *(code ***)(iVar7 + DAT_001a4804);
          (**ppcVar5)(*puVar6);
          (**ppcVar5)(*(undefined4 *)(*piVar4 + iVar8 * 8 + 4));
          iVar7 = piVar4[1];
          piVar4[1] = iVar7 + -1;
          memmove((void *)(*piVar4 + iVar8 * 8),(void *)(*piVar4 + (iVar8 + 1) * 8),
                  ((iVar7 + -1) - iVar8) * 8);
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}


