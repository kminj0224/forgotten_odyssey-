/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167800  Symbol: ~CCMutableArray */

/* cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::~CCMutableArray() */

CCMutableArray<cocos2d::CCTouchHandler*> * __thiscall
cocos2d::CCMutableArray<cocos2d::CCTouchHandler*>::~CCMutableArray
          (CCMutableArray<cocos2d::CCTouchHandler*> *this)

{
  *(int *)this = *(int *)(DAT_00167828 + 0x16780c) + 8;
  removeAllObjects(this,true);
  if (*(void **)(this + 0x14) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x14));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


