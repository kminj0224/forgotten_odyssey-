/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000de768  Symbol: ccTouchesEnded */

/* Market_Hero::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Market_Hero::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  CCNode *pCVar4;
  int *piVar5;
  char *pcVar6;
  Hero_Main_Layer *pHVar7;
  New_Notice *this;
  CCFiniteTimeAction *pCVar8;
  char cVar9;
  char *pcVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  code *pcVar13;
  undefined4 *puVar14;
  int iVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  undefined8 uVar16;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  CCPoint local_28 [2];
  CCPoint local_20;
  int local_1c;
  
  iVar15 = DAT_000dead4 + 0xde774;
  pcVar10 = *(char **)(iVar15 + DAT_000dead8);
  if (*pcVar10 != '\0') {
    return;
  }
  if (param_1[0x124] == (CCSet)0x0) {
    return;
  }
  if (**(char **)(iVar15 + DAT_000deadc) != '\0') {
    **(char **)(iVar15 + DAT_000deadc) = '\0';
    return;
  }
  iVar1 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar11 = *(undefined4 *)(iVar1 + 0x18);
  uVar12 = *(undefined4 *)(iVar1 + 0x1c);
  puVar14 = *(undefined4 **)(iVar15 + DAT_000deae4);
  uVar2 = __divsf3(*puVar14,DAT_000deae0);
  __divsf3(uVar11,uVar2);
  uVar2 = __divsf3(puVar14[1],DAT_000deae8);
  uVar16 = __divsf3(uVar12,uVar2);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_28,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  if (**(char **)(iVar15 + DAT_000deaec) != '\0') {
    return;
  }
  if (**(char **)(iVar15 + DAT_000deaf0) != '\0') {
    return;
  }
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,5);
  (**(code **)(*piVar3 + 0x6c))(piVar3,0);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xb);
  iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
  if (iVar1 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xc);
    iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
    if (iVar1 == 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
      iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
      if (iVar1 == 0) {
        pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
        iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
        if (iVar1 == 0) {
          pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
          iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
          if (iVar1 == 0) {
            pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,2);
            iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
            if (iVar1 == 0) {
              pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,3);
              iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
              if (iVar1 == 0) {
                pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,4);
                iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
                if (iVar1 == 0) {
                  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,5);
                  iVar1 = Sprite_Touch2(pCVar4,local_28[0]);
                  if (iVar1 != 0) {
                    iVar1 = *(int *)(param_1 + 0x114);
                    if ((*(char *)(**(int **)(iVar15 + DAT_000decd0) +
                                   **(int **)(iVar15 + DAT_000decd8) * 9 + iVar1 + DAT_000decdc) !=
                         '\0') &&
                       (iVar15 = **(int **)(iVar15 + DAT_000decd0) +
                                 **(int **)(iVar15 + DAT_000decd8) + DAT_000decf0,
                       *(char *)(iVar15 + 4) != iVar1)) {
                      *(char *)(iVar15 + 4) = (char)iVar1;
                      cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,extraout_s0,extraout_s1);
                      vDrawFrame((CCNode *)param_1,(char *)(DAT_000decfc + 0xdec20),local_20,
                                 local_1c,0x11);
                      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
                      cocos2d::CCNode::setScale(pCVar4,extraout_s0_00);
                      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
                      (**(code **)(*piVar3 + 0xec))(piVar3,0);
                      uVar16 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
                      pCVar8 = (CCFiniteTimeAction *)
                               cocos2d::CCScaleTo::actionWithDuration
                                         ((float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
                      uVar2 = cocos2d::CCFadeIn::actionWithDuration(extraout_s0_01);
                      pCVar8 = (CCFiniteTimeAction *)cocos2d::CCSpawn::actions(pCVar8,uVar2,0);
                      uVar2 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_02,extraout_s1_00);
                      uVar11 = cocos2d::CCScaleTo::actionWithDuration(extraout_s0_03,extraout_s1_01)
                      ;
                    /* WARNING: Subroutine does not return */
                      cocos2d::CCSequence::actions(pCVar8,uVar2,uVar11,0);
                    }
                  }
                  goto LAB_000decb4;
                }
                piVar3 = *(int **)(iVar15 + DAT_000decd0);
                if (*(char *)(*piVar3 + **(int **)(iVar15 + DAT_000decd8) * 9 +
                              **(int **)(iVar15 + DAT_000decd4) + DAT_000decdc) == '\0') {
                  this = (New_Notice *)New_Notice::node();
                  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,DAT_000dece4,DAT_000dece4);
                  pcVar6 = (char *)(DAT_000dece8 + 0xdebba);
                  iVar15 = DAT_000decec;
                  goto LAB_000debba;
                }
                pHVar7 = (Hero_Main_Layer *)Hero_Main_Layer::node();
                (**(code **)(*(int *)param_1 + 0xcc))(param_1,pHVar7,0x16,0x16);
                Hero_Main_Layer::Hero_Main_Layer_Draw_Num(pHVar7,2);
                if (*(char *)(*piVar3 + 1) == '\0') goto LAB_000decb4;
                pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                cVar9 = (char)DAT_000dece0 + -0x66;
              }
              else {
                piVar3 = *(int **)(iVar15 + DAT_000deaf4);
                if (*(char *)(*piVar3 + **(int **)(iVar15 + DAT_000deb14) * 9 +
                              **(int **)(iVar15 + DAT_000deb10) + DAT_000deb18) == '\0') {
                  this = (New_Notice *)New_Notice::node();
                  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this,DAT_000deb20,DAT_000deb20);
                  pcVar6 = (char *)(DAT_000deb24 + 0xdead0);
                  iVar15 = DAT_000deb28;
LAB_000debba:
                  New_Notice::noticeWithType(this,pcVar6,iVar15,0);
                  goto LAB_000decb4;
                }
                pHVar7 = (Hero_Main_Layer *)Hero_Main_Layer::node();
                (**(code **)(*(int *)param_1 + 0xcc))(param_1,pHVar7,0x15,0x15);
                Hero_Main_Layer::Hero_Main_Layer_Draw_Num(pHVar7,1);
                if (*(char *)(*piVar3 + 1) == '\0') goto LAB_000decb4;
                pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                cVar9 = (char)DAT_000deb1c + -0x52;
              }
            }
            else {
              pHVar7 = (Hero_Main_Layer *)Hero_Main_Layer::node();
              (**(code **)(*(int *)param_1 + 0xcc))(param_1,pHVar7,0x14,0x14);
              Hero_Main_Layer::Hero_Main_Layer_Draw_Num(pHVar7,0);
              if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
              pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
              cVar9 = (char)DAT_000deb0c + '@';
            }
          }
          else {
            piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
            pcVar13 = *(code **)(*piVar3 + 0x3c);
            piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xf);
            uVar2 = (**(code **)(*piVar5 + 0x38))();
            (*pcVar13)(piVar3,uVar2);
            Hero_img_Draw((Market_Hero *)param_1,5);
            if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
            pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            cVar9 = (char)DAT_000deb08 + -0xe;
          }
        }
        else {
          piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
          pcVar13 = *(code **)(*piVar3 + 0x3c);
          piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xd);
          uVar2 = (**(code **)(*piVar5 + 0x38))();
          (*pcVar13)(piVar3,uVar2);
          Hero_img_Draw((Market_Hero *)param_1,3);
          if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
          pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar9 = (char)DAT_000deb04 + -100;
        }
      }
      else {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
        pcVar13 = *(code **)(*piVar3 + 0x3c);
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xe);
        uVar2 = (**(code **)(*piVar5 + 0x38))();
        (*pcVar13)(piVar3,uVar2);
        Hero_img_Draw((Market_Hero *)param_1,4);
        if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
        pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_000deb00 + 'F';
      }
    }
    else {
      piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xc);
      uVar2 = (**(code **)(*piVar5 + 0x38))();
      (*pcVar13)(piVar3,uVar2);
      Hero_img_Draw((Market_Hero *)param_1,2);
      if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
      pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar9 = (char)DAT_000deafc + -0x12;
    }
  }
  else {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
    pcVar13 = *(code **)(*piVar3 + 0x3c);
    piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0xb);
    uVar2 = (**(code **)(*piVar5 + 0x38))();
    (*pcVar13)(piVar3,uVar2);
    Hero_img_Draw((Market_Hero *)param_1,1);
    if (*(char *)(**(int **)(iVar15 + DAT_000deaf4) + 1) == '\0') goto LAB_000decb4;
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    cVar9 = (char)DAT_000deaf8 + -0x6a;
  }
  CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)cVar9);
LAB_000decb4:
  iVar15 = cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x17);
  if ((iVar15 != 0) && (*pcVar10 == '\0')) {
    *pcVar10 = '\x01';
  }
  return;
}


