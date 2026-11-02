/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f2c58  Symbol: Hero_Kai_Touch */

/* Hero_Kai_Touch(cocos2d::CCPoint, void*) */

void Hero_Kai_Touch(CCPoint param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCLayer *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  New_UI *this;
  undefined4 uVar9;
  undefined4 uVar10;
  N_Draw_Number *this_00;
  char cVar11;
  int iVar12;
  Effect *in_r2;
  int *piVar13;
  char *pcVar14;
  code *pcVar15;
  int **ppiVar16;
  int *piVar17;
  int iVar18;
  int *piVar19;
  int *piVar20;
  CCNode **ppCVar21;
  undefined4 uVar22;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  undefined8 uVar23;
  int local_6c;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  char acStack_2c [16];
  int local_1c;
  
  iVar18 = DAT_000f2ef8 + 0xf2c66;
  piVar20 = *(int **)(iVar18 + DAT_000f2efc);
  local_1c = *piVar20;
  ppiVar16 = *(int ***)(iVar18 + DAT_000f2f00);
  iVar1 = (**(code **)(**ppiVar16 + 0xa8))();
  local_6c = 2;
  ppCVar21 = *(CCNode ***)(iVar18 + DAT_000f2f04);
  do {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar21,local_6c);
    (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
    local_6c = local_6c + 1;
  } while (local_6c != 6);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar21,2);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0,extraout_s1);
  piVar2 = *(int **)(iVar18 + DAT_000f2f0c);
  if (iVar4 == 0) {
LAB_000f2f3e:
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar21,3);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_02,extraout_s1_02);
    if ((iVar4 != 0) && (*(int *)(*(int *)(iVar1 + 4) + 4) != 5)) {
      if (*(int *)(*(int *)(iVar1 + 4) + 100) - 2U < 2) {
        uVar10 = *(undefined4 *)(*piVar2 + 8);
        iVar12 = *(int *)(iVar18 + DAT_000f3228);
        piVar17 = *(int **)(iVar18 + DAT_000f322c);
        piVar13 = *(int **)(iVar18 + DAT_000f3230);
        Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar17 + *piVar13 + DAT_000f3224 + 4) + -1) *
                                         0xb + 1));
        uVar9 = __floatsisf();
        uVar9 = __subsf3(uVar10,uVar9);
        iVar4 = __aeabi_fcmpge(uVar9,0);
        if (iVar4 != 0) {
          iVar4 = *(int *)(iVar1 + 4);
          if (*(int *)(iVar4 + 100) == 2) {
            if (*(char *)(iVar4 + 0x34) == '\0') {
              uVar10 = 1;
              *(char *)(iVar4 + 0x34) = '\x01';
              iVar18 = *piVar2;
              uVar22 = *(undefined4 *)(iVar18 + 8);
              Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar17 + *piVar13 + DAT_000f3224 + 4) +
                                               -1) * 0xb + 1));
              uVar9 = __floatsisf();
              uVar9 = __subsf3(uVar22,uVar9);
              *(undefined4 *)(iVar18 + 8) = uVar9;
              *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
              *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
              *(undefined *)(*(int *)(iVar1 + 4) + 0x77) = 0;
              *(undefined *)(*(int *)(iVar1 + 4) + 0x78) = 0;
              goto LAB_000f342e;
            }
          }
          else if ((*(int *)(iVar4 + 100) == 3) && (*(char *)(iVar4 + 0x34) == '\0')) {
            uVar10 = 1;
            *(char *)(iVar4 + 0x34) = '\x01';
            iVar18 = *piVar2;
            uVar22 = *(undefined4 *)(iVar18 + 8);
            Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar17 + *piVar13 + DAT_000f3224 + 4) + -1
                                             ) * 0xb + 1));
            uVar9 = __floatsisf();
            uVar9 = __subsf3(uVar22,uVar9);
            *(undefined4 *)(iVar18 + 8) = uVar9;
            *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
            *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
            *(undefined *)(*(int *)(iVar1 + 4) + 0x77) = 0;
            *(undefined *)(*(int *)(iVar1 + 4) + 0x78) = 0;
            goto LAB_000f342e;
          }
          goto LAB_000f30b4;
        }
        iVar12 = 0;
        iVar4 = **(int **)(iVar18 + DAT_000f321c);
      }
      else {
        iVar12 = 3;
        iVar4 = **(int **)(iVar18 + DAT_000f321c);
      }
      GameScene::OpenPopup(iVar4,iVar12);
    }
