/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164c08  Symbol: ~CCTMXTiledMap */

/* cocos2d::CCTMXTiledMap::~CCTMXTiledMap() */

CCTMXTiledMap * __thiscall cocos2d::CCTMXTiledMap::~CCTMXTiledMap(CCTMXTiledMap *this)

{
  *(int *)this = *(int *)(DAT_00164c50 + 0x164c14) + 8;
  if (*(CCObject **)(this + 0x114) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x114));
  }
  if (*(CCObject **)(this + 0x110) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x110));
  }
  if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x118));
  }
  if (*(CCObject **)(this + 0x11c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x11c));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


