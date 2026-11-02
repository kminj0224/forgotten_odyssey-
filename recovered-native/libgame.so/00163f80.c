/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163f80  Symbol: positionAt */

/* cocos2d::CCTMXLayer::positionAt(cocos2d::CCPoint const&) */

CCTMXLayer * __thiscall cocos2d::CCTMXLayer::positionAt(CCTMXLayer *this,CCPoint *param_1)

{
  undefined4 uVar1;
  CCPoint CVar2;
  
  uVar1 = *(undefined4 *)(DAT_00163fc0 + 0x163f96);
  *(undefined4 *)this = *(undefined4 *)(DAT_00163fc0 + 0x163f92);
  *(undefined4 *)(this + 4) = uVar1;
  CVar2 = param_1[0x4a];
  if (CVar2 == 1) {
    positionForHexAt((CCPoint *)this);
  }
  else if (CVar2 == 0) {
    positionForOrthoAt((CCPoint *)this);
  }
  else if (CVar2 == 2) {
    positionForIsoAt((CCPoint *)this);
  }
  return this;
}


