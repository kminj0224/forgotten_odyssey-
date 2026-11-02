/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125f68  Symbol: GameOverTouchEnded */

/* GameScene::GameOverTouchEnded(cocos2d::CCPoint) */

void GameScene::GameOverTouchEnded(CCPoint param_1)

{
  bool bVar1;
  CCNode *pCVar2;
  int *piVar3;
  CCSize *pCVar4;
  int iVar5;
  CCScene *pCVar6;
  CCDirector *this;
  undefined4 uVar7;
  int *this_00;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  CCPoint in_r1;
  CCPoint in_r2;
  CCNode **ppCVar11;
  int **ppiVar12;
  code *pcVar13;
  int iVar14;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar15;
  CCPoint aCStack_20 [12];
  
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,2);
  iVar14 = DAT_001261f4;
  pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,2);
  iVar14 = iVar14 + 0x125f98;
  (**(code **)(*piVar3 + 0x7c))();
  iVar5 = KG_Touch(in_r1,in_r2,*pCVar4);
  if (iVar5 == 0) {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,3);
    pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,3);
    (**(code **)(*piVar3 + 0x7c))();
    iVar5 = KG_Touch(in_r1,in_r2,*pCVar4);
    if (iVar5 == 0) {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,4);
      pCVar4 = (CCSize *)(**(code **)(*piVar3 + 0x38))();
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,4);
      (**(code **)(*piVar3 + 0x7c))();
      iVar14 = KG_Touch(in_r1,in_r2,*pCVar4);
      if (iVar14 != 0) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,4);
        cocos2d::CCNode::setScale(pCVar2,extraout_s0_01);
        iVar14 = cocos2d::CCScheduler::sharedScheduler();
        *(undefined4 *)(iVar14 + 0x14) = 0x3f800000;
      }
    }
    else {
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,3);
      cocos2d::CCNode::setScale(pCVar2,extraout_s0_00);
      ppCVar11 = *(CCNode ***)(iVar14 + DAT_001261fc);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,1);
      iVar5 = (**(code **)(*piVar3 + 0xa8))();
      if (**(CCNode ***)(iVar14 + DAT_00126200) != (CCNode *)0x0) {
        cocos2d::CCNode::removeFromParentAndCleanup(**(CCNode ***)(iVar14 + DAT_00126200),true);
      }
      uVar7 = DAT_00126208;
      **(undefined4 **)(iVar14 + DAT_00126204) = 0xb;
      *(undefined4 *)(*(int *)(iVar5 + 4) + 100) = 0xffffffff;
      *(undefined4 *)(*(int *)(iVar5 + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x28);
      ppiVar12 = *(int ***)(iVar14 + DAT_0012620c);
      pCVar2 = *ppCVar11;
      piVar3 = *ppiVar12;
      iVar14 = *piVar3;
      uVar7 = __subsf3(uVar7,*(undefined4 *)(*(int *)(iVar5 + 4) + 0x54));
      uVar7 = __subsf3(uVar7,DAT_00126210);
      __addsf3(uVar7,DAT_00126214);
      uVar7 = __fixsfsi();
      (**(code **)(iVar14 + 0xd8))(piVar3,pCVar2,uVar7);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
      KG_removeChild(pCVar2,true);
      RevivalCall((GameScene *)param_1);
      iVar14 = cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,DAT_00126218);
      if (iVar14 != 0) {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,DAT_00126218);
        this_00 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,DAT_0012621c);
        piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,DAT_00126220);
        iVar5 = (**(code **)(*piVar3 + 0xa8))(piVar3);
        *(undefined4 *)(*(int *)(iVar5 + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar5 + 4) + 0x28);
        iVar14 = DAT_00126224;
        *(undefined4 *)(*(int *)(iVar5 + 4) + 100) = 0xffffffff;
        uVar7 = cocos2d::CCSprite::spriteWithFile((char *)(iVar14 + 0x126112));
        uVar9 = cocos2d::CCSprite::spriteWithFile((char *)(DAT_00126228 + 0x12611c));
        pcVar13 = *(code **)(*piVar3 + 0xd0);
        uVar10 = cocos2d::CCNode::getChildByTag((CCNode *)piVar3,0);
        (*pcVar13)(piVar3,uVar10,1);
        pcVar13 = *(code **)(*this_00 + 0xd0);
        uVar10 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
        (*pcVar13)(this_00,uVar10,1);
        (**(code **)(*piVar3 + 0xcc))(piVar3,uVar7,0,0);
        (**(code **)(*this_00 + 0xcc))(this_00,uVar9,0,0);
        pcVar13 = *(code **)(*piVar8 + 0x3c);
        uVar15 = (**(code **)(*piVar8 + 0x38))(piVar8);
        cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
        (*pcVar13)(piVar8,aCStack_20);
        iVar14 = (**(code **)(*piVar8 + 0xa8))(piVar8);
        *(undefined4 *)(*(int *)(iVar14 + 4) + 100) = 0xffffffff;
      }
      iVar14 = cocos2d::CCScheduler::sharedScheduler();
      *(undefined4 *)(iVar14 + 0x14) = 0x3f800000;
    }
  }
  else {
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,2);
    cocos2d::CCNode::setScale(pCVar2,extraout_s0);
    GameRemove((GameScene *)param_1);
    **(undefined4 **)(iVar14 + DAT_001261f8) = 8;
    pCVar6 = (CCScene *)MainScene::scene();
    this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::replaceScene(this,pCVar6);
    iVar14 = cocos2d::CCScheduler::sharedScheduler();
    *(undefined4 *)(iVar14 + 0x14) = 0x3f800000;
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
    CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopAllEffects();
  }
  return;
}


