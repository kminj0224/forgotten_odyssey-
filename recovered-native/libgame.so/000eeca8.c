/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eeca8  Symbol: Effect_Kai */

/* Effect::Effect_Kai() */

void __thiscall Effect::Effect_Kai(Effect *this)

{
  char *pcVar1;
  char *pcVar2;
  float in_s0;
  float in_s1;
  undefined8 uVar3;
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
  pcVar1 = (char *)(DAT_000eeda4 + 0xeecc8);
  pcVar2 = (char *)(DAT_000eeda8 + 0xeecca);
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000eedac + 0xeecda),pcVar2,(CCNode *)this,local_40,
                           local_3c,1,10,true,false);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000eedb0 + 0xeed00),pcVar2,(CCNode *)this,local_38,
                           local_34,1,0xb,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000eedb4 + 0xeed2c),pcVar2,(CCNode *)this,local_30,
                           local_2c,1,0xc,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000eedb8 + 0xeed58),pcVar2,(CCNode *)this,local_28,
                           local_24,1,0xd,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawScript_Unit(pcVar1,(char *)(DAT_000eedbc + 0xeed84),pcVar2,(CCNode *)this,local_20,local_1c,1
                   ,0xe,true,true);
  return;
}


