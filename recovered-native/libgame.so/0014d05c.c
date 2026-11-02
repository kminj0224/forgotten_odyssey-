/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d05c  Symbol: ~CCMenu */

/* cocos2d::CCMenu::~CCMenu() */

CCMenu * __thiscall cocos2d::CCMenu::~CCMenu(CCMenu *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014d098 + 0x14d066);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x150;
  *(int *)(this + 0x100) = iVar1 + 0x180;
  *(int *)(this + 0x104) = iVar1 + 0x18c;
  *(int *)(this + 0x110) = iVar1 + 0x19c;
  CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


