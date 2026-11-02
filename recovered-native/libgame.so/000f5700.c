/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f5700  Symbol: Hero_Reina_Control */

/* Hero_Reina_Control(cocos2d::CCNode*, float, void*) */

void Hero_Reina_Control(CCNode *param_1,float param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  CCNode *this;
  CCPoint *pCVar5;
  undefined4 *puVar6;
  uint uVar7;
  CCLayer *pCVar8;
  int *piVar9;
  Effect *in_r2;
  int iVar10;
  int iVar11;
  int iVar12;
  CCNode **ppCVar13;
  int **ppiVar14;
  uint uVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = DAT_000f59c0 + 0xf5710;
  ppiVar14 = *(int ***)(iVar2 + DAT_000f59c4);
  piVar3 = (int *)(**(code **)(**ppiVar14 + 0xa8))();
  iVar11 = piVar3[1];
  if ((*(int *)(iVar11 + 100) < 7) && (1 < *(int *)(iVar11 + 100))) {
    uVar4 = __addsf3(*(undefined4 *)(iVar11 + 0x3c),param_3);
    *(undefined4 *)(iVar11 + 0x3c) = uVar4;
    this = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
    cocos2d::CCNode::getChildByTag
              (this,*(int *)(*(int *)(*(int *)(piVar3[1] + 100) * 4 + *piVar3) + 0x290));
    iVar11 = cocos2d::CCNode::numberOfRunningActions();
    iVar12 = piVar3[1];
    iVar10 = *(int *)(iVar12 + 100);
    if (iVar11 == 0) {
      if (iVar10 == 6) {
        cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0,extraout_s1);
        *(undefined4 *)(iVar12 + 0x110) = local_28;
        *(undefined4 *)(iVar12 + 0x114) = local_24;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar14,1);
      ani_Base_ani(pCVar8);
      (**(code **)(**ppiVar14 + 0x2c))(*ppiVar14,0x3f800000);
      *(undefined4 *)(piVar3[1] + 100) = 0xffffffff;
      *(undefined *)(piVar3[1] + 0x75) = 0;
      *(undefined *)(piVar3[1] + 0x76) = 0;
      *(undefined *)(piVar3[1] + 0x77) = 0;
      *(undefined *)(piVar3[1] + 0x78) = 0;
    }
    else if (iVar10 == 2) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f59a8,DAT_000f59ac
                             );
      if (iVar11 != 0) {
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar2 + DAT_000f59c8),1);
        pCVar5 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar5);
        iVar11 = piVar3[1];
        uVar4 = __fixsfsi(*(undefined4 *)(iVar11 + 0x110));
        piVar9 = *ppiVar14;
        *(undefined4 *)(iVar11 + 0x110) = DAT_000f59cc;
        iVar11 = 0;
        uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f59d8) +
                                                        **(int **)(iVar2 + DAT_000f59d0) * 0x6c +
                                                       DAT_000f59dc) + 0x16b) * 2 +
                                            *(int *)(iVar2 + DAT_000f59d4)));
        uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f59b0,DAT_000f59b4);
        __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                 (int)((ulonglong)uVar17 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        Unit_Live_Collistion_attck
                  ((CCLayer *)piVar9,extraout_s0_00,bVar1,extraout_s1_00,false,DAT_000f59e0);
        uVar4 = __floatsisf(uVar4);
        *(undefined4 *)(piVar3[1] + 0x110) = uVar4;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar11 + 0x75) = 0;
          piVar9 = *ppiVar14;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
        } while (iVar11 != 4);
      }
    }
    else if (iVar10 == 3) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f59b8,DAT_000f59bc
                             );
      if (iVar11 != 0) {
        ppCVar13 = *(CCNode ***)(iVar2 + DAT_000f59c8);
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar13,1);
        pCVar5 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar5);
        piVar9 = *ppiVar14;
        uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f59d8) +
                                                        **(int **)(iVar2 + DAT_000f59d0) * 0x6c +
                                                       DAT_000f59dc) + 0x176) * 2 +
                                            *(int *)(iVar2 + DAT_000f59d4)));
        uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f59b0,DAT_000f59b4);
        __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                 (int)((ulonglong)uVar17 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        Unit_Live_Collistion_attck((CCLayer *)piVar9,extraout_s0_01,bVar1,extraout_s1_01,true);
        uVar15 = 0;
        iVar11 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138));
        if (iVar11 != 0) {
          for (; uVar7 = cocos2d::CCArray::count(*(CCArray **)(piVar3[1] + 0x138)), uVar15 < uVar7;
              uVar15 = uVar15 + 1) {
            piVar9 = (int *)cocos2d::CCArray::objectAtIndex(*(CCArray **)(piVar3[1] + 0x138),uVar15)
            ;
            if ((piVar9 != (int *)0x0) &&
               (iVar11 = (**(code **)(*piVar9 + 0xa8))(piVar9), iVar11 != 0)) {
              pCVar8 = (CCLayer *)*ppCVar13;
              puVar6 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
              uVar4 = __mulsf3(*(undefined4 *)(*(int *)(iVar11 + 4) + 0x100),0x3f000000);
              __addsf3(uVar4,*puVar6);
              iVar11 = __fixsfsi();
              iVar10 = (**(code **)(*piVar9 + 0x38))(piVar9);
              iVar10 = __fixsfsi(*(undefined4 *)(iVar10 + 4));
              iVar12 = (**(code **)(*piVar9 + 0x14))(piVar9);
              Effect::Effect_Draw(in_r2,pCVar8,2,iVar11,iVar10,iVar12,false);
            }
          }
        }
        iVar11 = 0;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar11 + 0x75) = 0;
          piVar9 = *ppiVar14;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
        } while (iVar11 != 4);
      }
    }
    else if (iVar10 == 4) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f5be8,DAT_000f5bec
                             );
      if (iVar11 != 0) {
        iVar11 = 0;
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(**(CCNode ***)(iVar2 + DAT_000f5c00),1);
        pCVar5 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar5);
        piVar9 = *ppiVar14;
        uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f5c08) +
                                                        **(int **)(iVar2 + DAT_000f5c04) * 0x6c +
                                                       DAT_000f5c10) + 0x181) * 2 +
                                            *(int *)(iVar2 + DAT_000f5c0c)));
        uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f5bf0,DAT_000f5bf4);
        __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                 (int)((ulonglong)uVar17 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        Unit_Live_Collistion_attck((CCLayer *)piVar9,extraout_s0_02,bVar1,extraout_s1_02,true);
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar11 + 0x75) = 0;
          piVar9 = *ppiVar14;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          uVar16 = Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
        } while (iVar11 != 4);
        iVar11 = piVar3[1];
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_30,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        *(undefined4 *)(iVar11 + 0x110) = local_30;
        *(undefined4 *)(iVar11 + 0x114) = local_2c;
      }
    }
    iVar11 = piVar3[1];
    iVar10 = *(int *)(iVar11 + 100);
    if (iVar10 != -1) {
      if ((**(int **)(iVar2 + DAT_000f5c1c) == 0) ||
         (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar10 + -2) * 4 + *(int *)(iVar2 + DAT_000f5c20))
                                 ,*(undefined4 *)(iVar11 + 0x3c)), iVar2 == 0)) {
        uVar16 = __extendsfdf2(*(undefined4 *)(*(int *)(iVar10 * 4 + *piVar3) + 0x294));
        uVar16 = __subdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f5bf8,DAT_000f5bfc);
        uVar17 = __extendsfdf2(*(undefined4 *)(iVar11 + 0x3c));
        iVar2 = __aeabi_dcmplt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                               (int)((ulonglong)uVar17 >> 0x20));
        if (iVar2 != 0) {
          Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar14);
          iVar2 = 0;
          *(undefined4 *)(piVar3[1] + 100) = 0;
          do {
            *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
            piVar9 = *ppiVar14;
            iVar2 = iVar2 + 1;
            *(undefined4 *)(piVar3[1] + 0x3c) = 0;
            Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
          } while (iVar2 != 4);
        }
      }
      else {
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_03,extraout_s1_03);
        *(undefined4 *)(iVar11 + 0x110) = local_20;
        *(undefined4 *)(iVar11 + 0x114) = local_1c;
        iVar2 = 0;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
          piVar9 = *ppiVar14;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
        } while (iVar2 != 4);
      }
    }
  }
  return;
}


