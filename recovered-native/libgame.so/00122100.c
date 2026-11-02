/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122100  Symbol: Game_Start_UI */

/* GameScene::Game_Start_UI() */

void __thiscall GameScene::Game_Start_UI(GameScene *this)

{
  CCSpriteFrameCache *this_00;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  CCFiniteTimeAction *pCVar5;
  code *pcVar6;
  undefined4 uVar7;
  float fVar8;
  float extraout_s0;
  undefined8 uVar9;
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [76];
  
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_001223e8 + 0x122110));
  piVar1 = (int *)cocos2d::CCLayer::node();
  piVar2 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName((char *)(DAT_001223ec + 0x12211e));
  pcVar6 = *(code **)(*piVar2 + 0x3c);
  uVar7 = *(undefined4 *)(this + 0x114);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))();
  uVar4 = __mulsf3(*puVar3,0x3f000000);
  __addsf3(uVar7,uVar4);
  uVar9 = __mulsf3(*(undefined4 *)(this + 0x118),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar6)(piVar2,aCStack_70);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar2,0,0);
  __mulsf3(*(undefined4 *)(this + 0x114),0x3f000000);
  uVar9 = __mulsf3(*(undefined4 *)(this + 0x118),0x3f000000);
  fVar8 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_68,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  pCVar5 = (CCFiniteTimeAction *)cocos2d::CCMoveTo::actionWithDuration(fVar8,DAT_001223f0);
  uVar4 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x7c))(piVar2);
  __mulsf3(*puVar3,0x3f000000);
  uVar9 = __mulsf3(*(undefined4 *)(this + 0x118),0x3f000000,0x80000000);
  fVar8 = (float)cocos2d::CCPoint::CCPoint
                           (aCStack_60,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  uVar7 = cocos2d::CCMoveTo::actionWithDuration(fVar8,DAT_001223f0);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar5,uVar4,uVar7,0);
}


