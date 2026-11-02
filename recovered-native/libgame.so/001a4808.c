/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a4808  Symbol: FUN_001a4808 */

void FUN_001a4808(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_001a4824 + 0x1a4810;
  if (param_1 == (undefined4 *)0x0) {
    **(int **)(iVar1 + DAT_001a4828) = iVar1 + DAT_001a482c;
  }
  else {
    **(undefined4 **)(iVar1 + DAT_001a4828) = *param_1;
  }
  return;
}


