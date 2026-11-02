/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc140  Symbol: update */

/* Market_Equip::update(float) */

float Market_Equip::update(float param_1)

{
  int *in_r0;
  int iVar1;
  
  iVar1 = in_r0[0x54];
  if (iVar1 == 1) {
    param_1 = (float)Number_Loding((Market_Equip *)in_r0);
  }
  else if (iVar1 == 2) {
    remove_Self_Loding((Market_Equip *)in_r0);
    (**(code **)(*in_r0 + 0x114))(in_r0,1);
    param_1 = (float)cocos2d::CCNode::unscheduleUpdate((CCNode *)in_r0);
  }
  else {
    if (iVar1 != 0) goto LAB_000dc17a;
    param_1 = (float)UI_Loding((Market_Equip *)in_r0);
  }
  iVar1 = in_r0[0x54];
LAB_000dc17a:
  in_r0[0x54] = iVar1 + 1;
  return param_1;
}


