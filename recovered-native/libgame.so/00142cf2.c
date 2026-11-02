/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142cf2  Symbol: convertTouchToNodeSpace */

/* cocos2d::CCNode::convertTouchToNodeSpace(cocos2d::CCTouch*) */

CCTouch * cocos2d::CCNode::convertTouchToNodeSpace(CCTouch *param_1)

{
  int in_r2;
  CCPoint local_20;
  undefined4 local_1c;
  CCPoint local_18;
  undefined4 local_14;
  
  local_18 = *(undefined4 *)(in_r2 + 0x18);
  local_14 = *(undefined4 *)(in_r2 + 0x1c);
  CCDirector::sharedDirector();
  CCDirector::convertToGL(&local_20);
  local_18 = local_20;
  local_14 = local_1c;
  convertToNodeSpace((CCPoint *)param_1);
  return param_1;
}


