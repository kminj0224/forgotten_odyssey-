/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00188034  Symbol: FUN_00188034 */

void FUN_00188034(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  int *unaff_r4;
  
  FUN_0017b7fc(param_1,param_2,0);
  unaff_r4[0x2b] = -1;
  if (*unaff_r4 == 0) {
    switchD_00187544::caseD_ffffffff();
    return;
  }
  pcVar1 = *(code **)(*unaff_r4 + 0x34);
  if (pcVar1 == (code *)0x0) {
    switchD_00187544::caseD_ffffffff();
    return;
  }
  (*pcVar1)(unaff_r4[1]);
  switchD_00187544::caseD_ffffffff();
  return;
}


