/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f914  Symbol: ~CCProgressTimer */

/* cocos2d::CCProgressTimer::~CCProgressTimer() */

CCProgressTimer * __thiscall cocos2d::CCProgressTimer::~CCProgressTimer(CCProgressTimer *this)

{
  *(int *)this = *(int *)(DAT_0014f94c + 0x14f920) + 8;
  if (*(void **)(this + 0x10c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10c));
    *(undefined4 *)(this + 0x10c) = 0;
  }
  if (*(CCObject **)(this + 0x104) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x104));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


