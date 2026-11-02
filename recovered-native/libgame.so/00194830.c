/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194830  Symbol: FUN_00194830 */

undefined4 * FUN_00194830(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = DAT_0019486c + 0x19483c;
  puVar1 = (undefined4 *)(***(code ***)(iVar3 + DAT_00194870))(8);
  if (puVar1 == (undefined4 *)0x0) {
    FUN_00194208(0,iVar3 + DAT_00194874);
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    if (param_1 != 0) {
      uVar2 = FUN_0019c904(param_1);
      puVar1[1] = uVar2;
    }
  }
  return puVar1;
}


