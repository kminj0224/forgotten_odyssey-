/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123254  Symbol: GAMESTARTUI_CALL */

/* GameScene::GAMESTARTUI_CALL() */

void __thiscall GameScene::GAMESTARTUI_CALL(GameScene *this)

{
  bool bVar1;
  int iVar2;
  CCNode *this_00;
  undefined4 uVar3;
  char *pcVar4;
  code *pcVar5;
  char *__dest;
  char **ppcVar6;
  
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,4);
  if (iVar2 != 0) {
    this_00 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    cocos2d::CCNode::getChildByTag(this_00,0);
    iVar2 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar2 == 0) {
      pcVar5 = *(code **)(*(int *)this + 0xd0);
      uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,4);
      (*pcVar5)(this,uVar3,1);
      ppcVar6 = *(char ***)(DAT_0012334c + 0x12329c);
      if (*(int *)(*ppcVar6 + (**(int **)(DAT_00123348 + 0x123298) + DAT_00123350) * 4 + 4) == 3) {
        uVar3 = Tutorial_Layer::node();
        (**(code **)(*(int *)this + 0xcc))(this,uVar3,0x16,0x16);
      }
      bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      __dest = *(char **)(DAT_00123358 + 0x1232d6);
      iVar2 = ***(int ***)(DAT_00123354 + 0x1232d2);
      if (((iVar2 == 3) || (iVar2 == 1)) || (iVar2 == 8)) {
        pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                  (pcVar4,(bool)((char)DAT_0012335c + -0xe));
        if (**ppcVar6 == '\0') {
          bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
          CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
        }
        strcpy(__dest,(char *)(DAT_00123360 + 0x12330e));
      }
      else {
        pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                  (pcVar4,(bool)((char)DAT_00123368 + '@'));
      }
      if (**ppcVar6 == '\0') {
        bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      }
      strcpy(__dest,(char *)(DAT_00123364 + 0x12332c));
      *(undefined4 *)(this + 0x124) = 0;
    }
  }
  return;
}


