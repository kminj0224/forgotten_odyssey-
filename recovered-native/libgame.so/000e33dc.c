/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e33dc  Symbol: onEnter */

/* Market_Store::onEnter() */

void __thiscall Market_Store::onEnter(Market_Store *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  **(undefined4 **)(DAT_000e3450 + 0xe33ee) = 4;
  iVar2 = 0;
  *(undefined4 *)(this + 0x11c) = 0xffffffff;
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  *(undefined4 *)(this + 0x110) = 0;
  do {
    iVar1 = iVar2 + 0x140;
    iVar2 = iVar2 + 4;
    *(undefined4 *)(this + iVar1) = 0;
  } while (iVar2 != 0x3c);
  uVar3 = *(undefined4 *)(DAT_000e3454 + 0xe3422);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(DAT_000e3454 + 0xe341e);
  *(undefined4 *)(this + 0x180) = uVar3;
  this[0x18c] = (Market_Store)0x0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  Self_Loding();
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


