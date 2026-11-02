/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef17c  Symbol: Effect_Mir */

/* Effect::Effect_Mir() */

void __thiscall Effect::Effect_Mir(Effect *this)

{
  char *pcVar1;
  char *pcVar2;
  float in_s0;
  float in_s1;
  undefined8 uVar3;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,in_s0,in_s1);
  pcVar2 = (char *)(DAT_000ef258 + 0xef19c);
  pcVar1 = (char *)(DAT_000ef254 + 0xef1a2);
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000ef25c + 0xef1b4),pcVar2,(CCNode *)this,local_38,
                           local_34,1,10,true,false);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000ef260 + 0xef1d6),pcVar2,(CCNode *)this,local_30,
                           local_2c,1,0xb,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000ef264 + 0xef204),pcVar2,(CCNode *)this,local_28,
                           local_24,1,0xc,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawScript_Unit(pcVar1,(char *)(DAT_000ef268 + 0xef230),pcVar2,(CCNode *)this,local_20,local_1c,1
                   ,0xd,true,true);
  return;
}