LAB_000f30b4:
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar21,4);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_03,extraout_s1_03);
    if (iVar4 == 0) {
LAB_000f3256:
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar21,5);
      iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_04,extraout_s1_04);
      if (iVar4 != 0) {
        piVar17 = *(int **)(iVar18 + DAT_000f344c);
        piVar13 = *(int **)(iVar18 + DAT_000f3454);
        iVar4 = *piVar13;
        if ((*(char *)(*piVar17 + iVar4 * 0x6c + DAT_000f3450) != '\0') &&
           (*(char *)(*(int *)(iVar18 + DAT_000f3458) + 3) == '\0')) {
          uVar10 = *(undefined4 *)(*piVar2 + 8);
          iVar12 = *(int *)(iVar18 + DAT_000f345c);
          Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar17 + iVar4 + DAT_000f3460 + 4) + -1) *
                                           0xb + 3));
          uVar9 = __floatsisf();
          uVar9 = __subsf3(uVar10,uVar9);
          iVar4 = __aeabi_fcmpge(uVar9,0);
          if (iVar4 == 0) {
            GameScene::OpenPopup(**(int **)(iVar18 + DAT_000f3444),0);
          }
          else {
            pcVar14 = *(char **)(iVar18 + DAT_000f3464);
            if (*pcVar14 == '\0') {
              piVar8 = (int *)operator_new(0x11c);
              Hero1::Hero1((Hero1 *)piVar8);
              (**(code **)(*piVar8 + 0x130))(piVar8);
              pcVar15 = *(code **)(*piVar8 + 0x3c);
              uVar9 = (**(code **)(**ppiVar16 + 0x38))();
              (*pcVar15)(piVar8,uVar9);
              piVar19 = **(int ***)(iVar18 + DAT_000f3468);
              pcVar15 = *(code **)(*piVar19 + 0xcc);
              uVar9 = (**(code **)(**ppiVar16 + 0x14))();
              (*pcVar15)(piVar19,piVar8,uVar9,DAT_000f346c);
              cocos2d::CCObject::release((CCObject *)piVar8);
              piVar8 = *ppiVar16;
              *pcVar14 = '\x01';
              (**(code **)(*piVar8 + 0x6c))(piVar8,0);
              iVar18 = *piVar2;
              uVar10 = *(undefined4 *)(iVar18 + 8);
              Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar17 + *piVar13 + DAT_000f3460 + 4) +
                                               -1) * 0xb + 3));
              uVar9 = __floatsisf();
              uVar9 = __subsf3(uVar10,uVar9);
              *(undefined4 *)(iVar18 + 8) = uVar9;
              *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
              if (*(char *)(*piVar17 + 1) != '\0') {
                pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
                CocosDenshion::SimpleAudioEngine::playEffect
                          (pcVar14,(bool)((char)DAT_000f3470 + -0x4c));
              }
              iVar1 = 5;
              this = (New_UI *)*ppCVar21;
              goto LAB_000f33bc;
            }
          }
        }
      }
      piVar17 = *(int **)(iVar18 + DAT_000f3444);
      iVar18 = *piVar2;
      iVar1 = *(int *)(*(int *)(*piVar17 + 0x120) + 0x11c);
      uVar9 = __divsf3(*(undefined4 *)(iVar18 + 8),*(undefined4 *)(iVar18 + 0xc));
      *(undefined4 *)(iVar1 + 0x118) = uVar9;
      uVar9 = __fixsfsi(*(undefined4 *)(iVar18 + 8));
      uVar10 = __fixsfsi(*(undefined4 *)(iVar18 + 0xc));
      sprintf(acStack_2c,(char *)(DAT_000f3474 + 0xf3406),uVar9,uVar10);
      uVar10 = 0;
      this_00 = (N_Draw_Number *)cocos2d::CCNode::getChildByTag(*(CCNode **)(*piVar17 + 0x120),0x29)
      ;
      iVar1 = __fixsfsi(*(undefined4 *)(*piVar2 + 8));
      N_Draw_Number::SetNumber_Re(this_00,iVar1,2);
      goto LAB_000f342e;
    }
    piVar13 = *(int **)(iVar18 + DAT_000f322c);
    piVar17 = *(int **)(iVar18 + DAT_000f3230);
    iVar4 = *piVar17;
    if (((*(char *)(*piVar13 + iVar4 * 0x6c + DAT_000f3234) == '\0') ||
        (*(char *)(*(int *)(iVar18 + DAT_000f3238) + 2) != '\0')) ||
       (1 < *(int *)(*(int *)(iVar1 + 4) + 100))) goto LAB_000f3256;
    uVar10 = *(undefined4 *)(*piVar2 + 8);
    iVar12 = *(int *)(iVar18 + DAT_000f3228);
    Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar13 + iVar4 + DAT_000f3224 + 4) + -1) * 0xb + 2
                           ));
    uVar9 = __floatsisf();
    uVar9 = __subsf3(uVar10,uVar9);
    iVar4 = __aeabi_fcmpge(uVar9,0);
    if (iVar4 == 0) {
      GameScene::OpenPopup(**(int **)(iVar18 + DAT_000f3444),0);
      goto LAB_000f3256;
    }
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
    ani_attack_3_ani(pCVar5);
    pCVar5 = **(CCLayer ***)(iVar18 + DAT_000f323c);
    puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    __addsf3(*puVar6,DAT_000f3240);
    iVar18 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar16 + 0x38))();
    iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
    iVar7 = (**(code **)(**ppiVar16 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar5,1,iVar18,iVar4,iVar7,4,false);
    iVar18 = *piVar2;
    uVar10 = *(undefined4 *)(iVar18 + 8);
    Get_Mana((int)*(char *)(iVar12 + (*(char *)(*piVar13 + *piVar17 + DAT_000f3224 + 4) + -1) * 0xb
                           + 2));
    uVar9 = __floatsisf();
    uVar9 = __subsf3(uVar10,uVar9);
    *(undefined4 *)(iVar18 + 8) = uVar9;
    *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
    Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar16);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    if (*(char *)(*piVar13 + 1) != '\0') {
      pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)((char)DAT_000f3244 + '\x10'));
    }
    iVar1 = 4;
    this = (New_UI *)*ppCVar21;
