/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef3d4  Symbol: Effect_Lode_3 */

/* Effect::Effect_Lode_3() */

void __thiscall Effect::Effect_Lode_3(Effect *this)

{
  CCLayer *this_00;
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  CCPoint local_18;
  int local_14;
  
  this_00 = (CCLayer *)operator_new(0x110);
  uVar1 = cocos2d::CCLayer::CCLayer(this_00);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  uVar2 = 0;
  uVar3 = 0;
  vDrawScript_Effect((char *)(DAT_000ef428 + 0xef406),(char *)(DAT_000ef42c + 0xef40a),
                     (CCNode *)this_00,local_18,local_14,0);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,3,3,local_14,uVar2,uVar3);
  cocos2d::CCObject::release((CCObject *)this_00);
  return;
}


