/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f6e78  Symbol: Hero_Mir_Touch */

/* Hero_Mir_Touch(cocos2d::CCPoint, void*) */

undefined4 Hero_Mir_Touch(CCPoint param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  int iVar5;
  CCLayer *pCVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  New_UI *this;
  int *piVar10;
  undefined4 uVar11;
  Effect *in_r2;
  int *piVar12;
  int iVar13;
  char *pcVar14;
  int **ppiVar15;
  int iVar16;
  int *piVar17;
  CCNode **ppCVar18;
  code *pcVar19;
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
  
  iVar16 = DAT_000f71a4 + 0xf6e86;
  ppiVar15 = *(int ***)(iVar16 + DAT_000f71a8);
  iVar1 = (**(code **)(**ppiVar15 + 0xa8))();
  local_58 = 2;
  ppCVar18 = *(CCNode ***)(iVar16 + DAT_000f71ac);
  do {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar18,local_58);
    (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
    local_58 = local_58 + 1;
  } while (local_58 != 6);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,2);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0,extraout_s1);
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar16 + DAT_000f71b4);
    uVar11 = *(undefined4 *)(*piVar2 + 8);
    iVar13 = *(int *)(iVar16 + DAT_000f71bc);
    piVar12 = *(int **)(iVar16 + DAT_000f71c0);
    piVar10 = *(int **)(iVar16 + DAT_000f71c4);
    Get_Mana((int)*(char *)((*(char *)(*piVar12 + *piVar10 + DAT_000f71b8 + 4) + -1) * 0xb + iVar13)
            );
    uVar8 = __floatsisf();
    uVar8 = __subsf3(uVar11,uVar8);
    iVar4 = __aeabi_fcmpgt(uVar8,0);
    if (iVar4 == 0) {
      return 0;
    }
    iVar4 = *(int *)(iVar1 + 4);
    if (1 < *(int *)(iVar4 + 100)) {
      return 0;
    }
    if (*(int *)(iVar4 + 100) - 4U < 2) {
      return 0;
    }
    cocos2d::CCSize::CCSize((CCSize *)&local_30,extraout_s0_00,extraout_s1_00);
    *(undefined4 *)(iVar4 + 0x110) = local_30;
    *(undefined4 *)(iVar4 + 0x114) = local_2c;
    pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    ani_attack_ani(pCVar6);
    pCVar6 = **(CCLayer ***)(iVar16 + DAT_000f71cc);
    puVar7 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
    __subsf3(*puVar7,DAT_000f71d0);
    iVar16 = __fixsfsi();
    iVar4 = (**(code **)(**ppiVar15 + 0x38))();
    __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000f71d4);
    iVar4 = __fixsfsi();
    iVar5 = (**(code **)(**ppiVar15 + 0x14))();
    Effect::Hero_Effect(in_r2,pCVar6,5,iVar16,iVar4,iVar5,0,false);
    iVar16 = *piVar2;
    uVar11 = *(undefined4 *)(iVar16 + 8);
    Get_Mana((int)*(char *)((*(char *)(*piVar12 + *piVar10 + DAT_000f71b8 + 4) + -1) * 0xb + iVar13)
            );
    uVar8 = __floatsisf();
    uVar8 = __subsf3(uVar11,uVar8);
    *(undefined4 *)(iVar16 + 8) = uVar8;
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
    if (*(char *)(*piVar12 + 1) == '\0') {
      return 1;
    }
    pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)((char)DAT_000f71d8 + '\x1a'));
    return 1;
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,3);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_01,extraout_s1_01);
  if (iVar4 != 0) {
    piVar12 = *(int **)(iVar16 + DAT_000f71c0);
    piVar2 = *(int **)(iVar16 + DAT_000f71c4);
    iVar4 = *piVar2;
    if ((*(char *)(*piVar12 + iVar4 * 0x6c + DAT_000f71dc) != '\0') &&
       (*(char *)(*(int *)(iVar16 + DAT_000f71e0) + 1) == '\0')) {
      piVar10 = *(int **)(iVar16 + DAT_000f71b4);
      uVar11 = *(undefined4 *)(*piVar10 + 8);
      iVar13 = *(int *)(iVar16 + DAT_000f71bc);
      Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar12 + iVar4 + DAT_000f71b8 + 4) + -1) * 0xb +
                             1));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar11,uVar8);
      iVar4 = __aeabi_fcmpgt(uVar8,0);
      if (iVar4 == 0) {
        return 0;
      }
      iVar4 = *(int *)(*(int *)(iVar1 + 4) + 100);
      if (1 < iVar4) {
        return 0;
      }
      if (iVar4 - 4U < 2) {
        return 0;
      }
      pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_attack_2_ani(pCVar6);
      iVar4 = *piVar10;
      uVar11 = *(undefined4 *)(iVar4 + 8);
      Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar12 + *piVar2 + DAT_000f71b8 + 4) + -1) * 0xb
                             + 1));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar11,uVar8);
      *(undefined4 *)(iVar4 + 8) = uVar8;
      iVar4 = *(int *)(iVar1 + 4);
      cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_02,extraout_s1_02);
      *(undefined4 *)(iVar4 + 0x110) = local_28;
      *(undefined4 *)(iVar4 + 0x114) = local_24;
      pCVar6 = **(CCLayer ***)(iVar16 + DAT_000f71cc);
      puVar7 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
      iVar16 = __fixsfsi(*puVar7);
      iVar4 = (**(code **)(**ppiVar15 + 0x38))();
      __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000f71e8);
      iVar4 = __fixsfsi();
      iVar13 = (**(code **)(**ppiVar15 + 0x14))();
      Effect::Hero_Effect(in_r2,pCVar6,5,iVar16,iVar4,iVar13,1,false);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
      if (*(char *)(*piVar12 + 1) != '\0') {
        pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)((char)DAT_000f71ec + -0x68));
      }
      this = (New_UI *)*ppCVar18;
      iVar1 = 3;
      goto LAB_000f7492;
    }
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,4);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_04,extraout_s1_04);
  if (iVar4 != 0) {
    piVar2 = *(int **)(iVar16 + DAT_000f74e4);
    piVar12 = *(int **)(iVar16 + DAT_000f74ec);
    iVar4 = *piVar12;
    if ((*(char *)(*piVar2 + iVar4 * 0x6c + DAT_000f74e8) != '\0') &&
       (*(char *)(*(int *)(iVar16 + DAT_000f74f0) + 2) == '\0')) {
      if (1 < *(int *)(*(int *)(iVar1 + 4) + 100)) {
        return 0;
      }
      piVar10 = *(int **)(iVar16 + DAT_000f74f4);
      uVar11 = *(undefined4 *)(*piVar10 + 8);
      iVar13 = *(int *)(iVar16 + DAT_000f74fc);
      Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + iVar4 + DAT_000f74f8 + 4) + -1) * 0xb +
                             2));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar11,uVar8);
      iVar4 = __aeabi_fcmpgt(uVar8,0);
      if (iVar4 == 0) {
        return 0;
      }
      pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_attack_1_2_ani(pCVar6);
      iVar4 = *piVar10;
      uVar11 = *(undefined4 *)(iVar4 + 8);
      Get_Mana((int)*(char *)(iVar13 + (*(char *)(*piVar2 + *piVar12 + DAT_000f74f8 + 4) + -1) * 0xb
                             + 2));
      uVar8 = __floatsisf();
      uVar8 = __subsf3(uVar11,uVar8);
      *(undefined4 *)(iVar4 + 8) = uVar8;
      iVar4 = *(int *)(iVar1 + 4);
      cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_03,extraout_s1_03);
      *(undefined4 *)(iVar4 + 0x110) = local_20;
      *(undefined4 *)(iVar4 + 0x114) = local_1c;
      pCVar6 = **(CCLayer ***)(iVar16 + DAT_000f7504);
      puVar7 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
      __addsf3(*puVar7,DAT_000f7508);
      iVar16 = __fixsfsi();
      iVar4 = (**(code **)(**ppiVar15 + 0x38))();
      __subsf3(*(undefined4 *)(iVar4 + 4),DAT_000f750c);
      iVar4 = __fixsfsi();
      iVar13 = (**(code **)(**ppiVar15 + 0x14))();
      Effect::Hero_Effect(in_r2,pCVar6,5,iVar16,iVar4,iVar13,2,false);
      *(undefined4 *)(*(int *)(iVar1 + 4) + 0x3c) = 0;
      if (*(char *)(*piVar2 + 1) != '\0') {
        pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)((char)DAT_000f7510 + 'J'));
      }
      this = (New_UI *)*ppCVar18;
      iVar1 = 4;
      goto LAB_000f7492;
    }
  }
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar18,5);
  iVar1 = Sprite_Touch3(pCVar3,param_1,extraout_s0_05,extraout_s1_05);
  if (iVar1 == 0) {
    return 0;
  }
  piVar2 = *(int **)(iVar16 + DAT_000f74e4);
  piVar12 = *(int **)(iVar16 + DAT_000f74ec);
  iVar1 = *piVar12;
  if (*(char *)(*piVar2 + iVar1 * 0x6c + DAT_000f7514) == '\0') {
    return 0;
  }
  if (*(char *)(*(int *)(iVar16 + DAT_000f74f0) + 3) != '\0') {
    return 0;
  }
  piVar10 = *(int **)(iVar16 + DAT_000f74f4);
  uVar11 = *(undefined4 *)(*piVar10 + 8);
  iVar4 = *(int *)(iVar16 + DAT_000f74fc);
  Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar2 + iVar1 + DAT_000f74f8 + 4) + -1) * 0xb + 3));
  uVar8 = __floatsisf();
  uVar8 = __subsf3(uVar11,uVar8);
  iVar1 = __aeabi_fcmpge(uVar8,0);
  if (iVar1 == 0) {
    return 0;
  }
  pcVar14 = *(char **)(iVar16 + DAT_000f7518);
  if (*pcVar14 != '\0') {
    return 0;
  }
  piVar9 = (int *)operator_new(0x11c);
  Hero7::Hero7((Hero7 *)piVar9);
  (**(code **)(*piVar9 + 300))(piVar9);
  pcVar19 = *(code **)(*piVar9 + 0x3c);
  uVar8 = (**(code **)(**ppiVar15 + 0x38))();
  (*pcVar19)(piVar9,uVar8);
  piVar17 = **(int ***)(iVar16 + DAT_000f7504);
  pcVar19 = *(code **)(*piVar17 + 0xcc);
  uVar8 = (**(code **)(**ppiVar15 + 0x14))();
  (*pcVar19)(piVar17,piVar9,uVar8,DAT_000f751c);
  cocos2d::CCObject::release((CCObject *)piVar9);
  piVar9 = *ppiVar15;
  *pcVar14 = '\x01';
  (**(code **)(*piVar9 + 0x6c))(piVar9,0);
  iVar1 = *piVar10;
  uVar11 = *(undefined4 *)(iVar1 + 8);
  Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar2 + *piVar12 + DAT_000f74f8 + 4) + -1) * 0xb + 3)
          );
  uVar8 = __floatsisf();
  uVar8 = __subsf3(uVar11,uVar8);
  *(undefined4 *)(iVar1 + 8) = uVar8;
  if (*(char *)(*piVar2 + 1) != '\0') {
    pcVar14 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar14,(bool)((char)DAT_000f7520 + -0x76));
  }
  iVar1 = 5;
  this = (New_UI *)*ppCVar18;
LAB_000f7492:
  New_UI::Skill_Loading(this,iVar1);
  return 1;
}


