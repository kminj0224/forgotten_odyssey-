/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00161280  Symbol: ~CCTextureAtlas */

/* cocos2d::CCTextureAtlas::~CCTextureAtlas() */

CCTextureAtlas * __thiscall cocos2d::CCTextureAtlas::~CCTextureAtlas(CCTextureAtlas *this)

{
  *(int *)this = *(int *)(DAT_001612c8 + 0x16128a) + 8;
  if (*(void **)(this + 0x30) != (void *)0x0) {
    free(*(void **)(this + 0x30));
    *(undefined4 *)(this + 0x30) = 0;
  }
  if (*(void **)(this + 0x14) != (void *)0x0) {
    free(*(void **)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  glDeleteBuffers(2,this + 0x18);
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


