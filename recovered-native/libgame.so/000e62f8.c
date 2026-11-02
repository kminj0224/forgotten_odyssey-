/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e62f8  Symbol: update */

/* Market_Unit::update(float) */

float Market_Unit::update(float param_1)

{
  int *in_r0;
  int iVar1;
  float fVar2;
  
  iVar1 = in_r0[0x4f];
  if (iVar1 == 1) {
    param_1 = (float)UI_Number_Loding();
  }
  else {
    if (iVar1 == 2) {
      **(undefined4 **)(DAT_000e6354 + 0xe6330) = 1;
      in_r0[0x4e] = -1;
      in_r0[0x56] = 0;
      in_r0[0x50] = 0;
      Unit_Loding((Market_Unit *)in_r0);
      remove_Self_Loding((Market_Unit *)in_r0);
      fVar2 = (float)cocos2d::CCNode::unscheduleUpdate((CCNode *)in_r0);
      return fVar2;
    }
    if (iVar1 != 0) goto LAB_000e634e;
    (**(code **)(*in_r0 + 0x114))(in_r0,1);
    param_1 = (float)UI_Loding((Market_Unit *)in_r0);
  }
  iVar1 = in_r0[0x4f];
LAB_000e634e:
  in_r0[0x4f] = iVar1 + 1;
  return param_1;
}


