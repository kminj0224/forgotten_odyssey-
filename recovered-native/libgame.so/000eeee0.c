/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eeee0  Symbol: Effect_Reina */

/* Effect::Effect_Reina() */

void __thiscall Effect::Effect_Reina(Effect *this)

{
  CCLayer *pCVar1;
  char *pcVar2;
  char *pcVar3;
  float in_s0;
  float in_s1;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,in_s0,in_s1);
  pcVar2 = (char *)(DAT_000ef018 + 0xeef00);
  pcVar3 = (char *)(DAT_000ef01c + 0xeef0a);
  uVar4 = vDrawScript_Unit(pcVar2,(char *)(DAT_000ef020 + 0xeef1a),pcVar3,(CCNode *)this,local_40,
                           local_3c,1,10,true,false);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDrawScript_Unit(pcVar2,(char *)(DAT_000ef024 + 0xeef3a),pcVar3,(CCNode *)this,local_38,
                           local_34,1,0xb,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  vDrawScript_Unit(pcVar2,(char *)(DAT_000ef028 + 0xeef6a),pcVar3,(CCNode *)this,local_30,local_2c,1
                   ,0xc,true,true);
  pCVar1 = (CCLayer *)operator_new(0x110);
  uVar4 = cocos2d::CCLayer::CCLayer(pCVar1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar5 = 0;
  uVar6 = 0;
  vDrawScript_Effect((char *)(DAT_000ef02c + 0xeefac),(char *)(DAT_000ef030 + 0xeefae),
                     (CCNode *)pCVar1,local_28,local_24,0);
  (**(code **)(*(int *)this + 0xcc))(this,pCVar1,0xe,0xe,local_24,uVar5,uVar6);
  cocos2d::CCObject::release((CCObject *)pCVar1);
  pCVar1 = (CCLayer *)operator_new(0x110);
  uVar4 = cocos2d::CCLayer::CCLayer(pCVar1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar5 = 0;
  uVar6 = 0;
  vDrawScript_Effect((char *)(DAT_000ef034 + 0xeeff0),(char *)(DAT_000ef038 + 0xeeff4),
                     (CCNode *)pCVar1,local_20,local_1c,0);
  (**(code **)(*(int *)this + 0xcc))(this,pCVar1,0xd,0xd,local_1c,uVar5,uVar6);
  return;
}


