/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b878  Symbol: ~CCCallFuncO */

/* cocos2d::CCCallFuncO::~CCCallFuncO() */

CCCallFuncO * __thiscall cocos2d::CCCallFuncO::~CCCallFuncO(CCCallFuncO *this)

{
  *(int *)this = *(int *)(DAT_0013b89c + 0x13b882) + 8;
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  CCCallFunc::~CCCallFunc((CCCallFunc *)this);
  return this;
}


