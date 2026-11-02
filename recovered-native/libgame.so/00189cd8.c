/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189cd8  Symbol: FUN_00189cd8 */

undefined4 * FUN_00189cd8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  code **ppcVar5;
  int iVar6;
  
  iVar6 = DAT_00189d38 + 0x189ce2;
  puVar2 = (undefined4 *)(***(code ***)(iVar6 + DAT_00189d3c))(0x14);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_001898e8(iVar6 + DAT_00189d40);
  }
  else {
    puVar2[1] = 0;
    iVar1 = DAT_00189d4c;
    puVar4 = *(undefined4 **)(iVar6 + DAT_00189d48);
    puVar2[2] = **(undefined4 **)(iVar6 + DAT_00189d44);
    ppcVar5 = *(code ***)(iVar6 + iVar1);
    puVar2[3] = *puVar4;
    puVar3 = (undefined *)(**ppcVar5)();
    *puVar2 = puVar3;
    if (puVar3 == (undefined *)0x0) {
      FUN_001898e8(iVar6 + DAT_00189d40);
      (***(code ***)(iVar6 + DAT_00189d50))(puVar2);
      puVar2 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = 0;
      puVar2[4] = 0;
    }
  }
  return puVar2;
}


