/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016493c  Symbol: setPositionOffset */

/* cocos2d::CCTMXObjectGroup::setPositionOffset(cocos2d::CCPoint const&) */

void __thiscall
cocos2d::CCTMXObjectGroup::setPositionOffset(CCTMXObjectGroup *this,CCPoint *param_1)

{
  *(CCPoint *)(this + 0x14) = *param_1;
  *(CCPoint *)(this + 0x18) = param_1[1];
  return;
}


