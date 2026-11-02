/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f3ef0  Symbol: Hero_Rapael_Touch */

/* Hero_Rapael_Touch(cocos2d::CCPoint, void*) */

undefined4 Hero_Rapael_Touch(CCPoint param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCLayer *pCVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  New_UI *this;
  char cVar10;
  int *piVar11;
  undefined4 uVar12;
  Effect *in_r2;
  int iVar13;
  int *piVar14;
  char *pcVar15;
  int **ppiVar16;
  CCNode **ppCVar17;
  code *pcVar18;
  int *piVar19;
  int iVar20;
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
  undefined8 uVar21;
  int local_50;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar20 = DAT_000f4278 + 0xf3efe;
  ppiVar16 = *(int ***)(iVar20 + DAT_000f427c);
  iVar1 = (**(code **)(**ppiVar16 + 0xa8))();
  local_50 = 2;
  ppCVar17 = *(CCNode ***)(iVar20 + DAT_000f4280);
  do {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar17,local_50);
    (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
    local_50 = local_50 + 1;
  } while (local_50 != 6);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,2);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0,extraout_s1);
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar20 + DAT_000f4288);
    uVar12 = *(undefined4 *)(*piVar2 + 8);
    iVar13 = *(int *)(iVar20 + DAT_000f4290);
    piVar14 = *(int **)(iVar20 + DAT_000f4294);
    piVar11 = *(int **)(iVar20 + DAT_000f4298);
    Get_Mana((int)*(char *)((*(char *)(*piVar14 + *piVar11 + DAT_000f428c + 4) + -1) * 0xb + iVar13)
            );
    uVar8 = __floatsisf();
    uVar8 = __subsf3(uVar12,uVar8);
    iVar4 = __aeabi_fcmpgt(uVar8,0);
    if (iVar4 == 0) {
      GameScene::OpenPopup(**(int **)(iVar20 + DAT_000f42ac),0);
      return 0;
    }
    iVar4 = *(int *)(iVar1 + 4);
    iVar7 = *(int *)(iVar4 + 100);
    if (iVar7 < 2) {
      if (iVar7 - 4U < 2) {
        return 0;
      }
      cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_00,extraout_s1_00);
      *(undefined4 *)(iVar4 + 0x110) = local_28;
      *(undefined4 *)(iVar4 + 0x114) = local_24;
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
      ani_attack_ani(pCVar5);
      pCVar5 = **(CCLayer ***)(iVar20 + DAT_000f42a0);
      puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
      iVar20 = __fixsfsi(*puVar6);
      iVar4 = (**(code **)(**ppiVar16 + 0x38))();
      iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
      iVar7 = (**(code **)(**ppiVar16 + 0x14))();
      Effect::Hero_Effect(in_r2,pCVar5,2,iVar20,iVar4,iVar7,0,false);
      iVar20 = *piVar2;
      uVar12 = *(undefined4 *)(iVar20 + 8);
      Get_Mana((int)*(char *)((*(char *)(*piVar14 + *piVar11 + DAT_000f428c + 4) + -1) * 0xb +
                             iVar13));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar12,uVar8);
      *(undefined4 *)(iVar20 + 8) = uVar8;
      *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
      if (*(char *)(*piVar14 + 1) == '\0') goto LAB_000f4168;
      pcVar15 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar10 = (char)DAT_000f42a4 + -0x7e;
    }
    else {
      if (iVar7 != 3) {
        if (2 < iVar7 - 4U) {
          *(undefined *)(iVar4 + 0x79) = 1;
          return 0;
        }
        return 0;
      }
      uVar21 = __extendsfdf2(*(undefined4 *)(iVar4 + 0x3c));
      iVar7 = __aeabi_dcmpgt((int)uVar21,(int)((ulonglong)uVar21 >> 0x20),DAT_000f4270,DAT_000f4274)
      ;
      if (iVar7 == 0) {
        return 0;
      }
      cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_01,extraout_s1_01);
      *(undefined4 *)(iVar4 + 0x110) = local_20;
      *(undefined4 *)(iVar4 + 0x114) = local_1c;
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
      ani_attack_ani(pCVar5);
      pCVar5 = **(CCLayer ***)(iVar20 + DAT_000f42a0);
      puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
      iVar20 = __fixsfsi(*puVar6);
      iVar4 = (**(code **)(**ppiVar16 + 0x38))();
      iVar4 = __fixsfsi(*(undefined4 *)(iVar4 + 4));
      iVar7 = (**(code **)(**ppiVar16 + 0x14))();
      Effect::Hero_Effect(in_r2,pCVar5,2,iVar20,iVar4,iVar7,0,false);
      iVar20 = *piVar2;
      uVar12 = *(undefined4 *)(iVar20 + 8);
      Get_Mana((int)*(char *)((*(char *)(*piVar14 + *piVar11 + DAT_000f428c + 4) + -1) * 0xb +
                             iVar13));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar12,uVar8);
      *(undefined4 *)(iVar20 + 8) = uVar8;
      *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
      *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
      if (*(char *)(*piVar14 + 1) == '\0') goto LAB_000f4168;
      pcVar15 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar10 = (char)DAT_000f42a8 + 'f';
    }
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar15,(bool)cVar10);
LAB_000f4168:
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    return 1;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,3);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_02,extraout_s1_02);
  if (iVar4 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,4);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_03,extraout_s1_03);
    if (iVar4 != 0) {
      piVar2 = *(int **)(iVar20 + DAT_000f4610);
      piVar14 = *(int **)(iVar20 + DAT_000f4618);
      iVar4 = *piVar14;
      if ((*(char *)(*piVar2 + iVar4 * 0x6c + DAT_000f4614) != '\0') &&
         (*(char *)(*(int *)(iVar20 + DAT_000f461c) + 2) == '\0')) {
        if (1 < *(int *)(*(int *)(iVar1 + 4) + 100)) {
          return 0;
        }
        piVar11 = *(int **)(iVar20 + DAT_000f4620);
        uVar12 = *(undefined4 *)(*piVar11 + 8);
        iVar13 = *(int *)(iVar20 + DAT_000f4624);
        Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + iVar4 + DAT_000f4604 + 4) + -1) * 0xb
                               + 2));
        uVar8 = __floatsisf();
        uVar8 = __subsf3(uVar12,uVar8);
        iVar4 = __aeabi_fcmpgt(uVar8,0);
        if (iVar4 != 0) {
          pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar16,1);
          ani_attack_3_ani(pCVar5);
          pCVar5 = **(CCLayer ***)(iVar20 + DAT_000f4628);
          puVar6 = (undefined4 *)(**(code **)(**ppiVar16 + 0x38))();
          __subsf3(*puVar6,DAT_000f462c);
          iVar20 = __fixsfsi();
          iVar4 = (**(code **)(**ppiVar16 + 0x38))();
          __subsf3(*(undefined4 *)(iVar4 + 4),0x41000000);
          iVar4 = __fixsfsi();
          iVar7 = (**(code **)(**ppiVar16 + 0x14))();
          Effect::Hero_Effect(in_r2,pCVar5,2,iVar20,iVar4,iVar7,4,false);
          iVar20 = *piVar11;
          uVar12 = *(undefined4 *)(iVar20 + 8);
          Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + *piVar14 + DAT_000f4604 + 4) + -1) *
                                           0xb + 2));
          uVar8 = __floatsisf();
          uVar8 = __subsf3(uVar12,uVar8);
          *(undefined4 *)(iVar20 + 8) = uVar8;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x124) = 1;
          if (*(char *)(*piVar2 + 1) != '\0') {
            pcVar15 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
            CocosDenshion::SimpleAudioEngine::playEffect(pcVar15,(bool)((char)DAT_000f4630 + 'z'));
          }
          iVar1 = 4;
          this = (New_UI *)*ppCVar17;
          goto LAB_000f45d2;
        }
        goto LAB_000f4484;
      }
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar17,5);
    iVar1 = Sprite_Touch3(pCVar3,param_1,extraout_s0_04,extraout_s1_04);
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = *(int **)(iVar20 + DAT_000f4610);
    piVar14 = *(int **)(iVar20 + DAT_000f4618);
    iVar1 = *piVar14;
    if (*(char *)(*piVar2 + iVar1 * 0x6c + DAT_000f4634) == '\0') {
      return 0;
    }
    if (*(char *)(*(int *)(iVar20 + DAT_000f461c) + 3) != '\0') {
      return 0;
    }
    piVar11 = *(int **)(iVar20 + DAT_000f4620);
    uVar12 = *(undefined4 *)(*piVar11 + 8);
    iVar4 = *(int *)(iVar20 + DAT_000f4624);
    Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar2 + iVar1 + DAT_000f4604 + 4) + -1) * 0xb + 3))
    ;
    uVar8 = __floatsisf();
    uVar8 = __subsf3(uVar12,uVar8);
    iVar1 = __aeabi_fcmpge(uVar8,0);
    if (iVar1 != 0) {
      pcVar15 = *(char **)(iVar20 + DAT_000f4638);
      if (*pcVar15 != '\0') {
        return 0;
      }
      piVar9 = (int *)operator_new(0x11c);
      Hero2::Hero2((Hero2 *)piVar9);
      (**(code **)(*piVar9 + 300))(piVar9);
      pcVar18 = *(code **)(*piVar9 + 0x3c);
      uVar8 = (**(code **)(**ppiVar16 + 0x38))();
      (*pcVar18)(piVar9,uVar8);
      piVar19 = **(int ***)(iVar20 + DAT_000f4628);
      pcVar18 = *(code **)(*piVar19 + 0xcc);
      uVar8 = (**(code **)(**ppiVar16 + 0x14))();
      (*pcVar18)(piVar19,piVar9,uVar8,DAT_000f463c);
      cocos2d::CCObject::release((CCObject *)piVar9);
      piVar9 = *ppiVar16;
      *pcVar15 = '\x01';
      (**(code **)(*piVar9 + 0x6c))(piVar9,0);
      iVar1 = *piVar11;
      uVar12 = *(undefined4 *)(iVar1 + 8);
      Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar2 + *piVar14 + DAT_000f4604 + 4) + -1) * 0xb
                             + 3));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar12,uVar8);
      *(undefined4 *)(iVar1 + 8) = uVar8;
      if (*(char *)(*piVar2 + 1) != '\0') {
        pcVar15 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar15,(bool)((char)DAT_000f4640 + -0x36));
      }
      iVar1 = 5;
      this = (New_UI *)*ppCVar17;
