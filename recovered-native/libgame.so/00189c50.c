/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189c50  Symbol: FUN_00189c50 */

undefined4 * FUN_00189c50(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  
  iVar5 = DAT_00189cc0 + 0x189c5c;
  puVar2 = (undefined4 *)(***(code ***)(iVar5 + DAT_00189cc4))(0x14);
  iVar1 = DAT_00189ccc;
  if (puVar2 == (undefined4 *)0x0) {
    FUN_001898e8(iVar5 + DAT_00189cc8);
  }
  else {
    puVar2[1] = 0;
    iVar3 = 0;
    puVar2[3] = **(undefined4 **)(iVar5 + iVar1);
    if (param_1 != 0) {
      iVar3 = param_1 + 2;
    }
    puVar2[2] = iVar3;
    if (iVar3 == 0) {
      *puVar2 = 0;
    }
    else {
      puVar4 = (undefined *)(***(code ***)(iVar5 + DAT_00189cd0))();
      *puVar2 = puVar4;
      if (puVar4 == (undefined *)0x0) {
        FUN_001898e8(iVar5 + DAT_00189cc8);
        (***(code ***)(iVar5 + DAT_00189cd4))(puVar2);
        return (undefined4 *)0x0;
      }
      *puVar4 = 0;
    }
    puVar2[4] = 0;
  }
  return puVar2;
}


