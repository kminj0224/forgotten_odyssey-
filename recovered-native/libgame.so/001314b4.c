/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001314b4  Symbol: Ani_Lode */

/* Ending_ani::Ani_Lode() */

void __thiscall Ending_ani::Ani_Lode(Ending_ani *this)

{
  int iVar1;
  CCSpriteFrameCache *this_00;
  int *piVar2;
  CCFiniteTimeAction *pCVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 *puVar7;
  float fVar8;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar9;
  CCPoint aCStack_28 [20];
  
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar1 = DAT_00131708;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_00131704 + 0x1314c6));
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_0013170c + 0x1314d0));
  puVar7 = *(undefined4 **)(iVar1 + 0x1314ce);
  pcVar6 = *(code **)(*piVar2 + 0x3c);
  __mulsf3(*puVar7,0x3f000000);
  uVar9 = __mulsf3(puVar7[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar2,aCStack_28);
  (**(code **)(*piVar2 + 0xec))(piVar2,0);
  fVar8 = (float)(**(code **)(*(int *)this + 0xcc))(this,piVar2,1,1);
  pCVar3 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar8);
  uVar4 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  uVar5 = cocos2d::CCFadeOut::actionWithDuration(extraout_s0_00);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar3,uVar4,uVar5,0);
}


