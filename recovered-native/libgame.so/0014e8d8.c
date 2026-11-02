/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e8d8  Symbol: ~CCMenuItemFont */

/* cocos2d::CCMenuItemFont::~CCMenuItemFont() */

CCMenuItemFont * __thiscall cocos2d::CCMenuItemFont::~CCMenuItemFont(CCMenuItemFont *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e908 + 0x14e8e2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x138;
  FUN_001ed6b8(this + 0x128);
  CCMenuItemLabel::~CCMenuItemLabel((CCMenuItemLabel *)this);
  return this;
}


