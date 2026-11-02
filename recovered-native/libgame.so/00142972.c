/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142972  Symbol: boundingBoxInPixels */

/* cocos2d::CCNode::boundingBoxInPixels() */

cocos2d * cocos2d::CCNode::boundingBoxInPixels(void)

{
  cocos2d *in_r0;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  CCRect aCStack_38 [4];
  CCAffineTransform aCStack_28 [28];
  
  CCRect::CCRect((CCRect *)aCStack_38,in_s0,in_s1,in_s2,in_s3);
  nodeToParentTransform();
  CCRectApplyAffineTransform(in_r0,aCStack_38,aCStack_28);
  return in_r0;
}


