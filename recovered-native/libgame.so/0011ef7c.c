/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011ef7c  Symbol: init */

/* Tutorial_Layer::init() */

void __thiscall Tutorial_Layer::init(Tutorial_Layer *this)

{
  int iVar1;
  
  iVar1 = cocos2d::CCLayer::init();
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x110) = 0;
    *(undefined4 *)(this + 0x114) = 0;
    **(undefined **)(DAT_0011ef9c + 0x11ef98) = 1;
  }
  return;
}


