/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc0c8  Symbol: onEnter */

/* Market_Equip::onEnter() */

void __thiscall Market_Equip::onEnter(Market_Equip *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  **(undefined4 **)(DAT_000dc11c + 0xdc0da) = 3;
  *(undefined4 *)(this + 0x150) = 0;
  Self_Loding();
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  *(undefined4 *)(this + 0x13c) = 0xffffffff;
  iVar1 = DAT_000dc120;
  uVar2 = *(undefined4 *)(DAT_000dc120 + 0xdc0fc);
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  uVar3 = *(undefined4 *)(iVar1 + 0xdc100);
  *(undefined4 *)(this + 0x11c) = uVar2;
  *(undefined4 *)(this + 0x120) = uVar3;
  this[300] = (Market_Equip)0x0;
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


