/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163e48  Symbol: positionForOrthoAt */

/* cocos2d::CCTMXLayer::positionForOrthoAt(cocos2d::CCPoint const&) */

CCPoint * cocos2d::CCTMXLayer::positionForOrthoAt(CCPoint *param_1)

{
  undefined4 uVar1;
  int in_r1;
  undefined4 *in_r2;
  undefined8 uVar2;
  
  __mulsf3(*in_r2,*(undefined4 *)(in_r1 + 0x118));
  uVar1 = __subsf3(*(undefined4 *)(in_r1 + 0x114),in_r2[1]);
  uVar1 = __subsf3(uVar1,0x3f800000);
  uVar2 = __mulsf3(uVar1,*(undefined4 *)(in_r1 + 0x11c));
  CCPoint::CCPoint((CCPoint *)param_1,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  return param_1;
}


