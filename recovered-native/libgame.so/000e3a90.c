/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e3a90  Symbol: update */

/* Market_Store::update(float) */

float Market_Store::update(float param_1)

{
  int *in_r0;
  int iVar1;
  
  iVar1 = in_r0[0x6c];
  if (iVar1 == 1) {
    iVar1 = 2;
  }
  else {
    if (iVar1 == 2) {
      remove_Self_Loding((Market_Store *)in_r0);
      param_1 = (float)cocos2d::CCNode::unscheduleUpdate((CCNode *)in_r0);
    }
    else {
      if (iVar1 != 0) {
        return param_1;
      }
      (**(code **)(*in_r0 + 0x114))(in_r0,1);
      param_1 = (float)UI_Loding();
    }
    iVar1 = in_r0[0x6c] + 1;
  }
  in_r0[0x6c] = iVar1;
  return param_1;
}


