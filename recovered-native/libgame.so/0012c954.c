/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012c954  Symbol: LogoLayer */

/* LogoLayer::LogoLayer() */

LogoLayer * __thiscall LogoLayer::LogoLayer(LogoLayer *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0012c988 + 0x12c966);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


