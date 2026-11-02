/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163b3c  Symbol: ~CCTMXLayer */

/* cocos2d::CCTMXLayer::~CCTMXLayer() */

CCTMXLayer * __thiscall cocos2d::CCTMXLayer::~CCTMXLayer(CCTMXLayer *this)

{
  int iVar1;
  undefined4 *__ptr;
  
  iVar1 = *(int *)(DAT_00163bb8 + 0x163b48);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  if (*(CCObject **)(this + 0x14c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14c));
  }
  if (*(CCObject **)(this + 300) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 300));
  }
  __ptr = *(undefined4 **)(this + 0x150);
  if (__ptr != (undefined4 *)0x0) {
    *__ptr = 0;
    free((void *)__ptr[2]);
    free(__ptr);
    *(undefined4 *)(this + 0x150) = 0;
  }
  if (*(void **)(this + 0x120) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x120));
    *(undefined4 *)(this + 0x120) = 0;
  }
  FUN_001ed6b8(this + 0x130);
  CCSpriteBatchNode::~CCSpriteBatchNode((CCSpriteBatchNode *)this);
  return this;
}


