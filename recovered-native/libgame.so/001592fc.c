/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001592fc  Symbol: ~CCAnimation */

/* cocos2d::CCAnimation::~CCAnimation() */

CCAnimation * __thiscall cocos2d::CCAnimation::~CCAnimation(CCAnimation *this)

{
  *(int *)this = *(int *)(DAT_00159330 + 0x159308) + 8;
  FUN_001edf58(this + 0x14);
  if (*(CCObject **)(this + 0x1c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1c));
  }
  FUN_001ed6b8(this + 0x14);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


