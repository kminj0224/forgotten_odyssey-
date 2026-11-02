/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ef18  Symbol: update */

/* New_UI::update(float) */

void New_UI::update(float param_1)

{
  undefined4 uVar1;
  New_UI *in_r0;
  int iVar2;
  undefined4 in_r1;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar4 = *(undefined4 *)(in_r0 + 0x134);
  iVar2 = __aeabi_fcmplt(uVar4,0);
  if (iVar2 == 0) {
    uVar4 = __subsf3(uVar4,in_r1);
    *(undefined4 *)(in_r0 + 0x134) = uVar4;
    *(undefined4 *)(in_r0 + 0x138) = uVar4;
    iVar2 = __aeabi_fcmpgt(uVar4,0);
    iVar5 = 0;
    if (iVar2 != 0) {
      while( true ) {
        uVar4 = *(undefined4 *)(in_r0 + 0x138);
        iVar2 = __aeabi_fcmpgt(uVar4,DAT_0010f000);
        if (iVar2 == 0) break;
        uVar4 = __subsf3(uVar4,DAT_0010f000);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(in_r0 + 0x138) = uVar4;
      }
      uVar4 = __floatsisf(iVar5);
      iVar2 = __aeabi_fcmpeq(*(undefined4 *)(in_r0 + 0x140),uVar4);
      if (iVar2 == 0) {
        Set_Time_B(in_r0,iVar5);
        uVar1 = DAT_0010f004;
        *(undefined4 *)(in_r0 + 0x140) = uVar4;
        *(undefined4 *)(in_r0 + 0x144) = uVar1;
      }
    }
    iVar2 = __aeabi_fcmpge(*(undefined4 *)(in_r0 + 0x138),0);
    iVar5 = 0;
    if (iVar2 != 0) {
      while( true ) {
        uVar4 = *(undefined4 *)(in_r0 + 0x138);
        iVar2 = __aeabi_fcmpge(uVar4,0);
        if (iVar2 == 0) break;
        uVar4 = __subsf3(uVar4,0x3f800000);
        iVar5 = iVar5 + 1;
        *(undefined4 *)(in_r0 + 0x138) = uVar4;
      }
      uVar4 = __floatsisf(iVar5);
      iVar2 = __aeabi_fcmpeq(*(undefined4 *)(in_r0 + 0x144),uVar4);
      if (iVar2 == 0) {
        Set_Time_C(in_r0,iVar5 + -1);
        *(undefined4 *)(in_r0 + 0x144) = uVar4;
      }
    }
  }
  else if ((**(char **)(DAT_0010eff8 + 0x10ef36) == '\0') &&
          (piVar3 = *(int **)(DAT_0010effc + 0x10ef42), *piVar3 == 0xb)) {
    **(char **)(DAT_0010eff8 + 0x10ef36) = '\x01';
    *piVar3 = 0xd;
  }
  return;
}


