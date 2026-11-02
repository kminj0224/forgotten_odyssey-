/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001675ac  Symbol: ~CCTouchDispatcher */

/* cocos2d::CCTouchDispatcher::~CCTouchDispatcher() */

CCTouchDispatcher * __thiscall
cocos2d::CCTouchDispatcher::~CCTouchDispatcher(CCTouchDispatcher *this)

{
  int iVar1;
  undefined4 *__ptr;
  
  iVar1 = *(int *)(DAT_0016760c + 0x1675b6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x14) = iVar1 + 0x34;
  if (*(CCObject **)(this + 0x18) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x18));
  }
  if (*(CCObject **)(this + 0x1c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1c));
  }
  if (*(CCObject **)(this + 0x24) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x24));
  }
  __ptr = *(undefined4 **)(this + 0x28);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    free((void *)__ptr[2]);
    free(__ptr);
  }
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)(this + 0x14) = *(int *)(DAT_00167610 + 0x167600) + 8;
  CCObject::~CCObject((CCObject *)this);
  return this;
}


