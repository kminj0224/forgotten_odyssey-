/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143c8c  Symbol: ~CCData */

/* cocos2d::CCData::~CCData() */

CCData * __thiscall cocos2d::CCData::~CCData(CCData *this)

{
  *(int *)this = *(int *)(DAT_00143cb4 + 0x143c96) + 8;
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x14));
    *(undefined4 *)(this + 0x14) = 0;
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


