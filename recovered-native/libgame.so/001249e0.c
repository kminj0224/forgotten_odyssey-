/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001249e0  Symbol: GameEnd */

/* GameScene::GameEnd() */

void GameScene::GameEnd(void)

{
  int iVar1;
  bool bVar2;
  int *in_r0;
  CCNode *pCVar3;
  int *this;
  int *piVar4;
  undefined4 *puVar5;
  CCAction *this_00;
  char *pcVar6;
  int *piVar7;
  CCFiniteTimeAction *pCVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char **ppcVar11;
  int *piVar12;
  int *piVar13;
  code *pcVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  CCNode **ppCVar19;
  int iVar20;
  int iVar21;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float fVar22;
  float extraout_s0_03;
  float in_s1;
  undefined8 uVar23;
  float extraout_s1;
  float extraout_s1_00;
  New_Notice *local_84;
  int local_80;
  int local_7c;
  int local_70;
  CCPoint local_60;
  int local_5c;
  CCPoint aCStack_58 [16];
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  
  iVar21 = DAT_00124c9c + 0x1249ec;
  if (**(char **)(iVar21 + DAT_00124ca0) == '\0') {
    return;
  }
  iVar15 = **(int **)(iVar21 + DAT_00124ca4);
  if (iVar15 != 0xe) {
    if (iVar15 == 0xd) {
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playBackgroundMusic
                (pcVar6,(bool)((char)DAT_001250bc + '\x06'));
      if (***(char ***)(iVar21 + DAT_001250c0) == '\0') {
        bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
      }
      strcpy(*(char **)(iVar21 + DAT_001250c4),(char *)(DAT_001250c8 + 0x124f28));
      if (***(int ***)(iVar21 + DAT_001250cc) == 3) {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,extraout_s0_01,extraout_s1);
        pcVar6 = (char *)(DAT_001250d4 + 0x124f4c);
      }
      else {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,extraout_s0_01,extraout_s1);
        pcVar6 = (char *)(DAT_001250d8 + 0x124f68);
        local_48 = local_40;
        local_44 = local_3c;
      }
LAB_00124fe4:
      vDrawImage((CCNode *)in_r0,pcVar6,local_48,local_44,0xb);
      New_UI::Set_Effect2((New_UI *)in_r0[0x48]);
      piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xb);
      (**(code **)(*piVar7 + 0xec))(piVar7,0);
      fVar22 = (float)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0xb);
      pCVar8 = (CCFiniteTimeAction *)cocos2d::CCFadeIn::actionWithDuration(fVar22);
      uVar9 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0_03);
      uVar10 = cocos2d::CCCallFunc::actionWithTarget
                         ((CCCallFunc *)in_r0,*(CCObject **)(iVar21 + DAT_001250ec),
                          (_func_void *)0x0);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCSequence::actions(pCVar8,uVar9,uVar10,0);
    }
    if (iVar15 == 0xf) {
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar6,(bool)((char)DAT_001250dc + '~'))
      ;
      if (***(char ***)(iVar21 + DAT_001250c0) == '\0') {
        bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
      }
      strcpy(*(char **)(iVar21 + DAT_001250c4),(char *)(DAT_001250e0 + 0x124fa0));
      if (***(int ***)(iVar21 + DAT_001250cc) == 3) {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0_02,extraout_s1_00);
        pcVar6 = (char *)(DAT_001250e4 + 0x124fc4);
        local_48 = local_38;
        local_44 = local_34;
      }
      else {
        cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0_02,extraout_s1_00);
        pcVar6 = (char *)(DAT_001250e8 + 0x124fe4);
        local_48 = local_30;
        local_44 = local_2c;
      }
      goto LAB_00124fe4;
    }
    if (iVar15 != 0x11) {
      return;
    }
    iVar20 = in_r0[0x4a];
    iVar18 = 0;
    iVar15 = __fixsfsi(iVar20);
    local_7c = 0;
    local_80 = 0;
    while( true ) {
      while( true ) {
        for (; 0xe10 < iVar15; iVar15 = iVar15 + DAT_001250f0) {
          local_80 = local_80 + 1;
        }
        if (iVar15 < 0x3d) break;
        iVar15 = iVar15 + -0x3c;
        local_7c = local_7c + 1;
      }
      if (iVar15 < 2) break;
      iVar18 = iVar18 + 1;
      iVar15 = iVar15 + -1;
    }
    iVar15 = __aeabi_fcmpgt(iVar20,DAT_00125180);
    if (iVar15 == 0) {
      iVar15 = __aeabi_fcmpgt(iVar20,DAT_00125184);
      if ((iVar15 != 0) &&
         (iVar20 = __aeabi_fcmplt(iVar20,DAT_00125188), iVar15 = DAT_0012518c, iVar20 != 0))
      goto LAB_00125126;
      iVar15 = 0xfe;
    }
    else {
      iVar15 = 0xfc;
    }
    iVar15 = iVar15 << 0x16;
