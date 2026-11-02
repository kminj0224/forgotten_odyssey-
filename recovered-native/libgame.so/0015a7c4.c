/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a7c4  Symbol: getTransformValues */

/* cocos2d::CCSprite::getTransformValues(cocos2d::transformValues_*) */

void __thiscall cocos2d::CCSprite::getTransformValues(CCSprite *this,transformValues_ *param_1)

{
  *(undefined4 *)param_1 = *(undefined4 *)(this + 0x30);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(this + 0x34);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(this + 0x20);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(this + 0x24);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(this + 0x1c);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(this + 0x38);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(this + 0x58);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(this + 0x5c);
  *(CCSprite *)(param_1 + 0x24) = this[0x4c];
  return;
}


