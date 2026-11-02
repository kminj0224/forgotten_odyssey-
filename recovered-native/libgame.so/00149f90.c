/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149f90  Symbol: changeWidth */

/* cocos2d::CCLayerColor::changeWidth(float) */

undefined8 cocos2d::CCLayerColor::changeWidth(float param_1)

{
  int *in_r0;
  undefined4 in_r1;
  code *pcVar1;
  float in_s1;
  int *piStack_18;
  undefined4 uStack_14;
  
  pcVar1 = *(code **)(*in_r0 + 0x80);
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  CCSize::CCSize((CCSize *)&piStack_18,param_1,in_s1);
  (*pcVar1)(in_r0,&piStack_18);
  return CONCAT44(uStack_14,piStack_18);
}


