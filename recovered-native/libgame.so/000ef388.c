/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef388  Symbol: Effect_Lode_1 */

/* Effect::Effect_Lode_1() */

void __thiscall Effect::Effect_Lode_1(Effect *this)

{
  int *this_00;
  undefined4 uVar1;
  
  this_00 = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this_00);
  uVar1 = cocos2d::CCSprite::spriteWithFile((char *)(DAT_000ef3cc + 0xef3a0));
  (**(code **)(*this_00 + 0xcc))(this_00,uVar1,3,3);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,1,1);
  cocos2d::CCObject::release((CCObject *)this_00);
  return;
}


