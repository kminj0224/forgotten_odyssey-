/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163858  Symbol: node */

/* cocos2d::CCParallaxNode::node() */

CCParallaxNode * cocos2d::CCParallaxNode::node(void)

{
  CCParallaxNode *this;
  
  this = (CCParallaxNode *)operator_new(0x108);
  CCParallaxNode(this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


