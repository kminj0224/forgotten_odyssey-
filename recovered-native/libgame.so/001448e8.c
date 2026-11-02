/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001448e8  Symbol: ~CCDirector */

/* cocos2d::CCDirector::~CCDirector() */

CCDirector * __thiscall cocos2d::CCDirector::~CCDirector(CCDirector *this)

{
  CCPoolManager *this_00;
  
  *(int *)this = *(int *)(DAT_0014494c + 0x1448f2) + 8;
  if (*(CCObject **)(this + 0x34) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x34));
  }
  if (*(CCObject **)(this + 0x44) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x44));
  }
  if (*(CCObject **)(this + 0x7c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x7c));
  }
  if (*(CCObject **)(this + 0x50) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x50));
  }
  this_00 = (CCPoolManager *)CCPoolManager::getInstance();
  CCPoolManager::pop(this_00);
  if (*(void **)(this + 0x54) != (void *)0x0) {
    operator_delete(*(void **)(this + 0x54));
    *(undefined4 *)(this + 0x54) = 0;
  }
  CCKeypadDispatcher::purgeSharedDispatcher();
  if (*(void **)(this + 0x78) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x78));
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


