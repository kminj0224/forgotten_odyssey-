/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00115518  Symbol: Target_Attack */

/* Target_Attack(cocos2d::CCLayer*, float) */

void Target_Attack(CCLayer *param_1,float param_2)

{
  _Unit_Stage *p_Var1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  undefined4 in_r1;
  int **ppiVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined4 local_1c;
  
  iVar6 = DAT_00115770 + 0x115526;
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_1 + 0xa8))();
  piVar7 = *(int **)(p_Var1 + 4);
  if (*piVar7 == 2) {
    if (**(char **)(iVar6 + DAT_00115774) != '\0') {
      return;
    }
    if (**(char **)(iVar6 + DAT_00115778) != '\0') {
      return;
    }
  }
  if ((**(char **)(iVar6 + DAT_00115778) != '\0') && (*piVar7 == 2)) {
    return;
  }
  iVar2 = __subsf3(piVar7[9],in_r1);
  piVar7[9] = iVar2;
  *(undefined *)(*(int *)(p_Var1 + 4) + 0x124) = 1;
  iVar8 = *(int *)(p_Var1 + 4);
  uVar10 = *(undefined4 *)(iVar8 + 0x28);
  iVar2 = __aeabi_fcmpgt(*(undefined4 *)(iVar8 + 0x24),uVar10);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar8 + 0x24) = uVar10;
  }
  if ((**(int **)(p_Var1 + 4) != 3) &&
     (piVar7 = *(int **)(p_Var1 + 4) + 0x21, *(char *)piVar7 != '\0')) {
    *(char *)piVar7 = '\0';
  }
  if (**(int **)(p_Var1 + 4) == 2) {
    local_1c = CONCAT13(local_1c._3_1_,0x7f7fff);
    SetDemigeColor(param_1,local_1c,p_Var1);
    New_UI::Set_Effect1(*(New_UI **)(**(int **)(iVar6 + DAT_0011577c) + 0x120),p_Var1);
  }
  if (*(int *)(*(int *)(p_Var1 + 4) + 4) == DAT_00115780) {
    *(undefined *)(*(int *)(p_Var1 + 4) + 0x85) = 1;
  }
  ppiVar5 = *(int ***)(iVar6 + DAT_00115784);
  piVar7 = *ppiVar5;
  if ((piVar7[0x10] != 0) ||
     ((piVar9 = *(int **)(p_Var1 + 4), *piVar9 != 3 && (piVar9[1] != piVar7[0xb]))))
  goto LAB_00115714;
  uVar12 = __extendsfdf2(piVar9[9]);
  uVar13 = __extendsfdf2(piVar9[10]);
  uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_00115760,DAT_00115764);
  iVar8 = __aeabi_dcmplt((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                         (int)((ulonglong)uVar13 >> 0x20));
  iVar2 = DAT_00115788;
  if (iVar8 != 0) {
    piVar7[0x10] = 1;
    iVar2 = *(int *)(iVar6 + iVar2);
    piVar9 = *(int **)(iVar6 + DAT_0011578c);
    piVar11 = *(int **)(iVar6 + DAT_00115790);
    if ((*(int **)(p_Var1 + 4))[1] == piVar7[0xb]) {
      uVar10 = __mulsf3(*(undefined4 *)(iVar2 + ((*piVar9 + -1) * 10 + *piVar11 + -1) * 0x40 + 0x30)
                        ,0x3f000000);
LAB_00115688:
      iVar8 = __fixsfsi(uVar10);
      piVar7[0x11] = iVar8;
    }
    else if (**(int **)(p_Var1 + 4) == 3) {
      uVar10 = *(undefined4 *)(iVar2 + ((*piVar9 + -1) * 10 + *piVar11 + -1) * 0x40 + 0x30);
      goto LAB_00115688;
    }
    piVar7[0x12] = *(int *)(iVar2 + ((*piVar9 + -1) * 10 + *piVar11 + -1) * 0x40 + 0x2c);
    Game_Scene_Vibration();
    if (**ppiVar5 != 3) {
      GameScene::OpenPopup_Img(**(GameScene ***)(iVar6 + DAT_0011577c),0);
    }
  }
  piVar7 = *ppiVar5;
  piVar9 = piVar7 + 0x14;
  if (*(char *)piVar9 == '\0') {
    iVar2 = *(int *)(p_Var1 + 4);
    uVar12 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x24));
    uVar13 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x28));
    uVar14 = __floatsidf(piVar7[0x15]);
    uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_00115768,DAT_0011576c);
    uVar13 = __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                      (int)((ulonglong)uVar14 >> 0x20));
    iVar2 = __aeabi_dcmplt((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar13,
                           (int)((ulonglong)uVar13 >> 0x20));
    if (iVar2 != 0) {
      *(char *)piVar9 = '\x01';
    }
  }
LAB_00115714:
  Draw_Castle_Att_Effect(param_1);
  if (**(int **)(iVar6 + DAT_00115794) <= **(int **)(iVar6 + DAT_00115798)) {
    cVar4 = *(char *)(**(int **)(iVar6 + DAT_0011579c) + 1);
    if (*(int *)(*(int *)(p_Var1 + 4) + 4) == 0x96) {
      if (cVar4 == '\0') {
        return;
      }
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar4 = (char)DAT_001157a0 + 'J';
    }
    else {
      if (cVar4 == '\0') {
        return;
      }
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar4 = (char)DAT_001157a4 + 'X';
    }
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)cVar4);
  }
  return;
}


