/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ac94  Symbol: UI_Notice */

/* UI_Notice::UI_Notice() */

UI_Notice * __thiscall UI_Notice::UI_Notice(UI_Notice *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0011acc8 + 0x11aca6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x140;
  *(int *)(this + 0x100) = iVar1 + 0x170;
  *(int *)(this + 0x104) = iVar1 + 0x17c;
  return this;
}


