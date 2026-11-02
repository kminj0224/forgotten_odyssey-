/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00142270  Symbol: node */

/* cocos2d::CCNode::node() */

CCNode * cocos2d::CCNode::node(void)

{
  CCNode *this;
  
  this = (CCNode *)operator_new(0xfc);
  CCNode(this);
  CCObject::autorelease((CCObject *)this);
  return this;
}


