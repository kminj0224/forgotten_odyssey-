/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145578  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCScene*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCScene*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCScene*>::~CCMutableArray(CCMutableArray<cocos2d::CCScene*> *this)

{
  *(int *)this = *(int *)(DAT_001455a0 + 0x145584) + 8;
  removeAllObjects(this,true);
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x14));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


