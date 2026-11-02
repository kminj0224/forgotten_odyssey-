/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00125bc0  Symbol: NoticeNo */

/* GameScene::NoticeNo(int) */

void __thiscall GameScene::NoticeNo(GameScene *this,int param_1)

{
  bool bVar1;
  CCScene *pCVar2;
  CCDirector *this_00;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = DAT_00125c24 + 0x125bc8;
  if (param_1 == 0xc) {
    GameRemove(this);
    **(undefined4 **)(iVar5 + DAT_00125c28) = 3;
    uVar3 = 2;
    puVar4 = *(undefined4 **)(iVar5 + DAT_00125c2c);
  }
  else if (param_1 == 0xd) {
    GameRemove(this);
    uVar3 = 8;
    puVar4 = *(undefined4 **)(iVar5 + DAT_00125c28);
  }
  else {
    if (param_1 != 0xb) {
      return;
    }
    GameRemove(this);
    uVar3 = 9;
    puVar4 = *(undefined4 **)(iVar5 + DAT_00125c28);
  }
  *puVar4 = uVar3;
  pCVar2 = (CCScene *)MainScene::scene();
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::replaceScene(this_00,pCVar2);
  bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  return;
}


