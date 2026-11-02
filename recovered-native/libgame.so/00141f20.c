/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141f20  Symbol: setAnchorPoint */

/* cocos2d::CCNode::setAnchorPoint(cocos2d::CCPoint const&) */

undefined8 cocos2d::CCNode::setAnchorPoint(CCPoint *param_1)

{
  int iVar1;
  CCPoint *in_r1;
  CCPoint *in_r2;
  undefined8 uVar2;
  CCPoint *local_18;
  CCPoint *local_14;
  
  local_18 = param_1;
  local_14 = in_r1;
  iVar1 = CCPoint::CCPointEqualToPoint((CCPoint *)in_r1,param_1 + 0x14,in_r2);
  if (iVar1 == 0) {
    param_1[0x14] = *in_r1;
    param_1[0x15] = in_r1[1];
    __mulsf3(param_1[0x1a],param_1[0x14]);
    uVar2 = __mulsf3(param_1[0x1b],param_1[0x15]);
    CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
    param_1[0x16] = (CCPoint)local_18;
    param_1[0x17] = (CCPoint)local_14;
    *(undefined *)((int)param_1 + 0xf5) = 1;
    *(undefined *)(param_1 + 0x3d) = 1;
    *(undefined *)((int)param_1 + 0xf6) = 1;
  }
  return CONCAT44(local_14,local_18);
}


