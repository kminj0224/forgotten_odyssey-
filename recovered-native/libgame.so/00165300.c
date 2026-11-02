/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165300  Symbol: ~CCTMXTilesetInfo */

/* cocos2d::CCTMXTilesetInfo::~CCTMXTilesetInfo() */

CCTMXTilesetInfo * __thiscall cocos2d::CCTMXTilesetInfo::~CCTMXTilesetInfo(CCTMXTilesetInfo *this)

{
  *(int *)this = *(int *)(DAT_00165328 + 0x16530a) + 8;
  FUN_001ed6b8(this + 0x2c);
  FUN_001ed6b8(this + 0x14);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


