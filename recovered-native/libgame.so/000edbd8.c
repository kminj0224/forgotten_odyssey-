/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000edbd8  Symbol: ccTouchesEnded */

/* Hero_Main_Layer::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void Hero_Main_Layer::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  CCNode *pCVar4;
  int *piVar5;
  Market_Hero *this;
  char *pcVar6;
  void *pvVar7;
  char *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  undefined8 uVar15;
  CCPoint local_20 [3];
  
  iVar13 = DAT_000eddb4 + 0xedbe4;
  if (**(char **)(iVar13 + DAT_000eddb8) != '\0') {
    return;
  }
  if (**(char **)(iVar13 + DAT_000eddbc) != '\0') {
    return;
  }
  iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
  uVar9 = *(undefined4 *)(iVar2 + 0x18);
  uVar10 = *(undefined4 *)(iVar2 + 0x1c);
  puVar11 = *(undefined4 **)(iVar13 + DAT_000eddc4);
  uVar3 = __divsf3(*puVar11,DAT_000eddc0);
  __divsf3(uVar9,uVar3);
  uVar3 = __divsf3(puVar11[1],DAT_000eddc8);
  uVar15 = __divsf3(uVar10,uVar3);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_20,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
  iVar2 = Sprite_Touch2(pCVar4,local_20[0]);
  if (iVar2 == 0) {
    return;
  }
  **(undefined4 **)(iVar13 + DAT_000eddcc) = 0;
  piVar14 = *(int **)(iVar13 + DAT_000eddd0);
  if (*piVar14 != 0x1a) {
    piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    piVar5 = (int *)(**(code **)(*piVar5 + 0x90))();
    (**(code **)(*piVar5 + 0x114))(piVar5,1);
    piVar5 = (int *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    (**(code **)(*piVar5 + 0x114))(piVar5,1);
    this = (Market_Hero *)(**(code **)(*(int *)param_1 + 0x90))(param_1);
    Market_Hero::SetHeroState(this);
  }
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)param_1,true);
  piVar5 = *(int **)(iVar13 + DAT_000eddd4);
  if (*(char *)(*piVar5 + 1) != '\0') {
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000eddd8 + -0x3c));
  }
  if (*piVar14 != 0x1a) {
    return;
  }
  pvVar7 = (void *)(**(code **)(***(int ***)(iVar13 + DAT_000edddc) + 0xa8))();
  piVar12 = *(int **)(iVar13 + DAT_000edde0);
  Hero_stat(pvVar7,(int)*(char *)(*piVar5 + *piVar12 + DAT_000edde4 + 4));
  New_UI::Skill_Icon_Visivle
            (*(New_UI **)(**(int **)(iVar13 + DAT_000edde8) + 0x120),
             (int)*(char *)(*piVar5 + *piVar12 + DAT_000edde4 + 4));
  if (('\0' < *(char *)(*piVar5 + *(char *)(*piVar5 + *piVar12 + DAT_000edde4 + 4) * 0xc +
                                  *piVar12 * 0x6c + DAT_000eddec)) &&
     (iVar13 = cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar13 + DAT_000eddf0),DAT_000eddf4),
     iVar13 == 0)) {
    cVar1 = *(char *)(*piVar5 + *piVar12 + DAT_000edde4 + 4);
    iVar13 = (int)cVar1;
    if (cVar1 == '\x01') {
      pcVar6 = (char *)(DAT_000eddf8 + 0xedd64);
      pcVar8 = (char *)(DAT_000eddfc + 0xedd66);
    }
    else {
      if (iVar13 == 2) {
        pcVar6 = (char *)(DAT_000ede00 + 0xedd72);
        pcVar8 = (char *)(DAT_000ede04 + 0xedd74);
      }
      else if (iVar13 == 4) {
        pcVar6 = (char *)(DAT_000ede08 + 0xedd80);
        pcVar8 = (char *)(DAT_000ede0c + 0xedd82);
      }
      else if (iVar13 == 3) {
        pcVar6 = (char *)(DAT_000ede10 + 0xedd8e);
        pcVar8 = (char *)(DAT_000ede14 + 0xedd90);
      }
      else {
        if (iVar13 != 5) goto LAB_000edda2;
        pcVar6 = (char *)(DAT_000ede18 + 0xedd9c);
        pcVar8 = (char *)(DAT_000ede1c + 0xedd9e);
      }
      iVar13 = 1;
    }
    Hero_Command_Init(iVar13,pcVar6,pcVar8);
  }
LAB_000edda2:
  *piVar14 = 0xb;
  iVar13 = cocos2d::CCScheduler::sharedScheduler();
  *(undefined4 *)(iVar13 + 0x14) = 0x3f800000;
  return;
}


