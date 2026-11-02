/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00122438  Symbol: UI_Button */

/* GameScene::UI_Button() */

void GameScene::UI_Button(void)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  CCNode *pCVar6;
  undefined *puVar7;
  undefined uVar8;
  code *pcVar9;
  undefined4 *puVar10;
  CCNode **ppCVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  undefined local_20 [4];
  undefined auStack_1c [8];
  
  cVar1 = (char)DAT_001226a0;
  iVar13 = 6;
  iVar15 = DAT_001226a4 + 0x12244a;
  do {
    piVar14 = *(int **)(iVar15 + DAT_001226a8);
    puVar10 = (undefined4 *)*piVar14;
    if (*(char *)((int)puVar10 + iVar13 + 0x32) == '\0') {
      uVar2 = __floatsisf(*(undefined4 *)(iVar13 * 4 + *(int *)(iVar15 + DAT_001226ac) + -0x18));
      iVar3 = __aeabi_fcmpge(*puVar10,uVar2);
      ppCVar11 = *(CCNode ***)(iVar15 + DAT_001226b0);
      if (iVar3 != 0) {
        pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
        iVar3 = cocos2d::CCNode::getChildByTag(pCVar6,0);
        if (iVar3 == 0) {
          piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
          (**(code **)(*piVar5 + 0xf4))();
          pcVar12 = (char *)(iVar13 + *(int *)(iVar15 + DAT_001226b4) + -6);
          if (*pcVar12 != '\0') {
            if (*(char *)(**(int **)(iVar15 + DAT_001226b8) + 1) != '\0') {
              pcVar4 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
              CocosDenshion::SimpleAudioEngine::playEffect(pcVar4,(bool)(cVar1 + 'D'));
            }
            *pcVar12 = '\0';
          }
          goto LAB_0012252a;
        }
      }
      pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
      iVar3 = cocos2d::CCNode::getChildByTag(pCVar6,0);
      if (iVar3 == 0) {
        if (*(char *)(**(int **)(iVar15 + DAT_001226b8) + **(int **)(iVar15 + DAT_001226bc) * 9 +
                      iVar13 + -6 + DAT_001226c0) == '\0') goto LAB_0012252a;
        piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
        puVar7 = auStack_1c;
        uVar8 = 0x3e;
        pcVar9 = *(code **)(*piVar5 + 0xf4);
      }
      else {
        piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
        puVar7 = local_20;
        uVar8 = 0x7f;
        pcVar9 = *(code **)(*piVar5 + 0xf4);
      }
      *puVar7 = uVar8;
      puVar7[1] = uVar8;
      puVar7[2] = uVar8;
      (*pcVar9)();
    }
LAB_0012252a:
    iVar13 = iVar13 + 1;
    if (iVar13 == 0xf) {
      iVar13 = 2;
      ppCVar11 = *(CCNode ***)(iVar15 + DAT_001226b0);
      do {
        while( true ) {
          while( true ) {
            while( true ) {
              pCVar6 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar11,iVar13);
              iVar3 = cocos2d::CCNode::getChildByTag(pCVar6,1);
              if (iVar3 == 0) {
                *(undefined *)(iVar13 + *(int *)(iVar15 + DAT_001226c4) + -2) = 0;
              }
              iVar3 = (*(char *)(**(int **)(iVar15 + DAT_001226b8) +
                                 **(int **)(iVar15 + DAT_001226bc) + DAT_001226cc + 4) + -1) * 0xb;
              if (iVar13 != 2) break;
              Get_Mana((int)*(char *)(*(int *)(iVar15 + DAT_001226c8) + iVar3));
              uVar2 = __floatsisf();
              iVar13 = __aeabi_fcmple(uVar2,*(undefined4 *)(*piVar14 + 8));
              if (iVar13 == 0) {
                piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,2);
                uVar2 = 0x7f;
                pcVar9 = *(code **)(*piVar5 + 0xec);
              }
              else {
                piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,2);
                uVar2 = 0xff;
                pcVar9 = *(code **)(*piVar5 + 0xec);
              }
              (*pcVar9)(piVar5,uVar2);
              iVar13 = 3;
            }
            iVar3 = *(int *)(iVar15 + DAT_001226c8) + iVar3;
            if (iVar13 != 3) break;
            Get_Mana((int)*(char *)(iVar3 + 1));
            uVar2 = __floatsisf();
            iVar13 = __aeabi_fcmple(uVar2,*(undefined4 *)(*piVar14 + 8));
            if (iVar13 == 0) {
              piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,3);
              uVar2 = 0x7f;
              pcVar9 = *(code **)(*piVar5 + 0xec);
            }
            else {
              piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,3);
              uVar2 = 0xff;
              pcVar9 = *(code **)(*piVar5 + 0xec);
            }
            (*pcVar9)(piVar5,uVar2);
            iVar13 = 4;
          }
          if (iVar13 != 4) break;
          Get_Mana((int)*(char *)(iVar3 + 2));
          uVar2 = __floatsisf();
          iVar13 = __aeabi_fcmple(uVar2,*(undefined4 *)(*piVar14 + 8));
          if (iVar13 == 0) {
            piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,4);
            uVar2 = 0x7f;
            pcVar9 = *(code **)(*piVar5 + 0xec);
          }
          else {
            piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,4);
            uVar2 = 0xff;
            pcVar9 = *(code **)(*piVar5 + 0xec);
          }
          (*pcVar9)(piVar5,uVar2);
          iVar13 = 5;
        }
        Get_Mana((int)*(char *)(iVar3 + 3));
        uVar2 = __floatsisf();
        iVar3 = __aeabi_fcmple(uVar2,*(undefined4 *)(*piVar14 + 8));
        if (iVar3 == 0) {
          piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,5);
          uVar2 = 0x7f;
          pcVar9 = *(code **)(*piVar5 + 0xec);
        }
        else {
          piVar5 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar11,5);
          uVar2 = 0xff;
          pcVar9 = *(code **)(*piVar5 + 0xec);
        }
        iVar13 = iVar13 + 1;
        (*pcVar9)(piVar5,uVar2);
      } while (iVar13 != 6);
      return;
    }
  } while( true );
}


