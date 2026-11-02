/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010f4ec  Symbol: ccTouchesEnded */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0010f6d4) */
/* WARNING: Removing unreachable block (ram,0x0010f6d4) */
/* New_UI::ccTouchesEnded(cocos2d::CCSet*, cocos2d::CCEvent*) */

void New_UI::ccTouchesEnded(CCSet *param_1,CCEvent *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  CCNode *pCVar5;
  int iVar6;
  char *pcVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  CCNode **ppCVar15;
  int iVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined8 uVar19;
  CCPoint local_20;
  void *local_1c;
  
  iVar16 = DAT_0010f838 + 0x10f4f8;
  piVar10 = *(int **)(iVar16 + DAT_0010f83c);
  if (*piVar10 == 0xb) {
    iVar2 = cocos2d::CCSet::anyObject((CCSet *)param_2);
    uVar11 = *(undefined4 *)(iVar2 + 0x18);
    uVar12 = *(undefined4 *)(iVar2 + 0x1c);
    puVar13 = *(undefined4 **)(iVar16 + DAT_0010f844);
    uVar3 = __divsf3(*puVar13,DAT_0010f840);
    __divsf3(uVar11,uVar3);
    uVar3 = __divsf3(puVar13[1],DAT_0010f848);
    uVar19 = __divsf3(uVar12,uVar3);
    cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20))
    ;
    iVar2 = 6;
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2c);
    (**(code **)(*piVar4 + 0x6c))(piVar4,0);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x2d);
    (**(code **)(*piVar4 + 0x6c))(piVar4,0);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x11);
    (**(code **)(*piVar4 + 0x6c))(piVar4,0);
    puVar17 = *(undefined4 **)(iVar16 + DAT_0010f84c);
    cVar1 = (char)DAT_0010f850;
    puVar13 = puVar17;
    do {
      pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
      iVar6 = Sprite_Touch2(pCVar5,local_20);
      if (iVar6 != 0) {
        piVar4 = *(int **)(iVar16 + DAT_0010f854);
        puVar9 = *(undefined4 **)(iVar16 + DAT_0010f860);
        if (*(char *)(*piVar4 + **(int **)(iVar16 + DAT_0010f858) * 9 + iVar2 + DAT_0010f85c) !=
            '\0') {
          puVar14 = (undefined4 *)*puVar9;
          uVar3 = __floatsisf(*puVar13);
          iVar6 = __aeabi_fcmpge(*puVar14,uVar3);
          if (iVar6 != 0) {
            pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
            iVar6 = cocos2d::CCNode::getChildByTag(pCVar5,1);
            if ((iVar6 == 0) && (*(char *)(iVar2 + *(int *)(iVar16 + DAT_0010f864) + -6) == '\0')) {
              ppCVar15 = *(CCNode ***)(iVar16 + DAT_0010f868);
              Unit_Draw_Test(*ppCVar15,*(int *)(iVar2 * 4 + *(int *)(iVar16 + DAT_0010f87c) + -0x18)
                            );
              puVar14 = (undefined4 *)*puVar9;
              uVar3 = __floatsisf(*puVar13);
              uVar3 = __subsf3(*puVar14,uVar3);
              *puVar14 = uVar3;
              iVar6 = *(int *)(param_1 + 0x118);
              uVar3 = __divsf3(*(undefined4 *)*puVar9,((undefined4 *)*puVar9)[1]);
              *(undefined4 *)(iVar6 + 0x118) = uVar3;
              GameScene::Unit_Loading((GameScene *)*ppCVar15,iVar2);
              if (*(char *)(*piVar4 + 1) != '\0') {
                pcVar7 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                CocosDenshion::SimpleAudioEngine::playEffect(pcVar7,(bool)(cVar1 + -0x7a));
              }
              goto LAB_0010f652;
            }
          }
        }
        uVar11 = *(undefined4 *)*puVar9;
        uVar3 = __floatsisf(*puVar13);
        iVar6 = __aeabi_fcmplt(uVar11,uVar3);
        if ((iVar6 != 0) && (*(char *)(*(int *)(iVar16 + DAT_0010f864) + iVar2 + -6) != '\0')) {
          iVar6 = **(int **)(iVar16 + DAT_0010f868);
          __subsf3(uVar3,uVar11);
          __fixsfsi();
          GameScene::OpenPopup(iVar6,1);
        }
      }
LAB_0010f652:
      iVar2 = iVar2 + 1;
      puVar13 = puVar13 + 1;
    } while (iVar2 != 0xf);
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,1);
    iVar2 = Sprite_Touch2(pCVar5,local_20);
    piVar4 = *(int **)(iVar16 + DAT_0010f860);
    if (iVar2 != 0) {
      iVar2 = (**(code **)(***(int ***)(iVar16 + DAT_0010f86c) + 0xa8))();
      iVar2 = *(int *)(iVar2 + 4);
      if (((((*(char *)(iVar2 + 0x93) == '\0') && (*(char *)(iVar2 + 0x85) == '\0')) &&
           (*(char *)(iVar2 + 0x9c) == '\0')) &&
          ((*(char *)(iVar2 + 0x90) == '\0' && (**(char **)(iVar16 + DAT_0010f870) == '\0')))) &&
         (iVar6 = __aeabi_fcmpgt(*(undefined4 *)(iVar2 + 0x24),0), iVar6 != 0)) {
        switch(*(undefined4 *)(iVar2 + 4)) {
        case 1:
          Hero_Kai_Touch(local_20,local_1c);
          break;
        case 2:
          Hero_Rapael_Touch(local_20,local_1c);
          break;
        case 3:
          Hero_Kris_Touch(local_20,local_1c);
          break;
        case 4:
          Hero_Reina_Touch(local_20,local_1c);
          break;
        case 5:
          Hero_Mir_Touch(local_20,local_1c);
          break;
        case 6:
          Hero_Agasa_Touch(local_20,local_1c);
          break;
        case 7:
          Hero_Sia_Touch(local_20,local_1c);
          break;
        case 8:
          Hero_Tao_Touch(local_20,local_1c);
        }
        iVar2 = *(int *)(param_1 + 0x11c);
        uVar3 = __divsf3(*(undefined4 *)(*piVar4 + 8),*(undefined4 *)(*piVar4 + 0xc));
        *(undefined4 *)(iVar2 + 0x118) = uVar3;
      }
    }
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,0x10);
    iVar2 = Sprite_Touch2(pCVar5,local_20);
    if ((iVar2 != 0) && (*piVar10 == 0xb)) {
      Option();
    }
    iVar2 = 6;
    piVar18 = *(int **)(iVar16 + DAT_0010f854);
    piVar10 = *(int **)(iVar16 + DAT_0010f858);
    do {
      iVar16 = iVar2 + -6;
      if (*(char *)(*piVar18 + *piVar10 * 9 + iVar16 + DAT_0010f878) != '\0') {
        puVar13 = (undefined4 *)*piVar4;
        uVar3 = __floatsisf(puVar17[iVar2 + -6]);
        iVar6 = __aeabi_fcmpge(*puVar13,uVar3);
        if (iVar6 != 0) {
          piVar8 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar2);
          (**(code **)(*piVar8 + 0xf4))();
        }
      }
      iVar2 = iVar2 + 1;
      *(undefined *)(*piVar4 + iVar16 + 0x38) = 0;
    } while (iVar2 != 0xf);
  }
  return;
}


