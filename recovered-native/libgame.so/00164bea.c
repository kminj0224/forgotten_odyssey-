/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164bea  Symbol: setObjectGroups */

/* cocos2d::CCTMXTiledMap::setObjectGroups(cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>*) */

void __thiscall cocos2d::CCTMXTiledMap::setObjectGroups(CCTMXTiledMap *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x110) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x110));
  }
  *(CCMutableArray **)(this + 0x110) = param_1;
  return;
}


