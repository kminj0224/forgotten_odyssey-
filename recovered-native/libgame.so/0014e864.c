/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e864  Symbol: ~CCMenuItemLabel */

/* cocos2d::CCMenuItemLabel::~CCMenuItemLabel() */

CCMenuItemLabel * __thiscall cocos2d::CCMenuItemLabel::~CCMenuItemLabel(CCMenuItemLabel *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e888 + 0x14e86e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x138;
  CCMenuItem::~CCMenuItem((CCMenuItem *)this);
  return this;
}


