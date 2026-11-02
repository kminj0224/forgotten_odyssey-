/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e81c  Symbol: ~CCMenuItemToggle */

/* cocos2d::CCMenuItemToggle::~CCMenuItemToggle() */

CCMenuItemToggle * __thiscall cocos2d::CCMenuItemToggle::~CCMenuItemToggle(CCMenuItemToggle *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014e84c + 0x14e826);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x110) = iVar1 + 0x138;
  if (*(CCObject **)(this + 0x11c) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x11c));
  }
  CCMenuItem::~CCMenuItem((CCMenuItem *)this);
  return this;
}