LAB_00125126:
    uVar9 = __floatsisf(*(undefined4 *)
                         (((**(int **)(iVar21 + DAT_00125190) + -1) * 10 +
                           **(int **)(iVar21 + DAT_00125198) + -1) * 4 +
                         *(int *)(iVar21 + DAT_00125194)));
    __mulsf3(uVar9,iVar15);
    iVar21 = __fixsfsi();
    GameEnd_Gold_Time_Count((GameScene *)in_r0,iVar21,local_80,local_7c,iVar18);
    return;
  }
  **(int **)(iVar21 + DAT_00124ca4) = 0x11;
  ppCVar19 = *(CCNode ***)(iVar21 + DAT_00124ca8);
  pCVar3 = *ppCVar19;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_60,in_s0,in_s1);
  vDrawScript_Lode((char *)(DAT_00124cb4 + 0x124a26),(char *)(DAT_00124cb8 + 0x124a28),pCVar3,
                   local_60,local_5c,0xe,true,true);
  bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
  pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar6,(bool)((char)DAT_00124cbc + 'N'));
  ppcVar11 = *(char ***)(iVar21 + DAT_00124cc0);
  if (**ppcVar11 == '\0') {
    bVar2 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar2);
  }
  strcpy(*(char **)(iVar21 + DAT_00124cc4),(char *)(DAT_00124cc8 + 0x124a72));
  if ((*ppcVar11)[1] != '\0') {
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_00124ccc + -0x76));
  }
  Particle_Stop();
  piVar12 = *(int **)(iVar21 + DAT_00124cd0);
  piVar13 = *(int **)(iVar21 + DAT_00124cd4);
  GameEnd_Stage_Number((GameScene *)in_r0,*piVar12,*piVar13);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar19,0xe);
  piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,5);
  this = (int *)cocos2d::CCNode::getChildByTag(*ppCVar19,0xe);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar19,0xe);
  piVar4 = (int *)cocos2d::CCNode::getChildByTag(pCVar3,5);
  pcVar14 = *(code **)(*piVar4 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*piVar7 + 0x38))(piVar7);
  __subsf3(*puVar5,DAT_00124cd8);
  uVar23 = (**(code **)(*piVar7 + 0x38))(piVar7);
  cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar23,(float)((ulonglong)uVar23 >> 0x20));
  (*pcVar14)(piVar4,aCStack_58);
  (**(code **)(*this + 0xa8))(this);
  iVar18 = in_r0[0x4a];
  for (iVar15 = __fixsfsi(iVar18); 0x3c < iVar15; iVar15 = iVar15 + -0x3c) {
  }
  iVar15 = __aeabi_fcmpgt(iVar18,DAT_00124cdc);
  if (iVar15 == 0) {
    iVar15 = __aeabi_fcmpgt(iVar18,DAT_00124ce0);
    if ((iVar15 == 0) || (iVar15 = __aeabi_fcmplt(iVar18,DAT_00124ce4), iVar15 == 0)) {
      iVar15 = __aeabi_fcmplt(iVar18,DAT_00124ce0);
      iVar18 = 2;
      if (iVar15 == 0) {
        do {
          piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar18);
          iVar18 = iVar18 + 1;
          (**(code **)(*piVar7 + 0x6c))(piVar7,0);
        } while (iVar18 != 5);
        local_70 = 0x3f800000;
        iVar15 = 0;
      }
      else {
        local_70 = 0x3f800000;
        iVar15 = 3;
      }
    }
    else {
      piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
      local_70 = DAT_0012518c;
      (**(code **)(*piVar7 + 0x6c))(piVar7,0);
      iVar15 = 2;
    }
  }
  else {
    piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,3);
    (**(code **)(*piVar7 + 0x6c))(piVar7,0);
    piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,4);
    (**(code **)(*piVar7 + 0x6c))(piVar7,0);
    local_70 = 0x3f000000;
    iVar15 = 1;
  }
  pcVar6 = *ppcVar11;
  piVar7 = *(int **)(iVar21 + DAT_00124ce8);
  iVar18 = *piVar7;
  iVar20 = *piVar13 + (*piVar12 + -1) * 10;
  pcVar6[iVar18 * 200 + iVar20 + 6] = '\x01';
  iVar20 = iVar18 * 2000 + iVar20 * 10;
  if (pcVar6[pcVar6[DAT_00124cec + iVar18 + 4] + iVar20 + 0xbc0] != '\0') goto LAB_00124d78;
  iVar17 = 0;
  iVar16 = 0;
  do {
    iVar1 = iVar17 + iVar20;
    iVar17 = iVar17 + 1;
    iVar16 = iVar16 + (uint)(pcVar6[iVar1 + 0xbc0] != '\0');
  } while (iVar17 != 10);
  if (iVar16 == 0) {
    *(int *)(pcVar6 + (DAT_00124cf0 + iVar18) * 4 + 4) =
         *(int *)(pcVar6 + (DAT_00124cf0 + iVar18) * 4 + 4) + 1000;
    local_84 = (New_Notice *)New_Notice::node();
    pcVar6 = (char *)(DAT_00124cf4 + 0x124c52);
    iVar18 = DAT_00124cf8;
LAB_00124d20:
    New_Notice::noticeWithType(local_84,pcVar6,iVar18,0);
    (**(code **)(*in_r0 + 0xcc))(in_r0,local_84,0xf,0xf);
  }
  else {
    if (iVar16 == 1) {
      Set_Item_Upgrade_Count(1);
      local_84 = (New_Notice *)New_Notice::node();
      pcVar6 = (char *)(DAT_00124cfc + 0x124c6a);
      iVar18 = DAT_00125094;
      goto LAB_00124d20;
    }
    if (iVar16 == 2) {
      *(int *)(pcVar6 + DAT_00124cec) = *(int *)(pcVar6 + DAT_00124cec) + 3;
      local_84 = (New_Notice *)New_Notice::node();
      pcVar6 = (char *)(DAT_00124d00 + 0x124c82);
      iVar18 = DAT_00125094;
      goto LAB_00124d20;
    }
    if (iVar16 == 3) {
      *(int *)(pcVar6 + DAT_00124cec) = *(int *)(pcVar6 + DAT_00124cec) + 3;
      local_84 = (New_Notice *)New_Notice::node();
      pcVar6 = &UNK_00124c9a + DAT_00124d04;
      iVar18 = DAT_00125094;
      goto LAB_00124d20;
    }
    if (iVar16 == 4) {
      Set_Item_Upgrade_Count(2);
      local_84 = (New_Notice *)New_Notice::node();
      pcVar6 = (char *)(DAT_00125090 + 0x124d1e);
      iVar18 = DAT_00125094;
      goto LAB_00124d20;
    }
  }
  (*ppcVar11)
  [(int)(*ppcVar11)[DAT_00125098 + *piVar7 + 4] +
   *piVar7 * 2000 + ((*piVar12 + -1) * 10 + *piVar13) * 10 + 0xbc0] = '\x01';