LAB_000f45d2:
      New_UI::Skill_Loading(this,iVar1);
      return 1;
    }
  }
  else {
    if (*(int *)(*(int *)(iVar1 + 4) + 4) == 5) {
      return 0;
    }
    if (1 < *(int *)(*(int *)(iVar1 + 4) + 100) - 2U) {
      iVar4 = 3;
      iVar1 = **(int **)(iVar20 + DAT_000f4608);
      goto LAB_000f448c;
    }
    piVar11 = *(int **)(iVar20 + DAT_000f4288);
    uVar12 = *(undefined4 *)(*piVar11 + 8);
    iVar13 = *(int *)(iVar20 + DAT_000f4290);
    piVar2 = *(int **)(iVar20 + DAT_000f4294);
    piVar14 = *(int **)(iVar20 + DAT_000f4298);
    Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + *piVar14 + DAT_000f428c + 4) + -1) * 0xb +
                           1));
    uVar8 = __floatsisf();
    uVar8 = __subsf3(uVar12,uVar8);
    iVar4 = __aeabi_fcmpgt(uVar8,0);
    if (iVar4 != 0) {
      iVar20 = *(int *)(iVar1 + 4);
      if (*(int *)(iVar20 + 100) == 2) {
        if (*(char *)(iVar20 + 0x34) == '\0') {
          *(char *)(iVar20 + 0x34) = '\x01';
          iVar1 = *piVar11;
          uVar12 = *(undefined4 *)(iVar1 + 8);
          Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + *piVar14 + DAT_000f428c + 4) + -1) *
                                           0xb + 1));
          uVar8 = __floatsisf();
          uVar8 = __subsf3(uVar12,uVar8);
          *(undefined4 *)(iVar1 + 8) = uVar8;
          return 1;
        }
        return 0;
      }
      if (*(int *)(iVar20 + 100) == 3) {
        if (*(char *)(iVar20 + 0x34) == '\0') {
          iVar4 = *piVar11;
          *(char *)(iVar20 + 0x34) = '\x01';
          uVar12 = *(undefined4 *)(iVar4 + 8);
          Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + *piVar14 + DAT_000f4604 + 4) + -1) *
                                           0xb + 1));
          uVar8 = __floatsisf();
          uVar8 = __subsf3(uVar12,uVar8);
          *(undefined4 *)(iVar4 + 8) = uVar8;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
          *(undefined *)(*(int *)(iVar1 + 4) + 0x77) = 0;
          return 1;
        }
        return 0;
      }
      return 0;
    }
  }
LAB_000f4484:
  iVar4 = 0;
  iVar1 = **(int **)(iVar20 + DAT_000f4608);
LAB_000f448c:
  GameScene::OpenPopup(iVar1,iVar4);
  return 0;
}


