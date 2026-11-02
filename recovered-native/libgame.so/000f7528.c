/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f7528  Symbol: Hero_Agasa_Touch */

/* Hero_Agasa_Touch(cocos2d::CCPoint, void*) */

undefined4 Hero_Agasa_Touch(CCPoint param_1,void *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  CCNode *pCVar4;
  int iVar5;
  undefined4 uVar6;
  CCLayer *pCVar7;
  int *piVar8;
  undefined4 uVar9;
  char *pcVar10;
  code *pcVar11;
  int iVar12;
  int iVar13;
  int *piVar14;
  CCNode **ppCVar15;
  int *piVar16;
  int *piVar17;
  int **ppiVar18;
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
  undefined8 uVar19;
  int local_48;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar12 = DAT_000f7848 + 0xf7538;
  ppiVar18 = *(int ***)(iVar12 + DAT_000f784c);
  iVar2 = (**(code **)(**ppiVar18 + 0xa8))();
  local_48 = 2;
  ppCVar15 = *(CCNode ***)(iVar12 + DAT_000f7850);
  do {
    piVar3 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar15,local_48);
    (**(code **)(*piVar3 + 0xec))(piVar3,0xff);
    local_48 = local_48 + 1;
  } while (local_48 != 6);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar15,2);
  iVar5 = Sprite_Touch3(pCVar4,param_1,extraout_s0,extraout_s1);
  if (iVar5 == 0) {
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar15,3);
    iVar5 = Sprite_Touch3(pCVar4,param_1,extraout_s0_02,extraout_s1_02);
    if (iVar5 != 0) {
      if (*(int *)(*(int *)(iVar2 + 4) + 4) == 5) {
        return 0;
      }
      piVar16 = *(int **)(iVar12 + DAT_000f7858);
      uVar9 = *(undefined4 *)(*piVar16 + 8);
      iVar5 = *(int *)(iVar12 + DAT_000f7860);
      piVar17 = *(int **)(iVar12 + DAT_000f7864);
      piVar3 = *(int **)(iVar12 + DAT_000f785c);
      Get_Mana((int)*(char *)(iVar5 + (*(char *)(*piVar17 + *piVar3 + DAT_000f7868 + 4) + -1) * 0xb
                             + 1));
      uVar6 = __floatsisf();
      uVar6 = __subsf3(uVar9,uVar6);
      iVar12 = __aeabi_fcmpgt(uVar6,0);
      if (iVar12 == 0) {
        return 0;
      }
      iVar2 = *(int *)(iVar2 + 4);
      if (*(int *)(iVar2 + 100) == 2) {
        uVar19 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x3c));
        iVar12 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000f7840,
                                DAT_000f7844);
        if (iVar12 == 0) {
          return 0;
        }
        if (*(char *)(iVar2 + 0x34) != '\0') {
          return 0;
        }
        iVar12 = *piVar16;
        *(char *)(iVar2 + 0x34) = '\x01';
        local_48 = *(undefined4 *)(iVar12 + 8);
        cVar1 = *(char *)(*piVar17 + *piVar3 + DAT_000f7868 + 4);
      }
      else {
        if (*(int *)(iVar2 + 100) != 3) {
          return 0;
        }
        uVar19 = __extendsfdf2(*(undefined4 *)(iVar2 + 0x3c));
        iVar12 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000f7840,
                                DAT_000f7844);
        if (iVar12 == 0) {
          return 0;
        }
        if (*(char *)(iVar2 + 0x34) != '\0') {
          return 0;
        }
        *(char *)(iVar2 + 0x34) = '\x01';
        iVar12 = *piVar16;
        local_48 = *(undefined4 *)(iVar12 + 8);
        cVar1 = *(char *)(*piVar17 + *piVar3 + DAT_000f7868 + 4);
      }
      Get_Mana((int)*(char *)(iVar5 + (cVar1 + -1) * 0xb + 1));
      uVar6 = __floatsisf();
      uVar6 = __subsf3(local_48,uVar6);
      *(undefined4 *)(iVar12 + 8) = uVar6;
      return 1;
    }
    pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar15,4);
    iVar5 = Sprite_Touch3(pCVar4,param_1,extraout_s0_03,extraout_s1_03);
    if (iVar5 == 0) {
      pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(*ppCVar15,5);
      iVar2 = Sprite_Touch3(pCVar4,param_1,extraout_s0_04,extraout_s1_04);
      if (iVar2 == 0) {
        return 0;
      }
      piVar17 = *(int **)(iVar12 + DAT_000f7a64);
      uVar9 = *(undefined4 *)(*piVar17 + 8);
      iVar5 = *(int *)(iVar12 + DAT_000f7a6c);
      piVar3 = *(int **)(iVar12 + DAT_000f7a70);
      piVar16 = *(int **)(iVar12 + DAT_000f7a68);
      Get_Mana((int)*(char *)(iVar5 + (*(char *)(*piVar3 + *piVar16 + DAT_000f7a74 + 4) + -1) * 0xb
                             + 3));
      uVar6 = __floatsisf();
      uVar6 = __subsf3(uVar9,uVar6);
      iVar2 = __aeabi_fcmpge(uVar6,0);
      if (iVar2 != 0) {
        pcVar10 = *(char **)(iVar12 + DAT_000f7a78);
        if (*pcVar10 == '\0') {
          piVar8 = (int *)operator_new(0x11c);
          Hero8::Hero8((Hero8 *)piVar8);
          (**(code **)(*piVar8 + 300))(piVar8);
          pcVar11 = *(code **)(*piVar8 + 0x3c);
          uVar6 = (**(code **)(**ppiVar18 + 0x38))();
          (*pcVar11)(piVar8,uVar6);
          piVar14 = **(int ***)(iVar12 + DAT_000f7a7c);
          pcVar11 = *(code **)(*piVar14 + 0xcc);
          uVar6 = (**(code **)(**ppiVar18 + 0x14))();
          (*pcVar11)(piVar14,piVar8,uVar6,DAT_000f7a80);
          cocos2d::CCObject::release((CCObject *)piVar8);
          piVar8 = *ppiVar18;
          *pcVar10 = '\x01';
          (**(code **)(*piVar8 + 0x6c))(piVar8,0);
          iVar2 = *piVar17;
          uVar9 = *(undefined4 *)(iVar2 + 8);
          Get_Mana((int)*(char *)(iVar5 + (*(char *)(*piVar3 + *piVar16 + DAT_000f7a74 + 4) + -1) *
                                          0xb + 3));
          uVar6 = __floatsisf();
          uVar6 = __subsf3(uVar9,uVar6);
          *(undefined4 *)(iVar2 + 8) = uVar6;
          return 1;
        }
        return 0;
      }
      return 0;
    }
    if (1 < *(int *)(*(int *)(iVar2 + 4) + 100)) {
      return 0;
    }
    piVar16 = *(int **)(iVar12 + DAT_000f7a64);
    uVar9 = *(undefined4 *)(*piVar16 + 8);
    iVar5 = *(int *)(iVar12 + DAT_000f7a6c);
    piVar17 = *(int **)(iVar12 + DAT_000f7a70);
    piVar3 = *(int **)(iVar12 + DAT_000f7a68);
    Get_Mana((int)*(char *)(iVar5 + (*(char *)(*piVar17 + *piVar3 + DAT_000f7a74 + 4) + -1) * 0xb +
                           2));
    uVar6 = __floatsisf();
    uVar6 = __subsf3(uVar9,uVar6);
    iVar2 = __aeabi_fcmpgt(uVar6,0);
    if (iVar2 == 0) {
      return 0;
    }
    pCVar7 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar18,1);
    ani_attack_3_ani(pCVar7);
    iVar2 = *piVar16;
    uVar9 = *(undefined4 *)(iVar2 + 8);
    Get_Mana((int)*(char *)(iVar5 + (*(char *)(*piVar17 + *piVar3 + DAT_000f7a74 + 4) + -1) * 0xb +
                           2));
    uVar6 = __floatsisf();
    uVar6 = __subsf3(uVar9,uVar6);
    *(undefined4 *)(iVar2 + 8) = uVar6;
  }
  else {
    piVar3 = *(int **)(iVar12 + DAT_000f7858);
    uVar9 = *(undefined4 *)(*piVar3 + 8);
    iVar5 = *(int *)(iVar12 + DAT_000f7860);
    piVar16 = *(int **)(iVar12 + DAT_000f7864);
    piVar17 = *(int **)(iVar12 + DAT_000f785c);
    Get_Mana((int)*(char *)((*(char *)(*piVar16 + *piVar17 + DAT_000f7868 + 4) + -1) * 0xb + iVar5))
    ;
    uVar6 = __floatsisf();
    uVar6 = __subsf3(uVar9,uVar6);
    iVar12 = __aeabi_fcmpgt(uVar6,0);
    if (iVar12 == 0) {
      return 0;
    }
    iVar13 = *(int *)(iVar2 + 4);
    iVar12 = *(int *)(iVar13 + 100);
    if (iVar12 < 2) {
      if (iVar12 - 4U < 2) {
        return 0;
      }
      cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0_00,extraout_s1_00);
      *(undefined4 *)(iVar13 + 0x110) = local_28;
      *(undefined4 *)(iVar13 + 0x114) = local_24;
      pCVar7 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar18,1);
      ani_attack_ani(pCVar7);
    }
    else {
      if (iVar12 == 3) {
        uVar19 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
        iVar12 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000f7838,
                                DAT_000f783c);
        if (iVar12 == 0) {
          return 0;
        }
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_01,extraout_s1_01);
        *(undefined4 *)(iVar13 + 0x110) = local_20;
        *(undefined4 *)(iVar13 + 0x114) = local_1c;
        pCVar7 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar18,1);
        ani_attack_ani(pCVar7);
        iVar12 = *piVar3;
        uVar9 = *(undefined4 *)(iVar12 + 8);
        Get_Mana((int)*(char *)((*(char *)(*piVar16 + *piVar17 + DAT_000f7868 + 4) + -1) * 0xb +
                               iVar5));
        uVar6 = __floatsisf();
        uVar6 = __subsf3(uVar9,uVar6);
        *(undefined4 *)(iVar12 + 8) = uVar6;
        *(undefined *)(*(int *)(iVar2 + 4) + 0x75) = 0;
        *(undefined *)(*(int *)(iVar2 + 4) + 0x76) = 0;
        return 1;
      }
      if (iVar12 - 4U < 3) {
        return 0;
      }
      uVar19 = __extendsfdf2(*(undefined4 *)(iVar13 + 0x3c));
      iVar2 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_000f7838,DAT_000f783c)
      ;
      if (iVar2 == 0) {
        return 0;
      }
      pCVar7 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar18,1);
      ani_attack_2_ani(pCVar7);
    }
    iVar2 = *piVar3;
    uVar9 = *(undefined4 *)(iVar2 + 8);
    Get_Mana((int)*(char *)((*(char *)(*piVar16 + *piVar17 + DAT_000f7868 + 4) + -1) * 0xb + iVar5))
    ;
    uVar6 = __floatsisf();
    uVar6 = __subsf3(uVar9,uVar6);
    *(undefined4 *)(iVar2 + 8) = uVar6;
  }
  return 1;
}


