/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165424  Symbol: ~CCTMXMapInfo */

/* cocos2d::CCTMXMapInfo::~CCTMXMapInfo() */

CCTMXMapInfo * __thiscall cocos2d::CCTMXMapInfo::~CCTMXMapInfo(CCTMXMapInfo *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00165484 + 0x16542e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x14) = iVar1 + 0x88;
  if (*(CCObject **)(this + 0x30) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x30));
  }
  if (*(CCObject **)(this + 0x2c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x2c));
  }
  if (*(CCObject **)(this + 0x48) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x48));
  }
  if (*(CCObject **)(this + 0x54) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x54));
  }
  if (*(CCObject **)(this + 0x34) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x34));
  }
  FUN_001ed6b8(this + 0x50);
  FUN_001ed6b8(this + 0x4c);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


