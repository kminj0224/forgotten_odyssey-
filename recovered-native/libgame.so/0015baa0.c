/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015baa0  Symbol: ~CCSpriteFrame */

/* cocos2d::CCSpriteFrame::~CCSpriteFrame() */

CCSpriteFrame * __thiscall cocos2d::CCSpriteFrame::~CCSpriteFrame(CCSpriteFrame *this)

{
  *(int *)this = *(int *)(DAT_0015bac4 + 0x15baaa) + 8;
  if (*(CCObject **)(this + 0x48) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x48));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


