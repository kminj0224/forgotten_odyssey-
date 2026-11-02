/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7d5c  Symbol: ~CCFileData */

/* cocos2d::CCFileData::~CCFileData() */

CCFileData * __thiscall cocos2d::CCFileData::~CCFileData(CCFileData *this)

{
  *(int *)this = *(int *)(DAT_000b7d7c + 0xb7d66) + 8;
  if (*(void **)(this + 4) != (void *)0x0) {
    operator_delete__(*(void **)(this + 4));
    *(undefined4 *)(this + 4) = 0;
  }
  return this;
}


