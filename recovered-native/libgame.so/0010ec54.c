/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010ec54  Symbol: New_UI */

/* New_UI::New_UI() */

New_UI * __thiscall New_UI::New_UI(New_UI *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0010ec88 + 0x10ec66);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(int *)(this + 0x100) = iVar1 + 0x16c;
  *(int *)(this + 0x104) = iVar1 + 0x178;
  return this;
}


