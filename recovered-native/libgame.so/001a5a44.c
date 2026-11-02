/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a5a44  Symbol: FUN_001a5a44 */

void FUN_001a5a44(undefined4 *param_1)

{
  int iVar1;
  code **ppcVar2;
  
  iVar1 = DAT_001a5a68 + 0x1a5a4e;
  if (param_1 != (undefined4 *)0x0) {
    FUN_001a5a24();
    ppcVar2 = *(code ***)(iVar1 + DAT_001a5a6c);
    (**ppcVar2)(*param_1);
    (**ppcVar2)(param_1);
  }
  return;
}


