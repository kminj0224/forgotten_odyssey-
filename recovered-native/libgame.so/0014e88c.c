/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e88c  Symbol: ~CCMenuItemAtlasFont */

/* cocos2d::CCMenuItemAtlasFont::~CCMenuItemAtlasFont() */

CCMenuItemAtlasFont * __thiscall
cocos2d::CCMenuItemAtlasFont::~CCMenuItemAtlasFont(CCMenuItemAtlasFont *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e8b0 + 0x14e896);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x138;
  CCMenuItemLabel::~CCMenuItemLabel((CCMenuItemLabel *)this);
  return this;
}


