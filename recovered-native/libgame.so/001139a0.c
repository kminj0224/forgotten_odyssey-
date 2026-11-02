/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001139a0  Symbol: Target_Attack */

/* Target_Attack(cocos2d::CCLayer*, cocos2d::CCLayer*, float) */

void Target_Attack(CCLayer *param_1,CCLayer *param_2,float param_3)

{
  bool bVar1;
  _Unit_Stage *p_Var2;
  _Unit_Stage *p_Var3;
  int iVar4;
  CCLayer *pCVar5;
  CCNode *pCVar6;
  char *pcVar7;
  char cVar8;
  undefined4 in_r2;
  int **ppiVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar10 = DAT_00113cd8 + 0x1139ae;
  p_Var2 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  p_Var3 = (_Unit_Stage *)(**(code **)(*(int *)param_1 + 0xa8))(param_1);
  piVar11 = *(int **)(p_Var2 + 4);
  if ((*piVar11 == 2) && (**(char **)(iVar10 + DAT_00113cdc) != '\0')) {
    return;
  }
  if ((**(char **)(iVar10 + DAT_00113ce0) != '\0') && (*piVar11 == 2)) {
    return;
  }
  iVar4 = __subsf3(piVar11[9],in_r2);
  piVar11[9] = iVar4;
  *(undefined *)(*(int *)(p_Var2 + 4) + 0x124) = 1;
  iVar12 = *(int *)(p_Var3 + 4);
  uVar14 = *(undefined4 *)(iVar12 + 0x28);
  iVar4 = __aeabi_fcmpgt(*(undefined4 *)(iVar12 + 0x24),uVar14);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar12 + 0x24) = uVar14;
  }
  if (**(int **)(p_Var2 + 4) == 2) {
    New_UI::Set_Effect1(*(New_UI **)(**(int **)(iVar10 + DAT_00113ce4) + 0x120),p_Var2);
  }
  if (**(int **)(p_Var2 + 4) == 4) {
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0);
    local_2c = CONCAT13(local_2c._3_1_,0x7f7fff);
    SetDemigeColor(pCVar5,local_2c,p_Var3);
    pCVar6 = (CCNode *)
             cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar10 + DAT_00113ce8),DAT_00113cec);
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag(pCVar6,0);
    local_28 = CONCAT13(local_28._3_1_,0x7f7fff);
LAB_00113aee:
    SetDemigeColor(pCVar5,local_28,p_Var2);
  }
  else {
    if (**(int **)(p_Var2 + 4) == 5) {
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0);
      local_24 = CONCAT13(local_24._3_1_,0x7f7fff);
      SetDemigeColor(pCVar5,local_24,p_Var3);
      pCVar6 = (CCNode *)
               cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar10 + DAT_00113ce8),DAT_00113cf0);
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag(pCVar6,0);
      local_20 = CONCAT13(local_20._3_1_,0x7f7fff);
      local_28 = local_20;
      goto LAB_00113aee;
    }
    iVar4 = 0;
    bVar1 = false;
    do {
      iVar12 = *(int *)(*(int *)(p_Var3 + 4) + iVar4 + 0xd8);
      if ((iVar12 - 5U < 2) || (iVar12 == 9)) {
        bVar1 = true;
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 != 0xc);
    if (!bVar1) {
      local_1c = CONCAT13(local_1c._3_1_,0x7f7fff);
      pCVar5 = param_2;
      local_28 = local_1c;
      goto LAB_00113aee;
    }
  }
  if ((**(int **)(p_Var2 + 4) != 3) &&
     (piVar11 = *(int **)(p_Var2 + 4) + 0x21, *(char *)piVar11 != '\0')) {
    *(char *)piVar11 = '\0';
  }
  if (*(int *)(*(int *)(p_Var2 + 4) + 4) == DAT_00113cf4) {
    *(undefined *)(*(int *)(p_Var2 + 4) + 0x85) = 1;
  }
  ppiVar9 = *(int ***)(iVar10 + DAT_00113cf8);
  piVar11 = *ppiVar9;
  if ((piVar11[0x10] != 0) ||
     ((piVar13 = *(int **)(p_Var2 + 4), *piVar13 != 3 && (piVar13[1] != piVar11[0xb]))))
  goto LAB_00113c4a;
  uVar16 = __extendsfdf2(piVar13[9]);
  uVar17 = __extendsfdf2(piVar13[10]);
  uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_00113cc8,DAT_00113ccc);
  iVar12 = __aeabi_dcmplt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                          (int)((ulonglong)uVar17 >> 0x20));
  iVar4 = DAT_00113cfc;
  if (iVar12 != 0) {
    piVar11[0x10] = 1;
    iVar4 = *(int *)(iVar10 + iVar4);
    piVar13 = *(int **)(iVar10 + DAT_00113d00);
    piVar15 = *(int **)(iVar10 + DAT_00113d04);
    if ((*(int **)(p_Var2 + 4))[1] == piVar11[0xb]) {
      uVar14 = __mulsf3(*(undefined4 *)
                         (iVar4 + ((*piVar13 + -1) * 10 + *piVar15 + -1) * 0x40 + 0x30),0x3f000000);
LAB_00113bc2:
      iVar12 = __fixsfsi(uVar14);
      piVar11[0x11] = iVar12;
    }
    else if (**(int **)(p_Var2 + 4) == 3) {
      uVar14 = *(undefined4 *)(iVar4 + ((*piVar13 + -1) * 10 + *piVar15 + -1) * 0x40 + 0x30);
      goto LAB_00113bc2;
    }
    piVar11[0x12] = *(int *)(iVar4 + ((*piVar13 + -1) * 10 + *piVar15 + -1) * 0x40 + 0x2c);
    Game_Scene_Vibration();
    GameScene::OpenPopup_Img(**(GameScene ***)(iVar10 + DAT_00113ce4),0);
  }
  piVar11 = *ppiVar9;
  if (*(char *)(piVar11 + 0x14) == '\0') {
    iVar4 = *(int *)(p_Var2 + 4);
    uVar16 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x24));
    uVar17 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x28));
    uVar18 = __floatsidf(piVar11[0x15]);
    uVar18 = __muldf3((int)uVar18,(int)((ulonglong)uVar18 >> 0x20),DAT_00113cd0,DAT_00113cd4);
    uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar18,
                      (int)((ulonglong)uVar18 >> 0x20));
    iVar4 = __aeabi_dcmplt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                           (int)((ulonglong)uVar17 >> 0x20));
    if ((iVar4 != 0) && (*piVar11 != 3)) {
      *(char *)(piVar11 + 0x14) = '\x01';
    }
  }
LAB_00113c4a:
  Draw_Castle_Att_Effect(param_2);
  iVar4 = 0;
  while ((*(int *)((iVar4 + 0x36) * 4 + *(int *)(p_Var3 + 4)) == 0 || (**(int **)(p_Var2 + 4) != 0))
        ) {
    iVar4 = iVar4 + 1;
    if (iVar4 == 3) {
      if (**(int **)(iVar10 + DAT_00113d0c) <= **(int **)(iVar10 + DAT_00113d10)) {
        cVar8 = *(char *)(**(int **)(iVar10 + DAT_00113d14) + 1);
        if (*(int *)(*(int *)(p_Var2 + 4) + 4) == 0x96) {
          if (cVar8 == '\0') {
            return;
          }
          pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar8 = (char)DAT_00113d18 + -0x38;
        }
        else {
          if (cVar8 == '\0') {
            return;
          }
          pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
          cVar8 = (char)DAT_00113d34 + '*';
        }
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)cVar8);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_00113d08 + 0x113c58));
}


