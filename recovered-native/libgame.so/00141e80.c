/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141e80  Symbol: ~CCNode */

/* cocos2d::CCNode::~CCNode() */

CCNode * __thiscall cocos2d::CCNode::~CCNode(CCNode *this)

{
  ~CCNode(this);
  operator_delete(this);
  return this;
}


