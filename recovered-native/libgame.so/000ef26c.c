/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef26c  Symbol: Effect_Monster20000 */

/* Effect::Effect_Monster20000() */

void __thiscall Effect::Effect_Monster20000(Effect *this)

{
  char *pcVar1;
  char *pcVar2;
  float in_s0;
  float in_s1;
  undefined8 uVar3;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,in_s0,in_s1);
  pcVar2 = (char *)(DAT_000ef2ec + 0xef28c);
  pcVar1 = (char *)(DAT_000ef2e8 + 0xef292);
  uVar3 = vDrawScript_Unit(pcVar1,(char *)(DAT_000ef2f0 + 0xef2a4),pcVar2,(CCNode *)this,local_28,
                           local_24,1,DAT_000ef2f4,SUB41(DAT_000ef2f8,0),false);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDrawScript_Unit(pcVar1,(char *)(DAT_000ef2fc + 0xef2c4),pcVar2,(CCNode *)this,local_20,local_1c,1
                   ,DAT_000ef300,SUB41(DAT_000ef2f8,0),true);
  return;
}


