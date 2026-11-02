/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00123574  Symbol: Hero_Lethal_check */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00123690) */
/* WARNING: Removing unreachable block (ram,0x00123690) */
/* GameScene::Hero_Lethal_check() */

void GameScene::Hero_Lethal_check(void)

{
  CCArray *pCVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *pvVar6;
  CCNode *pCVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  int **ppiVar12;
  int **ppiVar13;
  code *pcVar14;
  uint local_2c;
  
  iVar10 = DAT_00123854 + 0x123580;
  pcVar11 = *(char **)(iVar10 + DAT_00123858);
  if (*pcVar11 == '\0') {
    pcVar11 = *(char **)(iVar10 + DAT_00123870);
    if (*pcVar11 != '\0') {
      ppiVar13 = *(int ***)(iVar10 + DAT_0012385c);
      pCVar1 = (CCArray *)(**(code **)(**ppiVar13 + 0x58))();
      for (local_2c = 0; uVar9 = cocos2d::CCArray::count(pCVar1), local_2c < uVar9;
          local_2c = local_2c + 1) {
        piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar1,local_2c);
        iVar3 = (**(code **)(*piVar2 + 0xa0))();
        if (iVar3 == DAT_00123860) {
          piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
          piVar4 = (int *)(**(code **)(*piVar4 + 0xa8))();
          ppiVar12 = *(int ***)(iVar10 + DAT_00123874);
          piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
          pvVar6 = (void *)(**(code **)(*piVar5 + 0xa8))();
          if (*(int *)(piVar4[1] + 100) == 3) {
            pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
            cocos2d::CCNode::getChildByTag(pCVar7,*(int *)(*(int *)(*piVar4 + 4) + 0x290));
            iVar3 = cocos2d::CCNode::numberOfRunningActions();
            if (iVar3 == 0) {
              KG_removeChild((CCNode *)piVar2,true);
              pCVar7 = (CCNode *)
                       cocos2d::CCNode::getChildByTag
                                 (**(CCNode ***)(iVar10 + DAT_00123868),DAT_0012386c);
              KG_removeChild(pCVar7,true);
              if (*(int *)(*(int *)((int)pvVar6 + 4) + 4) == 4) {
                pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,3);
                KG_removeChild(pCVar7,true);
                piVar2 = *ppiVar13;
                pcVar14 = *(code **)(*piVar2 + 0xd0);
                uVar8 = cocos2d::CCNode::getChildByTag((CCNode *)piVar2,3);
                (*pcVar14)(piVar2,uVar8,1);
              }
              piVar2 = *ppiVar13;
              pcVar14 = *(code **)(*piVar2 + 0xd0);
              uVar8 = cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
              (*pcVar14)(piVar2,uVar8,1);
              *pcVar11 = '\0';
              piVar2 = *ppiVar12;
              (**(code **)(*piVar2 + 0x6c))(piVar2,1);
            }
            else {
              iVar3 = *(int *)(*(int *)((int)pvVar6 + 4) + 4);
              if (iVar3 == 3) {
                Hero_Lethal_Kris(pvVar6);
              }
              else if (iVar3 < 4) {
                if (iVar3 == 1) {
                  Hero_Lethal_Kai(pvVar6);
                }
                else if (iVar3 == 2) {
                  Hero_Lethal_Rapael(pvVar6);
                }
              }
              else if (iVar3 == 5) {
                Hero_Lethal_Mir(pvVar6);
              }
              else if (iVar3 < 5) {
                Hero_Lethal_Reina(pvVar6);
              }
              else if (iVar3 == DAT_00123878) {
                Hero_Lethal_Tao(pvVar6);
              }
            }
          }
        }
      }
    }
  }
  else {
    ppiVar13 = *(int ***)(iVar10 + DAT_0012385c);
    pCVar1 = (CCArray *)(**(code **)(**ppiVar13 + 0x58))();
    for (local_2c = 0; uVar9 = cocos2d::CCArray::count(pCVar1), local_2c < uVar9;
        local_2c = local_2c + 1) {
      piVar2 = (int *)cocos2d::CCArray::objectAtIndex(pCVar1,local_2c);
      iVar3 = (**(code **)(*piVar2 + 0xa0))();
      if (iVar3 == DAT_00123860) {
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
        piVar4 = (int *)(**(code **)(*piVar4 + 0xa8))();
        ppiVar12 = *(int ***)(iVar10 + DAT_00123864);
        piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar12,1);
        pvVar6 = (void *)(**(code **)(*piVar5 + 0xa8))();
        if (*(int *)(piVar4[1] + 100) == 3) {
          pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
          cocos2d::CCNode::getChildByTag(pCVar7,*(int *)(*(int *)(*piVar4 + 4) + 0x290));
          iVar3 = cocos2d::CCNode::numberOfRunningActions();
          if (iVar3 == 0) {
            KG_removeChild((CCNode *)piVar2,true);
            pCVar7 = (CCNode *)
                     cocos2d::CCNode::getChildByTag
                               (**(CCNode ***)(iVar10 + DAT_00123868),DAT_0012386c);
            KG_removeChild(pCVar7,true);
            if (*(int *)(*(int *)((int)pvVar6 + 4) + 4) == 4) {
              pCVar7 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar13,3);
              KG_removeChild(pCVar7,true);
              piVar2 = *ppiVar13;
              pcVar14 = *(code **)(*piVar2 + 0xd0);
              uVar8 = cocos2d::CCNode::getChildByTag((CCNode *)piVar2,3);
              (*pcVar14)(piVar2,uVar8,1);
            }
            piVar2 = *ppiVar13;
            pcVar14 = *(code **)(*piVar2 + 0xd0);
            uVar8 = cocos2d::CCNode::getChildByTag((CCNode *)piVar2,2);
            (*pcVar14)(piVar2,uVar8,1);
            *pcVar11 = '\0';
            piVar2 = *ppiVar12;
            (**(code **)(*piVar2 + 0x6c))(piVar2,1);
          }
          else {
            switch(*(undefined4 *)(*(int *)((int)pvVar6 + 4) + 4)) {
            case 1:
              Hero_Lethal_Kai(pvVar6);
              break;
            case 2:
              Hero_Lethal_Rapael(pvVar6);
              break;
            case 3:
              Hero_Lethal_Kris(pvVar6);
              break;
            case 4:
              Hero_Lethal_Reina(pvVar6);
              break;
            case 5:
              Hero_Lethal_Mir(pvVar6);
              break;
            case 8:
              Hero_Lethal_Tao(pvVar6);
            }
          }
        }
      }
    }
  }
  return;
}


