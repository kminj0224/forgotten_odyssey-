/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef03c  Symbol: Effect_Kris */

/* Effect::Effect_Kris() */

void __thiscall Effect::Effect_Kris(Effect *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  CCSpriteFrameCache *this_01;
  CCSpriteFrame *pCVar3;
  int *piVar4;
  char *pcVar5;
  char *pcVar6;
  float in_s0;
  float in_s1;
  undefined8 uVar7;
  CCPoint local_54;
  int local_50;
  CCPoint local_4c;
  int local_48;
  CCPoint local_44;
  int local_40;
  char acStack_3c [32];
  int local_1c;
  
  iVar2 = DAT_000ef158;
  piVar4 = *(int **)(DAT_000ef14c + 0xef048);
  local_1c = *piVar4;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_54,in_s0,in_s1);
  pcVar5 = (char *)(iVar2 + 0xef066);
  pcVar6 = (char *)(DAT_000ef15c + 0xef068);
  uVar7 = vDrawScript_Unit(pcVar5,(char *)(DAT_000ef160 + 0xef07c),pcVar6,(CCNode *)this,local_54,
                           local_50,1,0x14,true,false);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_4c,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDrawScript_Unit(pcVar5,(char *)(DAT_000ef164 + 0xef09e),pcVar6,(CCNode *)this,local_4c,
                           local_48,1,0x15,true,true);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_44,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDrawScript_Unit(pcVar5,(char *)(DAT_000ef168 + 0xef0d2),pcVar6,(CCNode *)this,local_44,local_40,1
                   ,0x16,true,true);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    pcVar5 = (char *)(DAT_000ef174 + 0xef116);
    iVar2 = DAT_000ef178 + 0xef118;
  }
  else {
    pcVar5 = (char *)(DAT_000ef16c + 0xef10c);
    iVar2 = DAT_000ef170 + 0xef10e;
  }
  sprintf(acStack_3c,pcVar5,iVar2);
  this_01 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar3 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_01,acStack_3c);
  uVar1 = cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  (**(code **)(*(int *)this + 0xcc))(this,uVar1,0xf,0xf);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


