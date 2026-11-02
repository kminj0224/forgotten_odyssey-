/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016550c  Symbol: ~CCTMXLayerInfo */

/* cocos2d::CCTMXLayerInfo::~CCTMXLayerInfo() */

CCTMXLayerInfo * __thiscall cocos2d::CCTMXLayerInfo::~CCTMXLayerInfo(CCTMXLayerInfo *this)

{
  *(int *)this = *(int *)(DAT_00165550 + 0x165516) + 8;
  if (*(CCObject **)(this + 0x14) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x14));
  }
  if ((this[0x2a] != (CCTMXLayerInfo)0x0) && (*(void **)(this + 0x24) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  FUN_001ed6b8(this + 0x18);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


