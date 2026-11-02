/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142a9c  Symbol: worldToNodeTransform */

/* cocos2d::CCNode::worldToNodeTransform() */

CCNode * __thiscall cocos2d::CCNode::worldToNodeTransform(CCNode *this)

{
  CCAffineTransform aCStack_20 [24];
  
  nodeToWorldTransform();
  CCAffineTransformInvert((cocos2d *)this,aCStack_20);
  return this;
}


