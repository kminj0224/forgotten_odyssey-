/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018803a  Symbol: FUN_0018803a */

void FUN_0018803a(void)

{
  code *pcVar1;
  int *unaff_r4;
  
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


