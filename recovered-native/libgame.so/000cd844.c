/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cd844  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCSpriteFrame*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCSpriteFrame*> *this)

{
  *(int *)this = *(int *)(DAT_000cd86c + 0xcd850) + 8;
  removeAllObjects(this,true);
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x14));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


