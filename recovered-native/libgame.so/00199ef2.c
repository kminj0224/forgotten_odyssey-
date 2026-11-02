/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00199ef2  Symbol: caseD_ffffffff */

undefined4 switchD_00199644::caseD_ffffffff(void)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int *unaff_r4;
  int unaff_r6;
  int unaff_r7;
  int param_9;
  
  if ((((param_9 == 0) && (unaff_r7 != 0)) && (FUN_0019594c(unaff_r4), unaff_r4[0x2f] == 0)) &&
     (unaff_r4[0x2b] != -1)) {
    unaff_r4[0x2b] = -1;
    if ((*unaff_r4 != 0) && (pcVar3 = *(code **)(*unaff_r4 + 0x34), pcVar3 != (code *)0x0)) {
      (*pcVar3)(unaff_r4[1]);
    }
  }
  if (unaff_r4[2] != 0) {
    if (((unaff_r7 == 0) && (unaff_r4[0x2b] != -1)) && (unaff_r4[0x2b] != 0xe)) {
      return 0;
    }
    iVar1 = FUN_00189564();
    if (iVar1 == 0) {
      iVar1 = unaff_r4[2];
      uVar2 = FUN_0018a2f4(iVar1,unaff_r6 + DAT_00199fa0,unaff_r6 + DAT_00199fa8,
                           unaff_r6 + DAT_00199fa4);
      *(undefined4 *)(iVar1 + 0x2c) = uVar2;
    }
  }
  return 0;
}


