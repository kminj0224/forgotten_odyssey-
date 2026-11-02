/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b200  Symbol: ~CCSpriteBatchNode */

/* cocos2d::CCSpriteBatchNode::~CCSpriteBatchNode() */

CCSpriteBatchNode * __thiscall
cocos2d::CCSpriteBatchNode::~CCSpriteBatchNode(CCSpriteBatchNode *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0015b238 + 0x15b20c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x108;
  if (*(CCObject **)(this + 0x100) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x100));
  }
  if (*(CCObject **)(this + 0x10c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x10c));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


