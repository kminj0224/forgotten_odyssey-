/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165582  Symbol: setObjectGroups */

/* cocos2d::CCTMXMapInfo::setObjectGroups(cocos2d::CCMutableArray<cocos2d::CCTMXObjectGroup*>*) */

void __thiscall cocos2d::CCTMXMapInfo::setObjectGroups(CCTMXMapInfo *this,CCMutableArray *param_1)

{
  if (param_1 != (CCMutableArray *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  if (*(CCObject **)(this + 0x34) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x34));
  }
  *(CCMutableArray **)(this + 0x34) = param_1;
  return;
}


