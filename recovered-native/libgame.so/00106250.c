/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00106250  Symbol: UI */

/* UI::UI() */

UI * __thiscall UI::UI(UI *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00106284 + 0x106262);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