LAB_000f33bc:
    New_UI::Skill_Loading(this,iVar1);
  }
  else {
    uVar10 = *(undefined4 *)(*piVar2 + 8);
    iVar12 = *(int *)(iVar18 + DAT_000f2f10);
    piVar17 = *(int **)(iVar18 + DAT_000f2f14);
    piVar13 = *(int **)(iVar18 + DAT_000f2f18);
    Get_Mana((int)*(char *)((*(char *)(*piVar17 + *piVar13 + DAT_000f2f1c + 4) + -1) * 0xb + iVar12)
            );
    uVar9 = __floatsisf();
    uVar9 = __subsf3(uVar10,uVar9);
    iVar4 = __aeabi_fcmpge(uVar9,0);
    if (iVar4 == 0) {
      GameScene::OpenPopup(**(int **)(iVar18 + DAT_000f321c),0);
      goto LAB_000f2f3e;
    }
    iVar4 = *(int *)(iVar1 + 4);
    iVar7 = *(int *)(iVar4 + 100);
    if (1 < iVar7) {
      if (iVar7 == 3) {
        uVar23 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x3c));
        iVar7 = __aeabi_dcmpgt((int)uVar23,(int)((ulonglong)uVar23 >> 0x20),DAT_000f2ef0,
                               DAT_000f2ef4);
        if (iVar7 != 0) {
          cocos2d::CCSize::CCSize((CCSize *)&local_34,extraout_s0_01,extraout_s1_01);
          *(undefined4 *)(iVar4 + 0x110) = local_34;
          *(undefined4 *)(iVar4 + 0x114) = local_30;
          pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
          ani_attack_ani(pCVar5);
          pCVar5 = **(CCLayer ***)(iVar18 + DAT_000f2f24);
          puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
          iVar18 = __fixsfsi(*puVar6);
          iVar4 = (**(code **)(**ppiVar16 + 0x38))();
          iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
          iVar7 = (**(code **)(**ppiVar16 + 0x14))();
          Effect::Hero_Effect(in_r2,pCVar5,1,iVar18,iVar4,iVar7,0,false);
          iVar18 = *piVar2;
          uVar10 = *(undefined4 *)(iVar18 + 8);
          Get_Mana((int)*(char *)((*(char *)(*piVar17 + *piVar13 + DAT_000f2f1c + 4) + -1) * 0xb +
                                 iVar12));
          uVar9 = __floatsisf();
          uVar9 = __subsf3(uVar10,uVar9);
          *(undefined4 *)(iVar18 + 8) = uVar9;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
          if (*(char *)(*piVar17 + 1) != '\0') {
            pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            cVar11 = (char)DAT_000f2f2c + -0x30;
            goto LAB_000f2ece;
          }
          goto LAB_000f2ed4;
        }
      }
      else if (2 < iVar7 - 4U) {
        *(undefined *)(iVar4 + 0x79) = 1;
      }
      goto LAB_000f2f3e;
    }
    if (iVar7 - 4U < 2) goto LAB_000f2f3e;
    cocos2d::CCSize::CCSize((CCSize *)&local_3c,extraout_s0_00,extraout_s1_00);
    *(undefined4 *)(iVar4 + 0x110) = local_3c;
    *(undefined4 *)(iVar4 + 0x114) = local_38;
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
    ani_attack_ani(pCVar5);
    pCVar5 = **(CCLayer ***)(iVar18 + DAT_000f2f24);
    puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
    iVar18 = __fixsfsi(*puVar6);
    iVar4 = (**(code **)(**ppiVar16 + 0x38))();
    iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
    iVar7 = (**(code **)(**ppiVar16 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar5,1,iVar18,iVar4,iVar7,0,false);
    iVar18 = *piVar2;
    uVar10 = *(undefined4 *)(iVar18 + 8);
    Get_Mana((int)*(char *)((*(char *)(*piVar17 + *piVar13 + DAT_000f2f1c + 4) + -1) * 0xb + iVar12)
            );
    uVar9 = __floatsisf();
    uVar9 = __subsf3(uVar10,uVar9);
    *(undefined4 *)(iVar18 + 8) = uVar9;
    *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
    if (*(char *)(*piVar17 + 1) != '\0') {
      pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar11 = (char)DAT_000f2f28 + -0x12;
LAB_000f2ece:
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)cVar11);
    }
LAB_000f2ed4:
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
  }
  uVar10 = 1;
LAB_000f342e:
  if (local_1c == *piVar20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar10);
}


