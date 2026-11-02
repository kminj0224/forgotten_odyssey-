/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f5c28  Symbol: Hero_Tao_Touch */

/* Hero_Tao_Touch(cocos2d::CCPoint, void*) */

undefined4 Hero_Tao_Touch(CCPoint param_1,void *param_2)

{
  int iVar1;
  int *piVar2;
  CCNode *pCVar3;
  int iVar4;
  int iVar5;
  CCLayer *pCVar6;
  undefined4 uVar7;
  int *piVar8;
  char cVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  code *pcVar13;
  int iVar14;
  int *piVar15;
  CCNode **ppCVar16;
  int *piVar17;
  undefined4 uVar18;
  int **ppiVar19;
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
  undefined8 uVar20;
  int local_4c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar14 = DAT_000f5f98 + 0xf5c36;
  ppiVar19 = *(int ***)(iVar14 + DAT_000f5f9c);
  iVar1 = (**(code **)(**ppiVar19 + 0xa8))();
  local_4c = 2;
  ppCVar16 = *(CCNode ***)(iVar14 + DAT_000f5fa0);
  do {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar16,local_4c);
    (**(code **)(*piVar2 + 0xec))(piVar2,0xff);
    local_4c = local_4c + 1;
  } while (local_4c != 6);
  pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar16,2);
  iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0,extraout_s1);
  if (iVar4 == 0) {
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar16,3);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_02,extraout_s1_02);
    if (iVar4 != 0) {
      piVar17 = *(int **)(iVar14 + DAT_000f5fb4);
      piVar2 = *(int **)(iVar14 + DAT_000f5fac);
      if (*(char *)(*piVar17 + *piVar2 * 0x6c + DAT_000f5fcc) != '\0') {
        if (*(int *)(*(int *)(iVar1 + 4) + 4) == 5) {
          return 0;
        }
        piVar10 = *(int **)(iVar14 + DAT_000f5fa8);
        uVar18 = *(undefined4 *)(*piVar10 + 8);
        iVar4 = *(int *)(iVar14 + DAT_000f5fb0);
        Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar17 + *piVar2 + DAT_000f5fb8 + 4) + -1) *
                                        0xb + 1));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        iVar14 = __aeabi_fcmpgt(uVar7,0);
        if (iVar14 == 0) {
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 4);
        if (*(int *)(iVar1 + 100) != 2) {
          if (*(int *)(iVar1 + 100) != 3) {
            return 0;
          }
          uVar20 = __extendsfdf2(*(undefined4 *)(iVar1 + 0x3c));
          iVar14 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000f6288,
                                  DAT_000f628c);
          if (iVar14 != 0) {
            if (*(char *)(iVar1 + 0x34) == '\0') {
              *(char *)(iVar1 + 0x34) = '\x01';
              iVar1 = *piVar10;
              uVar18 = *(undefined4 *)(iVar1 + 8);
              Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar17 + *piVar2 + DAT_000f6290 + 4) + -1
                                              ) * 0xb + 1));
              uVar7 = __floatsisf();
              uVar7 = __subsf3(uVar18,uVar7);
              *(undefined4 *)(iVar1 + 8) = uVar7;
              return 1;
            }
            return 0;
          }
          return 0;
        }
        uVar20 = __extendsfdf2(*(undefined4 *)(iVar1 + 0x3c));
        iVar5 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000f5f90,
                               DAT_000f5f94);
        iVar14 = DAT_000f5fb8;
        if (iVar5 == 0) {
          return 0;
        }
        if (*(char *)(iVar1 + 0x34) == '\0') {
          iVar5 = *piVar17;
          iVar11 = *piVar2;
          *(char *)(iVar1 + 0x34) = '\x01';
          iVar1 = *piVar10;
          uVar18 = *(undefined4 *)(iVar1 + 8);
          Get_Mana((int)*(char *)(iVar4 + (*(char *)(iVar5 + iVar11 + iVar14 + 4) + -1) * 0xb + 1));
          uVar7 = __floatsisf();
          uVar7 = __subsf3(uVar18,uVar7);
          *(undefined4 *)(iVar1 + 8) = uVar7;
          return 1;
        }
        return 0;
      }
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar16,4);
    iVar4 = Sprite_Touch3(pCVar3,param_1,extraout_s0_03,extraout_s1_03);
    if (iVar4 != 0) {
      piVar2 = *(int **)(iVar14 + DAT_000f6294);
      piVar17 = *(int **)(iVar14 + DAT_000f6298);
      iVar4 = *piVar2;
      if (*(char *)(*piVar17 + iVar4 * 0x6c + DAT_000f629c) != '\0') {
        if (1 < *(int *)(*(int *)(iVar1 + 4) + 100)) {
          return 0;
        }
        piVar10 = *(int **)(iVar14 + DAT_000f62a0);
        uVar18 = *(undefined4 *)(*piVar10 + 8);
        iVar14 = *(int *)(iVar14 + DAT_000f62a4);
        Get_Mana((int)*(char *)(iVar14 + (*(char *)(*piVar17 + iVar4 + DAT_000f6290 + 4) + -1) * 0xb
                               + 2));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        iVar1 = __aeabi_fcmpgt(uVar7,0);
        if (iVar1 == 0) {
          return 0;
        }
        pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar19,1);
        ani_attack_3_ani(pCVar6);
        iVar4 = *piVar10;
        uVar18 = *(undefined4 *)(iVar4 + 8);
        Get_Mana((int)*(char *)(iVar14 + (*(char *)(*piVar17 + *piVar2 + DAT_000f6290 + 4) + -1) *
                                         0xb + 2));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        iVar1 = *piVar17;
        *(undefined4 *)(iVar4 + 8) = uVar7;
        if (*(char *)(iVar1 + 1) == '\0') {
          return 1;
        }
        pcVar12 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_000f62a8 + '\x06';
        goto LAB_000f5e02;
      }
    }
    pCVar3 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar16,5);
    iVar1 = Sprite_Touch3(pCVar3,param_1,extraout_s0_04,extraout_s1_04);
    if (iVar1 == 0) {
      return 0;
    }
    piVar17 = *(int **)(iVar14 + DAT_000f6298);
    piVar2 = *(int **)(iVar14 + DAT_000f6294);
    iVar1 = *piVar2;
    if (*(char *)(*piVar17 + iVar1 * 0x6c + DAT_000f62ac) == '\0') {
      return 0;
    }
    piVar10 = *(int **)(iVar14 + DAT_000f62a0);
    uVar18 = *(undefined4 *)(*piVar10 + 8);
    iVar4 = *(int *)(iVar14 + DAT_000f62a4);
    Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar17 + iVar1 + DAT_000f6290 + 4) + -1) * 0xb + 3)
            );
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar18,uVar7);
    iVar1 = __aeabi_fcmpge(uVar7,0);
    if (iVar1 != 0) {
      pcVar12 = *(char **)(iVar14 + DAT_000f62b0);
      if (*pcVar12 != '\0') {
        return 0;
      }
      piVar8 = (int *)operator_new(0x11c);
      Hero5::Hero5((Hero5 *)piVar8);
      (**(code **)(*piVar8 + 300))(piVar8);
      pcVar13 = *(code **)(*piVar8 + 0x3c);
      uVar7 = (**(code **)(**ppiVar19 + 0x38))();
      (*pcVar13)(piVar8,uVar7);
      piVar15 = **(int ***)(iVar14 + DAT_000f62b4);
      pcVar13 = *(code **)(*piVar15 + 0xcc);
      uVar7 = (**(code **)(**ppiVar19 + 0x14))();
      (*pcVar13)(piVar15,piVar8,uVar7,DAT_000f62b8);
      cocos2d::CCObject::release((CCObject *)piVar8);
      piVar8 = *ppiVar19;
      *pcVar12 = '\x01';
      (**(code **)(*piVar8 + 0x6c))(piVar8,0);
      iVar14 = *piVar10;
      uVar18 = *(undefined4 *)(iVar14 + 8);
      Get_Mana((int)*(char *)(iVar4 + (*(char *)(*piVar17 + *piVar2 + DAT_000f6290 + 4) + -1) * 0xb
                             + 3));
      uVar7 = __floatsisf();
      uVar7 = __subsf3(uVar18,uVar7);
      iVar1 = *piVar17;
      *(undefined4 *)(iVar14 + 8) = uVar7;
      if (*(char *)(iVar1 + 1) == '\0') {
        return 1;
      }
      pcVar12 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      cVar9 = (char)DAT_000f62bc + '4';
LAB_000f5e02:
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar12,(bool)cVar9);
      return 1;
    }
  }
  else {
    piVar17 = *(int **)(iVar14 + DAT_000f5fa8);
    uVar18 = *(undefined4 *)(*piVar17 + 8);
    iVar4 = *(int *)(iVar14 + DAT_000f5fb0);
    piVar2 = *(int **)(iVar14 + DAT_000f5fac);
    piVar10 = *(int **)(iVar14 + DAT_000f5fb4);
    Get_Mana((int)*(char *)((*(char *)(*piVar10 + *piVar2 + DAT_000f5fb8 + 4) + -1) * 0xb + iVar4));
    uVar7 = __floatsisf();
    uVar7 = __subsf3(uVar18,uVar7);
    iVar14 = __aeabi_fcmpgt(uVar7,0);
    if (iVar14 != 0) {
      iVar5 = *(int *)(iVar1 + 4);
      iVar14 = *(int *)(iVar5 + 100);
      if (iVar14 < 2) {
        if (iVar14 - 4U < 2) {
          return 0;
        }
        cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_00,extraout_s1_00);
        *(undefined4 *)(iVar5 + 0x110) = local_28;
        *(undefined4 *)(iVar5 + 0x114) = local_24;
        pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar19,1);
        ani_attack_ani(pCVar6);
        iVar14 = *piVar17;
        uVar18 = *(undefined4 *)(iVar14 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar10 + *piVar2 + DAT_000f5fb8 + 4) + -1) * 0xb +
                               iVar4));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        iVar1 = *piVar10;
        *(undefined4 *)(iVar14 + 8) = uVar7;
        if (*(char *)(iVar1 + 1) == '\0') {
          return 1;
        }
        pcVar12 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_000f5fc0 + 'f';
      }
      else if (iVar14 == 3) {
        uVar20 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x3c));
        iVar14 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000f5f80,
                                DAT_000f5f84);
        if (iVar14 == 0) {
          return 0;
        }
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_01,extraout_s1_01);
        *(undefined4 *)(iVar5 + 0x110) = local_20;
        *(undefined4 *)(iVar5 + 0x114) = local_1c;
        pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar19,1);
        ani_attack_ani(pCVar6);
        iVar14 = *piVar17;
        uVar18 = *(undefined4 *)(iVar14 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar10 + *piVar2 + DAT_000f5fb8 + 4) + -1) * 0xb +
                               iVar4));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        *(undefined4 *)(iVar14 + 8) = uVar7;
        *(undefined *)(*(int *)(iVar1 + 4) + 0x75) = 0;
        *(undefined *)(*(int *)(iVar1 + 4) + 0x76) = 0;
        if (*(char *)(*piVar10 + 1) == '\0') {
          return 1;
        }
        pcVar12 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_000f5fc4 + '\x04';
      }
      else {
        if (iVar14 - 4U < 3) {
          return 0;
        }
        uVar20 = __extendsfdf2(*(undefined4 *)(iVar5 + 0x3c));
        iVar1 = __aeabi_dcmpgt((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_000f5f88,
                               DAT_000f5f8c);
        if (iVar1 == 0) {
          return 0;
        }
        pCVar6 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar19,1);
        ani_attack_2_ani(pCVar6);
        iVar14 = *piVar17;
        uVar18 = *(undefined4 *)(iVar14 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar10 + *piVar2 + DAT_000f5fb8 + 4) + -1) * 0xb +
                               iVar4));
        uVar7 = __floatsisf();
        uVar7 = __subsf3(uVar18,uVar7);
        iVar1 = *piVar10;
        *(undefined4 *)(iVar14 + 8) = uVar7;
        if (*(char *)(iVar1 + 1) == '\0') {
          return 1;
        }
        pcVar12 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
        cVar9 = (char)DAT_000f5fc8 + -0x80;
      }
      goto LAB_000f5e02;
    }
  }
  return 0;
}


