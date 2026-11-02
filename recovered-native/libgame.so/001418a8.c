/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001418a8  Symbol: ~CCAtlasNode */

/* cocos2d::CCAtlasNode::~CCAtlasNode() */

CCAtlasNode * __thiscall cocos2d::CCAtlasNode::~CCAtlasNode(CCAtlasNode *this)

{
  ~CCAtlasNode(this);
  operator_delete(this);
  return this;
}


