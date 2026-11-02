/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014224c  Symbol: setPositionInPixels */

/* cocos2d::CCNode::setPositionInPixels(float, float) */

undefined8 cocos2d::CCNode::setPositionInPixels(float param_1,float param_2)

{
  int *in_r0;
  undefined4 in_r1;
  code *pcVar1;
  int *piStack_18;
  undefined4 uStack_14;
  
  pcVar1 = *(code **)(*in_r0 + 0x44);
  piStack_18 = in_r0;
  uStack_14 = in_r1;
  CCPoint::CCPoint((CCPoint *)&piStack_18,param_1,param_2);
  (*pcVar1)(in_r0,&piStack_18);
  return CONCAT44(uStack_14,piStack_18);
}


