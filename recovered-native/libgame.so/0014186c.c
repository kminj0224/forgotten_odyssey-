/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014186c  Symbol: ~CCAtlasNode */

/* cocos2d::CCAtlasNode::~CCAtlasNode() */

CCAtlasNode * __thiscall cocos2d::CCAtlasNode::~CCAtlasNode(CCAtlasNode *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_001418a4 + 0x141876);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x134;
  *(int *)(this + 0x100) = iVar1 + 0x154;
  if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x118));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


