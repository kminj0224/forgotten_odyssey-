/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00133b00  Symbol: ccTouchesEnded */

/* MainOption::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void MainOption::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CCNode *pCVar5;
  char *pcVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  char **ppcVar12;
  undefined8 uVar13;
  CCPoint local_20 [3];
  
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar8 = *(undefined4 *)(iVar2 + 0x18);
  uVar9 = *(undefined4 *)(iVar2 + 0x1c);
  iVar10 = DAT_00133ca8 + 0x133b1a;
  puVar11 = *(undefined4 **)(iVar10 + DAT_00133cb0);
  uVar3 = __divsf3(*puVar11,DAT_00133cac);
  __divsf3(uVar8,uVar3);
  uVar3 = __divsf3(puVar11[1],DAT_00133cb4);
  uVar13 = __divsf3(uVar9,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  (**(code **)(*piVar4 + 0x6c))(piVar4,0);
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,7);
  iVar2 = Sprite_Touch2(pCVar5,local_20[0]);
  if (iVar2 != 0) {
    cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
    **(undefined **)(iVar10 + DAT_00133cb8) = 1;
    FileSave();
    return;
  }
  pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
  iVar2 = Sprite_Touch2(pCVar5,local_20[0]);
  if (iVar2 == 0) {
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
    iVar2 = Sprite_Touch2(pCVar5,local_20[0]);
    if (iVar2 == 0) {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
      iVar2 = Sprite_Touch2(pCVar5,local_20[0]);
      if (iVar2 == 0) {
        return;
      }
      piVar4 = *(int **)(iVar10 + DAT_00133cbc);
      if (*(char *)(*piVar4 + 2) == '\0') {
        piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
        (**(code **)(*piVar7 + 0x6c))(piVar7,0);
        *(undefined *)(*piVar4 + 2) = 1;
        return;
      }
      piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
      (**(code **)(*piVar7 + 0x6c))(piVar7,1);
      *(undefined *)(*piVar4 + 2) = 0;
      return;
    }
    piVar4 = *(int **)(iVar10 + DAT_00133cbc);
    if (*(char *)(*piVar4 + 1) == '\0') {
      piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
      (**(code **)(*piVar7 + 0x6c))(piVar7,0);
      *(undefined *)(*piVar4 + 1) = 1;
      if (*(char *)(*piVar4 + 1) == '\0') {
        return;
      }
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_00133cc4 + ':'));
      return;
    }
    piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
    (**(code **)(*piVar7 + 0x6c))(piVar7,1);
    *(undefined *)(*piVar4 + 1) = 0;
  }
  else {
    ppcVar12 = *(char ***)(iVar10 + DAT_00133cbc);
    if (**ppcVar12 == '\0') {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
      (**(code **)(*piVar4 + 0x6c))(piVar4,0);
      **ppcVar12 = '\x01';
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                (pcVar6,SUB41(*(undefined4 *)(iVar10 + DAT_00133cc0),0));
      return;
    }
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
    (**(code **)(*piVar4 + 0x6c))(piVar4,1);
    **ppcVar12 = '\0';
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  }
  CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopAllEffects();
  return;
}


