/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b23c  Symbol: ~CCSpriteBatchNode */

/* cocos2d::CCSpriteBatchNode::~CCSpriteBatchNode() */

CCSpriteBatchNode * __thiscall
cocos2d::CCSpriteBatchNode::~CCSpriteBatchNode(CCSpriteBatchNode *this)

{
  ~CCSpriteBatchNode(this);
  operator_delete(this);
  return this;
}


