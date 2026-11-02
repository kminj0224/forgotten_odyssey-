/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016499c  Symbol: ~CCTMXObjectGroup */

/* cocos2d::CCTMXObjectGroup::~CCTMXObjectGroup() */

CCTMXObjectGroup * __thiscall cocos2d::CCTMXObjectGroup::~CCTMXObjectGroup(CCTMXObjectGroup *this)

{
  *(int *)this = *(int *)(DAT_001649d0 + 0x1649a6) + 8;
  if (*(CCObject **)(this + 0x20) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x20));
  }
  if (*(CCObject **)(this + 0x1c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x1c));
  }
  FUN_001ed6b8(this + 0x24);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


