/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d2ec  Symbol: clampf */

/* cocos2d::clampf(float, float, float) */

undefined4 cocos2d::clampf(float param_1,float param_2,float param_3)

{
  undefined4 in_r0;
  int iVar1;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 uVar2;
  
  iVar1 = __aeabi_fcmpgt(in_r1,in_r2);
  uVar2 = in_r1;
  if (iVar1 != 0) {
    uVar2 = in_r2;
    in_r2 = in_r1;
  }
  iVar1 = __aeabi_fcmplt(in_r0,uVar2);
  if ((iVar1 == 0) && (iVar1 = __aeabi_fcmplt(in_r0,in_r2), uVar2 = in_r0, iVar1 == 0)) {
    uVar2 = in_r2;
  }
  return uVar2;
}


