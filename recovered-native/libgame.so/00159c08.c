/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159c08  Symbol: ~CCSprite */

/* cocos2d::CCSprite::~CCSprite() */

CCSprite * __thiscall cocos2d::CCSprite::~CCSprite(CCSprite *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00159c40 + 0x159c12);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 300;
  *(int *)(this + 0x100) = iVar1 + 0x144;
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