LAB_00124d78:
  pcVar6 = *ppcVar11;
  iVar17 = *piVar7;
  iVar18 = *piVar13 + -1 + (*piVar12 + -1) * 10;
  iVar20 = (iVar17 * 200 + iVar18 + 0x98) * 4;
  if (*(int *)(pcVar6 + iVar20) < iVar15) {
    *(int *)(pcVar6 + iVar20) = iVar15;
  }
  iVar17 = iVar17 + DAT_0012509c;
  uVar9 = __floatsisf(*(undefined4 *)(pcVar6 + iVar17 * 4 + 4));
  uVar10 = __floatsisf(*(undefined4 *)(iVar18 * 4 + *(int *)(iVar21 + DAT_001250a0)));
  uVar10 = __mulsf3(uVar10,local_70);
  __addsf3(uVar9,uVar10);
  uVar9 = __fixsfsi();
  *(undefined4 *)(pcVar6 + iVar17 * 4 + 4) = uVar9;
  FileSave();
  iVar21 = 2;
  do {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar21);
    iVar21 = iVar21 + 1;
    this_00 = (CCAction *)cocos2d::CCObject::copy();
    cocos2d::CCNode::runAction(pCVar3,this_00);
    cocos2d::CCObject::release((CCObject *)this_00);
  } while (iVar21 != 5);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar19,0xe);
  fVar22 = (float)cocos2d::CCNode::getChildByTag(pCVar3,5);
  pCVar8 = (CCFiniteTimeAction *)cocos2d::CCFadeOut::actionWithDuration(fVar22);
  uVar9 = cocos2d::CCDelayTime::actionWithDuration(extraout_s0);
  uVar10 = cocos2d::CCFadeIn::actionWithDuration(extraout_s0_00);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCSequence::actions(pCVar8,uVar9,uVar10,0);
}


