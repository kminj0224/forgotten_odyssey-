/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001311bc  Symbol: init */

/* Ending_ani::init() */

int __thiscall Ending_ani::init(Ending_ani *this)

{
  int iVar1;
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x110) = 0;
    iVar1 = 1;
  }
  return iVar1;
}


