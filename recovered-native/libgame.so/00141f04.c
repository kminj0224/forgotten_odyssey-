/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141f04  Symbol: getCamera */

/* cocos2d::CCNode::getCamera() */

undefined4 __thiscall cocos2d::CCNode::getCamera(CCNode *this)

{
  CCCamera *this_00;
  
  if (*(int *)(this + 0x44) == 0) {
    this_00 = (CCCamera *)operator_new(0x3c);
    CCCamera::CCCamera(this_00);
    *(CCCamera **)(this + 0x44) = this_00;
  }
  return *(undefined4 *)(this + 0x44);
}


