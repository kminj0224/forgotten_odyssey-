/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e73c4  Symbol: ccTouchesEnded */

/* MarketLayer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void MarketLayer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  CCNode *pCVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  CCPoint local_20 [3];
  
  iVar9 = DAT_000e75d4 + 0xe73d0;
  if (**(char **)(iVar9 + DAT_000e75d8) != '\0') {
    return;
  }
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar7 = *(undefined4 *)(iVar2 + 0x18);
  uVar8 = *(undefined4 *)(iVar2 + 0x1c);
  puVar10 = *(undefined4 **)(iVar9 + DAT_000e75e0);
  uVar3 = __divsf3(*puVar10,DAT_000e75dc);
  __divsf3(uVar7,uVar3);
  uVar3 = __divsf3(puVar10[1],DAT_000e75e4);
  uVar11 = __divsf3(uVar8,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
  if (**(char **)(iVar9 + DAT_000e75e8) != '\0') {
    return;
  }
  if (**(char **)(iVar9 + DAT_000e75ec) != '\0') {
    return;
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,10);
  iVar2 = Sprite_Touch(pCVar4,local_20[0]);
  if (iVar2 != 0) {
    **(undefined4 **)(iVar9 + DAT_000e75f0) = 1;
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
    CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopAllEffects();
    if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') {
      return;
    }
    pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar5,(bool)((char)DAT_000e75f8 + -0x80));
    return;
  }
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xc);
  iVar2 = Sprite_Touch(pCVar4,local_20[0]);
  if (iVar2 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
    iVar2 = Sprite_Touch(pCVar4,local_20[0]);
    if (iVar2 == 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xb);
      iVar9 = Sprite_Touch(pCVar4,local_20[0]);
      if (iVar9 == 0) {
        return;
      }
      set_In_App_Layer((int)param_1);
      return;
    }
    iVar2 = *(int *)(param_1 + 0x124);
    if (iVar2 == 0) {
      **(undefined4 **)(iVar9 + DAT_000e7600) = 2;
      if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e760c + 'N';
    }
    else if (iVar2 == 1) {
      **(undefined4 **)(iVar9 + DAT_000e7600) = 4;
      if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e7610 + 't';
    }
    else {
      if (iVar2 != 2) goto LAB_000e75ac;
      **(undefined4 **)(iVar9 + DAT_000e75f0) = 1;
      bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopAllEffects();
      if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e7614 + -0x56;
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 0x124);
    if (iVar2 == 0) {
      **(undefined4 **)(iVar9 + DAT_000e75f0) = 1;
      bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::stopAllEffects();
      if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e75fc + -0x2e;
    }
    else if (iVar2 == 1) {
      **(undefined4 **)(iVar9 + DAT_000e7600) = 1;
      if (*(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0') goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e7604 + -0xe;
    }
    else {
      if ((iVar2 != 2) ||
         (**(undefined4 **)(iVar9 + DAT_000e7600) = 2,
         *(char *)(**(int **)(iVar9 + DAT_000e75f4) + 1) == '\0')) goto LAB_000e75ac;
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar6 = (char)DAT_000e7608 + '\x12';
    }
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar5,(bool)cVar6);
LAB_000e75ac:
  FileSave();
  return;
}


