/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f5098  Symbol: Hero_Reina_Touch */

/* Hero_Reina_Touch(cocos2d::CCPoint, void*) */

undefined4 Hero_Reina_Touch(CCPoint param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  CCLayer *pCVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  New_UI *this;
  Effect *in_r2;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  int *piVar12;
  char *pcVar13;
  code *pcVar14;
  int **ppiVar15;
  int iVar16;
  int *piVar17;
  CCNode **ppCVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  int local_58;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar16 = DAT_000f53b4 + 0xf50a8;
  ppiVar15 = *(int ***)(iVar16 + DAT_000f53b8);
  iVar1 = (**(code **)(**ppiVar15 + 0xa8))();
  local_58 = 2;
  ppCVar18 = *(CCNode ***)(iVar16 + DAT_000f53bc);
  do {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar18,local_58);
    (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
    local_58 = local_58 + 1;
  } while (local_58 != 6);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,2);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0,extraout_s1);
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar16 + DAT_000f53c4);
    uVar10 = *(undefined4 *)(*piVar2 + 8);
    iVar9 = *(int *)(iVar16 + DAT_000f53cc);
    piVar12 = *(int **)(iVar16 + DAT_000f53d0);
    piVar11 = *(int **)(iVar16 + DAT_000f53d4);
    Get_Mana((int)*(char *)((*(char *)(*piVar12 + *piVar11 + DAT_000f53c8 + 4) + -1) * 0xb + iVar9))
    ;
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar10,uVar7);
    iVar4 = __aeabi_fcmpgt(uVar7,0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (1 < *(int *)(iVar1 + 100)) {
      return 0;
    }
    if (*(int *)(iVar1 + 100) - 4U < 2) {
      return 0;
    }
    cocos2d::CCSize::CCSize((CCSize *)&local_30,extraout_s0_00,extraout_s1_00);
    *(undefined4 *)(iVar1 + 0x110) = local_30;
    *(undefined4 *)(iVar1 + 0x114) = local_2c;
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    ani_attack_ani(pCVar5);
    iVar1 = *piVar2;
    uVar10 = *(undefined4 *)(iVar1 + 8);
    Get_Mana((int)*(char *)((*(char *)(*piVar12 + *piVar11 + DAT_000f53c8 + 4) + -1) * 0xb + iVar9))
    ;
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar10,uVar7);
    *(undefined4 *)(iVar1 + 8) = uVar7;
    pCVar5 = **(CCLayer ***)(iVar16 + DAT_000f53dc);
    puVar6 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
    __addsf3(*puVar6,DAT_000f53e0);
    iVar1 = __fixsfsi();
    iVar16 = (**(code **)(**ppiVar15 + 0x38))();
    __subsf3(*(undefined4 *)(iVar16 + 4),0x41000000);
    iVar16 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar15 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar5,4,iVar1,iVar16,iVar4,0,false);
    if (*(char *)(*piVar12 + 1) == '\0') {
      return 1;
    }
    pcVar13 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar13,(bool)((char)DAT_000f53e4 + '8'));
    return 1;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,3);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_01,extraout_s1_01);
  if ((iVar4 == 0) || (*(char *)(*(int *)(iVar16 + DAT_000f53e8) + 1) != '\0')) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,4);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_04,extraout_s1_04);
    if ((iVar4 == 0) || (*(char *)(*(int *)(iVar16 + DAT_000f56c8) + 2) != '\0')) {
      pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,5);
      iVar1 = Sprite_Touch3(pCVar3,param_1,extraout_s0_05,extraout_s1_05);
      if (iVar1 == 0) {
        return 0;
      }
      if (*(char *)(*(int *)(iVar16 + DAT_000f56c8) + 3) != '\0') {
        return 0;
      }
      piVar2 = *(int **)(iVar16 + DAT_000f56cc);
      uVar10 = *(undefined4 *)(*piVar2 + 8);
      iVar4 = *(int *)(iVar16 + DAT_000f56d0);
      piVar11 = *(int **)(iVar16 + DAT_000f56d4);
      piVar12 = *(int **)(iVar16 + DAT_000f56d8);
      Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar11 + *piVar12 + DAT_000f56dc + 4) + -1) * 0xb
                             + 3));
      uVar7 = __floatsisf();
      uVar7 = __subsf3(uVar10,uVar7);
      iVar1 = __aeabi_fcmpge(uVar7,0);
      if (iVar1 == 0) {
        return 0;
      }
      pcVar13 = *(char **)(iVar16 + DAT_000f56f0);
      if (*pcVar13 != '\0') {
        return 0;
      }
      piVar8 = (int *)operator_new(0x11c);
      Hero3::Hero3((Hero3 *)piVar8);
      (**(code **)(*piVar8 + 300))(piVar8);
      pcVar14 = *(code **)(*piVar8 + 0x3c);
      uVar7 = (**(code **)(**ppiVar15 + 0x38))();
      (*pcVar14)(piVar8,uVar7);
      piVar17 = **(int ***)(iVar16 + DAT_000f56e4);
      pcVar14 = *(code **)(*piVar17 + 0xcc);
      uVar7 = (**(code **)(**ppiVar15 + 0x14))();
      (*pcVar14)(piVar17,piVar8,uVar7,DAT_000f56f4);
      cocos2d::CCObject::release((CCObject *)piVar8);
      piVar8 = *ppiVar15;
      *pcVar13 = '\x01';
      (**(code **)(*piVar8 + 0x6c))(piVar8,0);
      iVar1 = *piVar2;
      uVar10 = *(undefined4 *)(iVar1 + 8);
      Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar11 + *piVar12 + DAT_000f56dc + 4) + -1) * 0xb
                             + 3));
      uVar7 = __floatsisf();
      uVar7 = __subsf3(uVar10,uVar7);
      *(undefined4 *)(iVar1 + 8) = uVar7;
      if (*(char *)(*piVar11 + 1) != '\0') {
        pcVar13 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar13,(bool)((char)DAT_000f56f8 + 'r'));
      }
      this = (New_UI *)*ppCVar18;
      iVar1 = 5;
    }
    else {
      if (1 < *(int *)(*(int *)(iVar1 + 4) + 100)) {
        return 0;
      }
      piVar2 = *(int **)(iVar16 + DAT_000f56cc);
      uVar10 = *(undefined4 *)(*piVar2 + 8);
      iVar9 = *(int *)(iVar16 + DAT_000f56d0);
      piVar11 = *(int **)(iVar16 + DAT_000f56d4);
      piVar12 = *(int **)(iVar16 + DAT_000f56d8);
      Get_Mana((int)*(char *)(iVar9 + (*(char *)(*piVar11 + *piVar12 + DAT_000f56dc + 4) + -1) * 0xb
                             + 2));
      uVar7 = __floatsisf();
      uVar7 = __subsf3(uVar10,uVar7);
      iVar4 = __aeabi_fcmpgt(uVar7,0);
      if (iVar4 == 0) {
        return 0;
      }
      iVar1 = *(int *)(iVar1 + 4);
      cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_03,extraout_s1_03);
      *(undefined4 *)(iVar1 + 0x110) = local_20;
      *(undefined4 *)(iVar1 + 0x114) = local_1c;
      pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_attack_1_2_ani(pCVar5);
      pCVar5 = **(CCLayer ***)(iVar16 + DAT_000f56e4);
      puVar6 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
      __addsf3(*puVar6,DAT_000f56e8);
      iVar1 = __fixsfsi();
      iVar16 = (**(code **)(**ppiVar15 + 0x38))();
      __addsf3(*(undefined4 *)(iVar16 + 4),DAT_000f56e8);
      iVar16 = __fixsfsi();
      iVar4 = (**(code **)(**ppiVar15 + 0x14))();
      Effect::Hero_Effect(in_r2,pCVar5,4,iVar1,iVar16,iVar4,2,false);
      iVar1 = *piVar2;
      uVar10 = *(undefined4 *)(iVar1 + 8);
      Get_Mana((int)*(char *)(iVar9 + (*(char *)(*piVar11 + *piVar12 + DAT_000f56dc + 4) + -1) * 0xb
                             + 2));
      uVar7 = __floatsisf();
      uVar7 = __subsf3(uVar10,uVar7);
      *(undefined4 *)(iVar1 + 8) = uVar7;
      if (*(char *)(*piVar11 + 1) != '\0') {
        pcVar13 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar13,(bool)((char)DAT_000f56ec + '>'));
      }
      this = (New_UI *)*ppCVar18;
      iVar1 = 4;
    }
  }
  else {
    piVar2 = *(int **)(iVar16 + DAT_000f53c4);
    uVar10 = *(undefined4 *)(*piVar2 + 8);
    iVar9 = *(int *)(iVar16 + DAT_000f53cc);
    piVar11 = *(int **)(iVar16 + DAT_000f53d0);
    piVar12 = *(int **)(iVar16 + DAT_000f53d4);
    Get_Mana((int)*(char *)(iVar9 + (*(char *)(*piVar11 + *piVar12 + DAT_000f53c8 + 4) + -1) * 0xb +
                           1));
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar10,uVar7);
    iVar4 = __aeabi_fcmpgt(uVar7,0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 4);
    if (1 < *(int *)(iVar1 + 100)) {
      return 0;
    }
    if (*(int *)(iVar1 + 100) - 4U < 2) {
      return 0;
    }
    cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_02,extraout_s1_02);
    *(undefined4 *)(iVar1 + 0x110) = local_28;
    *(undefined4 *)(iVar1 + 0x114) = local_24;
    pCVar5 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    ani_attack_2_ani(pCVar5);
    iVar4 = *piVar2;
    uVar10 = *(undefined4 *)(iVar4 + 8);
    Get_Mana((int)*(char *)(iVar9 + (*(char *)(*piVar11 + *piVar12 + DAT_000f53c8 + 4) + -1) * 0xb +
                           1));
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar10,uVar7);
    iVar1 = DAT_000f53dc;
    *(undefined4 *)(iVar4 + 8) = uVar7;
    pCVar5 = **(CCLayer ***)(iVar16 + iVar1);
    puVar6 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
    __addsf3(*puVar6,DAT_000f53f0);
    iVar1 = __fixsfsi();
    iVar16 = (**(code **)(**ppiVar15 + 0x38))();
    __subsf3(*(undefined4 *)(iVar16 + 4),0x42000000);
    iVar16 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar15 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar5,4,iVar1,iVar16,iVar4,1,false);
    if (*(char *)(*piVar11 + 1) != '\0') {
      pcVar13 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar13,(bool)((char)DAT_000f53f4 + -0x56));
    }
    this = (New_UI *)*ppCVar18;
    iVar1 = 3;
  }
  New_UI::Skill_Loading(this,iVar1);
  return 1;
}


