/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ef304  Symbol: Effect_Monster18000 */

/* Effect::Effect_Monster18000() */

void __thiscall Effect::Effect_Monster18000(Effect *this)

{
  CCDirector *this_00;
  undefined4 uVar1;
  int iVar2;
  CCSpriteFrameCache *this_01;
  CCSpriteFrame *pCVar3;
  char *__format;
  int *piVar4;
  char acStack_34 [32];
  int local_14;
  
  piVar4 = *(int **)(DAT_000ef370 + 0xef310);
  local_14 = *piVar4;
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_00);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 == 0) {
    __format = (char *)(DAT_000ef37c + 0xef33c);
    iVar2 = DAT_000ef380 + 0xef33e;
  }
  else {
    __format = (char *)(DAT_000ef374 + 0xef332);
    iVar2 = DAT_000ef378 + 0xef334;
  }
  sprintf(acStack_34,__format,iVar2);
  this_01 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar3 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(this_01,acStack_34);
  uVar1 = cocos2d::CCSprite::spriteWithSpriteFrame(pCVar3);
  (**(code **)(*(int *)this + 0xcc))(this,uVar1,DAT_000ef384,DAT_000ef384);
  if (local_14 != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


