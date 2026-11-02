/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001343cc  Symbol: update */

/* New_Game_Event::update(float) */

float New_Game_Event::update(float param_1)

{
  bool bVar1;
  CCNode *in_r0;
  int *piVar2;
  int **ppiVar3;
  CCNode *pCVar4;
  char *pcVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float extraout_s0;
  float fVar9;
  float extraout_s0_00;
  float extraout_s0_01;
  
  iVar7 = *(int *)(in_r0 + 0x110);
  iVar8 = DAT_00134570 + 0x1343dc;
  if (iVar7 == 0) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    ppiVar3 = (int **)(**(code **)(*piVar2 + 0xa8))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag(pCVar4,2);
    iVar7 = cocos2d::CCNode::numberOfRunningActions();
    if ((iVar7 == 0) && (in_r0[0x114] == (CCNode)0x0)) {
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                (pcVar5,(bool)((char)DAT_00134574 + '\x1a'));
      if (***(char ***)(iVar8 + DAT_00134578) == '\0') {
        bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      }
      strcpy(*(char **)(iVar8 + DAT_0013457c),(char *)(DAT_00134580 + 0x13443c));
      in_r0[0x114] = (CCNode)0x1;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag(pCVar4,*(int *)(**ppiVar3 + 0x290));
    iVar7 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar7 != 0) {
      return extraout_s0;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    KG_removeChild(pCVar4,true);
    fVar9 = (float)FileLode2((New_Game_Event *)in_r0);
    uVar6 = 1;
  }
  else {
    if (iVar7 != 1) {
      if (iVar7 != 2) {
        return param_1;
      }
      iVar7 = 0;
      **(undefined4 **)(iVar8 + DAT_0013458c) = 1;
      do {
        if (*(char *)(**(int **)(iVar8 + DAT_00134578) + **(int **)(iVar8 + DAT_00134590) * 200 +
                      iVar7 + 6) == '\0') {
          piVar2 = *(int **)(iVar8 + DAT_00134594);
          iVar7 = __divsi3(iVar7,10);
          *piVar2 = iVar7 + 1;
          param_1 = extraout_s0_01;
          break;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 100);
      if (**(int **)(iVar8 + DAT_00134594) < 8) {
        return param_1;
      }
      **(int **)(iVar8 + DAT_00134594) = 8;
      return param_1;
    }
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(in_r0,2);
    ppiVar3 = (int **)(**(code **)(*piVar2 + 0xa8))();
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag(pCVar4,1);
    iVar7 = cocos2d::CCNode::numberOfRunningActions();
    if ((iVar7 == 0) && (in_r0[0x114] == (CCNode)0x0)) {
      pcVar5 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                (pcVar5,(bool)((char)DAT_00134584 + -0x40));
      if (***(char ***)(iVar8 + DAT_00134578) == '\0') {
        bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
      }
      strcpy(*(char **)(iVar8 + DAT_0013457c),(char *)(DAT_00134588 + 0x1344e2));
      in_r0[0x114] = (CCNode)0x1;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    cocos2d::CCNode::getChildByTag(pCVar4,*(int *)(**ppiVar3 + 0x290));
    iVar7 = cocos2d::CCNode::numberOfRunningActions();
    if (iVar7 != 0) {
      return extraout_s0_00;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(in_r0,2);
    fVar9 = (float)KG_removeChild(pCVar4,true);
    uVar6 = 2;
  }
  *(undefined4 *)(in_r0 + 0x110) = uVar6;
  return fVar9;
}


