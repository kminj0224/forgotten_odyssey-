/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f9400  Symbol: Hero_Kris_Control */

/* Hero_Kris_Control(cocos2d::CCNode*, float, void*) */

void Hero_Kris_Control(CCNode *param_1,float param_2,void *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  CCNode *pCVar5;
  undefined4 *puVar6;
  CCPoint *pCVar7;
  CCArray *this;
  CCLayer *pCVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  CCNode **ppCVar14;
  int **ppiVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar16;
  undefined8 uVar17;
  CCPoint local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  CCPoint local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  iVar2 = DAT_000f96e0 + 0xf9410;
  ppiVar15 = *(int ***)(iVar2 + DAT_000f96e4);
  piVar3 = (int *)(**(code **)(**ppiVar15 + 0xa8))();
  ppCVar14 = *(CCNode ***)(iVar2 + DAT_000f96e8);
  cocos2d::CCNode::getChildByTag(*ppCVar14,1);
  iVar11 = piVar3[1];
  if ((*(int *)(iVar11 + 100) < 7) && (1 < *(int *)(iVar11 + 100))) {
    uVar4 = __addsf3(*(undefined4 *)(iVar11 + 0x3c),param_3);
    *(undefined4 *)(iVar11 + 0x3c) = uVar4;
    pCVar5 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
    cocos2d::CCNode::getChildByTag
              (pCVar5,*(int *)(*(int *)(*(int *)(piVar3[1] + 100) * 4 + *piVar3) + 0x290));
    iVar11 = cocos2d::CCNode::numberOfRunningActions();
    iVar12 = piVar3[1];
    iVar10 = *(int *)(iVar12 + 100);
    if (iVar11 == 0) {
      if (iVar10 == 4) {
        cocos2d::CCSize::CCSize((CCSize *)&local_28,extraout_s0,extraout_s1);
        *(undefined4 *)(iVar12 + 0x110) = local_28;
        *(undefined4 *)(iVar12 + 0x114) = local_24;
      }
      pCVar8 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar15,1);
      ani_Base_ani(pCVar8);
      (**(code **)(**ppiVar15 + 0x2c))(*ppiVar15,0x3f800000);
      *(undefined4 *)(piVar3[1] + 100) = 0xffffffff;
      *(undefined *)(piVar3[1] + 0x75) = 0;
      *(undefined *)(piVar3[1] + 0x76) = 0;
      *(undefined *)(piVar3[1] + 0x77) = 0;
      *(undefined *)(piVar3[1] + 0x78) = 0;
    }
    else if (iVar10 == 2) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f96c8,DAT_000f96cc
                             );
      if (iVar11 != 0) {
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
        pCVar7 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar7);
        pCVar5 = *ppCVar14;
        puVar6 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
        uVar4 = __subsf3(*puVar6,DAT_000f96ec);
        __addsf3(uVar4,DAT_000f96f0);
        iVar11 = (**(code **)(**ppiVar15 + 0x38))();
        uVar16 = __addsf3(*(undefined4 *)(iVar11 + 4),DAT_000f96ec);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_50,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        piVar9 = *ppiVar15;
        iVar10 = 0;
        iVar11 = (**(code **)(*piVar9 + 0x14))(piVar9);
        iVar12 = 1;
        uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f96f8) +
                                                        **(int **)(iVar2 + DAT_000f96f4) * 0x6c +
                                                       DAT_000f9700) + 0xf2) * 2 +
                                            *(int *)(iVar2 + DAT_000f96fc)));
        uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f96d0,DAT_000f96d4);
        __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                 (int)((ulonglong)uVar17 >> 0x20));
        bVar1 = (bool)__fixdfsi();
        uVar16 = Kris_Bullet_Draw(pCVar5,(CCSprite *)piVar9,local_50,local_4c,iVar11,iVar12,bVar1,
                                  false);
        *(undefined *)(piVar3[1] + 0x75) = 1;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar10 + 0x75) = 0;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          iVar11 = piVar3[1];
          iVar10 = iVar10 + 1;
          cocos2d::CCSize::CCSize
                    ((CCSize *)&local_48,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
          *(undefined4 *)(iVar11 + 0x110) = local_48;
          *(undefined4 *)(iVar11 + 0x114) = local_44;
          uVar16 = Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
        } while (iVar10 != 4);
      }
    }
    else if (iVar10 == 3) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f96d8,DAT_000f96dc
                             );
      if (iVar11 != 0) {
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
        pCVar7 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        uVar16 = KG_BG_Hero_Move(param_1,*pCVar7);
        if (*(char *)(piVar3[1] + 0x76) == '\0') {
          pCVar5 = *ppCVar14;
          puVar6 = (undefined4 *)(**(code **)(**ppiVar15 + 0x38))();
          uVar4 = __subsf3(*puVar6,DAT_000f96ec);
          __addsf3(uVar4,DAT_000f96f0);
          iVar11 = (**(code **)(**ppiVar15 + 0x38))();
          uVar16 = __addsf3(*(undefined4 *)(iVar11 + 4),DAT_000f96ec);
          cocos2d::CCPoint::CCPoint
                    ((CCPoint *)&local_40,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
          piVar9 = *ppiVar15;
          iVar11 = (**(code **)(*piVar9 + 0x14))(piVar9);
          iVar10 = 1;
          uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
          uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f96f8) +
                                                          **(int **)(iVar2 + DAT_000f96f4) * 0x6c +
                                                         DAT_000f9708) + 0xfd) * 2 +
                                              *(int *)(iVar2 + DAT_000f96fc)));
          uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f96d0,DAT_000f96d4);
          __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                   (int)((ulonglong)uVar17 >> 0x20));
          bVar1 = (bool)__fixdfsi();
          uVar16 = Kris_Bullet_Draw(pCVar5,(CCSprite *)piVar9,local_40,local_3c,iVar11,iVar10,bVar1,
                                    false);
          *(undefined *)(piVar3[1] + 0x76) = 1;
        }
        *(undefined4 *)(piVar3[1] + 100) = 0;
        iVar11 = piVar3[1];
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_38,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        *(undefined4 *)(iVar11 + 0x110) = local_38;
        *(undefined4 *)(iVar11 + 0x114) = local_34;
        iVar11 = 0;
        do {
          *(undefined *)(piVar3[1] + iVar11 + 0x75) = 0;
          iVar11 = iVar11 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
        } while (iVar11 != 4);
      }
    }
    else if (iVar10 == 4) {
      uVar16 = __extendsfdf2(*(undefined4 *)(iVar12 + 0x3c));
      iVar11 = __aeabi_dcmpgt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f9948,DAT_000f994c
                             );
      if (iVar11 != 0) {
        piVar9 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar14,1);
        pCVar7 = (CCPoint *)(**(code **)(*piVar9 + 0x38))();
        KG_BG_Hero_Move(param_1,*pCVar7);
        iVar11 = piVar3[1];
        uVar16 = __extendsfdf2(*(undefined4 *)(iVar11 + 0x3c));
        __divdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f9950,DAT_000f9954);
        uVar4 = __truncdfsf2();
        uVar16 = __mulsf3(uVar4,DAT_000f9968);
        cocos2d::CCSize::CCSize
                  ((CCSize *)&local_30,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        *(undefined4 *)(iVar11 + 0x110) = local_30;
        *(undefined4 *)(iVar11 + 0x114) = local_2c;
        piVar9 = *ppiVar15;
        uVar13 = 0;
        uVar16 = __extendsfdf2(*(undefined4 *)(piVar3[1] + 0x38));
        uVar17 = __floatsidf((int)*(short *)((*(char *)(**(int **)(iVar2 + DAT_000f9970) +
                                                        **(int **)(iVar2 + DAT_000f9974) * 0x6c +
                                                       DAT_000f9978) + 0x181) * 2 +
                                            *(int *)(iVar2 + DAT_000f996c)));
        uVar17 = __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000f9958,DAT_000f995c);
        __muldf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                 (int)((ulonglong)uVar17 >> 0x20));
        bVar1 = (bool)__truncdfsf2();
        this = (CCArray *)
               Unit_Live_Collistion_attck
                         ((CCLayer *)piVar9,extraout_s0_00,bVar1,extraout_s1_00,true);
        if (this != (CCArray *)0x0) {
          iVar11 = cocos2d::CCArray::count(this);
          for (; (int)uVar13 < iVar11; uVar13 = uVar13 + 1) {
            pCVar8 = (CCLayer *)cocos2d::CCArray::objectAtIndex(this,uVar13);
            SetKnockBack2(pCVar8,extraout_s0_01);
            piVar9 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar13);
            (**(code **)(*piVar9 + 0xa0))();
          }
          cocos2d::CCObject::release((CCObject *)this);
        }
      }
    }
    iVar11 = piVar3[1];
    iVar10 = *(int *)(iVar11 + 100);
    if (iVar10 != -1) {
      if ((**(int **)(iVar2 + DAT_000f9980) == 0) ||
         (iVar2 = __aeabi_fcmplt(*(undefined4 *)((iVar10 + -2) * 4 + *(int *)(iVar2 + DAT_000f9984))
                                 ,*(undefined4 *)(iVar11 + 0x3c)), iVar2 == 0)) {
        if (iVar10 != 7) {
          uVar16 = __extendsfdf2(*(undefined4 *)(*(int *)(iVar10 * 4 + *piVar3) + 0x294));
          uVar16 = __subdf3((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000f9960,DAT_000f9964);
          uVar17 = __extendsfdf2(*(undefined4 *)(iVar11 + 0x3c));
          iVar2 = __aeabi_dcmplt((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                                 (int)((ulonglong)uVar17 >> 0x20));
          if (iVar2 != 0) {
            Hero_Kill_Tartget_Array_Init((CCLayer *)*ppiVar15);
            iVar2 = 0;
            *(undefined4 *)(piVar3[1] + 100) = 0;
            do {
              *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
              piVar9 = *ppiVar15;
              iVar2 = iVar2 + 1;
              *(undefined4 *)(piVar3[1] + 0x3c) = 0;
              Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
            } while (iVar2 != 4);
          }
        }
      }
      else {
        cocos2d::CCSize::CCSize((CCSize *)&local_20,extraout_s0_02,extraout_s1_01);
        *(undefined4 *)(iVar11 + 0x110) = local_20;
        *(undefined4 *)(iVar11 + 0x114) = local_1c;
        iVar2 = 0;
        *(undefined4 *)(piVar3[1] + 100) = 0;
        do {
          *(undefined *)(piVar3[1] + iVar2 + 0x75) = 0;
          piVar9 = *ppiVar15;
          iVar2 = iVar2 + 1;
          *(undefined4 *)(piVar3[1] + 0x3c) = 0;
          Hero_Kill_Tartget_Array_Init((CCLayer *)piVar9);
        } while (iVar2 != 4);
      }
    }
  }
  return;
}


