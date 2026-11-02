/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c072  Symbol: step */

/* cocos2d::CCActionInterval::step(float) */

void cocos2d::CCActionInterval::step(float param_1)

{
  int *in_r0;
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  float extraout_s0;
  
  if (*(char *)(in_r0 + 10) == '\0') {
    iVar2 = __addsf3(in_r0[9]);
    in_r0[9] = iVar2;
    param_1 = extraout_s0;
  }
  else {
    *(char *)(in_r0 + 10) = '\0';
    in_r0[9] = 0;
  }
  pcVar3 = *(code **)(*in_r0 + 0x10);
  uVar1 = __divsf3(param_1,in_r0[9],in_r0[8]);
  iVar2 = __aeabi_fcmplt(uVar1,0x3f800000);
  if (iVar2 == 0) {
    uVar1 = 0x3f800000;
  }
  (*pcVar3)(in_r0,uVar1);
  return;
}


