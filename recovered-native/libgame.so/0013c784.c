/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c784  Symbol: ~CCSpawn */

/* cocos2d::CCSpawn::~CCSpawn() */

CCSpawn * __thiscall cocos2d::CCSpawn::~CCSpawn(CCSpawn *this)

{
  *(int *)this = *(int *)(DAT_0013c7b0 + 0x13c78e) + 8;
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  CCActionInterval::~CCActionInterval((CCActionInterval *)this);
  return this;
}


