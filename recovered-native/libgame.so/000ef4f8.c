/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef4f8  Symbol: Effect_Lode_28003800 */

/* Effect::Effect_Lode_28003800() */

void __thiscall Effect::Effect_Lode_28003800(Effect *this)

{
  CCLayer *this_00;
  undefined8 uVar1;
  CCPoint local_18;
  int local_14;
  
  this_00 = (CCLayer *)operator_new(0x110);
  uVar1 = cocos2d::CCLayer::CCLayer(this_00);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  vDrawScript_Effect((char *)(DAT_000ef54c + 0xef52a),(char *)(DAT_000ef550 + 0xef52e),
                     (CCNode *)this_00,local_18,local_14,0);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,0xaf0);
  cocos2d::CCObject::release((CCObject *)this_00);
  return;
}


