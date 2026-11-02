/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00114358  Symbol: Unit_default_Attack_Time */

/* Unit_default_Attack_Time(cocos2d::CCLayer*, _Unit_Stage*, cocos2d::CCNode*) */

undefined4 Unit_default_Attack_Time(CCLayer *param_1,_Unit_Stage *param_2,CCNode *param_3)

{
  bool bVar1;
  undefined uVar2;
  int iVar3;
  CCSprite *pCVar4;
  int iVar5;
  CCArray *this;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  CCNode **ppCVar14;
  CCNode *pCVar15;
  uint uVar16;
  CCLayer *pCVar17;
  float fVar18;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined4 local_78;
  CCLayer *local_68;
  undefined4 local_44;
  CCPoint local_40;
  int local_3c;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  piVar13 = *(int **)(param_2 + 4);
  iVar3 = DAT_001146f0 + 0x11436a;
  if (*piVar13 != 0) {
    if (*(char *)(piVar13 + 3) != '\0') {
      uVar19 = __extendsfdf2(piVar13[0xf]);
      uVar20 = __extendsfdf2(piVar13[0x10]);
      uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00114a48,DAT_00114a4c);
      iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                             (int)((ulonglong)uVar20 >> 0x20));
      if (iVar5 == 0) {
        return 0;
      }
      if (*(char *)(piVar13 + 0xb) != '\0') {
        return 0;
      }
      *(char *)(piVar13 + 0xb) = '\x01';
      pCVar4 = (CCSprite *)bullet_return(param_1);
      cocos2d::CCPoint::CCPoint((CCPoint *)&local_30);
      iVar11 = *(int *)(*(int *)(param_2 + 4) + 4);
      local_78 = 0;
      local_68 = (CCLayer *)0x0;
      iVar7 = *(int *)(iVar3 + DAT_00114a68);
      iVar5 = 0;
      do {
        piVar13 = (int *)(iVar5 + iVar7);
        if (*piVar13 == iVar11) {
          local_68 = (CCLayer *)__floatsisf(piVar13[1]);
          local_78 = __floatsisf(piVar13[2]);
        }
        iVar5 = iVar5 + 0xc;
      } while (iVar5 != 0x90);
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar8 = __addsf3(*puVar6,DAT_00114a6c);
      __addsf3(uVar8,local_68);
      iVar5 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar10 = *(undefined4 *)(iVar5 + 4);
      iVar5 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar8 = __mulsf3(*(undefined4 *)(iVar5 + 4),0x3f000000);
      uVar8 = __addsf3(uVar10,uVar8);
      uVar8 = __addsf3(uVar8,DAT_00114a70);
      uVar19 = __addsf3(uVar8,local_78);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_28,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      local_30 = local_28;
      local_2c = local_24;
      if (*(int *)(**(int **)(iVar3 + DAT_00114a74) + 0x2c) == *(int *)(*(int *)(param_2 + 4) + 4))
      {
        iVar5 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
        uVar19 = __extendsfdf2(*(undefined4 *)(iVar5 + 4));
        iVar5 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
        uVar20 = __extendsfdf2(*(undefined4 *)(iVar5 + 4));
        uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00114a50,DAT_00114a54);
        uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00114a58,DAT_00114a5c);
        uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                          (int)((ulonglong)uVar20 >> 0x20));
        uVar19 = __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_00114a60,DAT_00114a64);
        uVar20 = __extendsfdf2(local_78);
        uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00114a50,DAT_00114a54);
        __adddf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                 (int)((ulonglong)uVar20 >> 0x20));
        uVar19 = __truncdfsf2();
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_20,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
        local_30 = local_20;
        local_2c = local_1c;
      }
      if (pCVar4 == (CCSprite *)0x0) {
        return 0;
      }
      iVar5 = *(int *)(param_2 + 4);
      if ((*(int *)(iVar5 + 0xe0) == 0xe) ||
         (*(int *)(iVar5 + 0xdc) == 0xe || *(int *)(iVar5 + 0xd8) == 0xe)) {
        pCVar15 = **(CCNode ***)(iVar3 + DAT_00114a78);
        iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
        iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
        bVar1 = (bool)__fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
        Bullet_Draw(pCVar15,pCVar4,local_30,local_2c,iVar3,iVar5,bVar1,false,(void *)0x1);
        return 1;
      }
      pCVar15 = **(CCNode ***)(iVar3 + DAT_00114a78);
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar2 = __fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      bVar1 = false;
      local_38 = local_30;
      local_34 = local_2c;
      goto LAB_0011490a;
    }
    uVar19 = __extendsfdf2(piVar13[0xf]);
    uVar20 = __extendsfdf2(piVar13[0x10]);
    uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_00114a48,DAT_00114a4c);
    iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                           (int)((ulonglong)uVar20 >> 0x20));
    if (iVar5 == 0) {
      return 0;
    }
    if (*(char *)(piVar13 + 0xb) != '\0') {
      return 0;
    }
    *(char *)(piVar13 + 0xb) = '\x01';
    iVar5 = *(int *)(param_2 + 4);
    if ((*(int *)(iVar5 + 0xe0) == 0xf) ||
       (*(int *)(iVar5 + 0xdc) == 0xf || *(int *)(iVar5 + 0xd8) == 0xf)) {
      uVar10 = *(undefined4 *)(iVar5 + 0x110);
      uVar8 = __addsf3(uVar10);
      *(undefined4 *)(iVar5 + 0x110) = uVar8;
      this = (CCArray *)
             Unit_Live_Collistion_attck
                       (param_1,extraout_s0_03,*(int *)(*(int *)(param_2 + 4) + 0x38));
      if (this != (CCArray *)0x0) {
        iVar5 = cocos2d::CCArray::count(this);
        for (uVar16 = 0; (int)uVar16 < iVar5; uVar16 = uVar16 + 1) {
          piVar13 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar16);
          iVar11 = (**(code **)(*piVar13 + 0xa8))();
          *(undefined *)(*(int *)(iVar11 + 4) + 0x124) = 1;
          iVar7 = *(int *)(*(int *)(param_2 + 4) + 8);
          if (((iVar7 == 4) || (iVar7 == 1)) && (param_3 != (CCNode *)0x0)) {
            iVar12 = *(int *)(*(int *)(param_2 + 4) + 4);
            pCVar17 = **(CCLayer ***)(iVar3 + DAT_00114a78);
            puVar6 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
            iVar7 = __fixsfsi(*puVar6);
            iVar9 = (**(code **)(*piVar13 + 0x38))(piVar13);
            uVar8 = __floatsisf(*(int *)(iVar11 + 0xc) / 2);
            uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar9 + 4));
            __subsf3(uVar8,DAT_00114a7c);
            iVar11 = __fixsfsi();
            iVar9 = (**(code **)(*piVar13 + 0x14))(piVar13);
            Effect::Effect_Draw((Effect *)param_3,pCVar17,iVar12,iVar7,iVar11,iVar9,false);
          }
        }
        cocos2d::CCObject::release((CCObject *)this);
      }
      *(undefined4 *)(*(int *)(param_2 + 4) + 0x110) = uVar10;
      return 0;
    }
    piVar13 = (int *)Unit_Collistion_Name(param_1,false);
    if (piVar13 == (int *)0x0) {
      return 0;
    }
    iVar5 = (**(code **)(*piVar13 + 0xa8))(piVar13);
    Target_Attack(param_1,(CCLayer *)piVar13,extraout_s0_04);
    *(undefined *)(*(int *)(iVar5 + 4) + 0x124) = 1;
    iVar11 = *(int *)(*(int *)(param_2 + 4) + 8);
    if (((iVar11 == 4) || (iVar11 == 1)) && (param_3 != (CCNode *)0x0)) {
      iVar12 = *(int *)(*(int *)(param_2 + 4) + 4);
      pCVar17 = **(CCLayer ***)(iVar3 + DAT_00114bd0);
      puVar6 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
      iVar11 = __fixsfsi(*puVar6);
      iVar7 = (**(code **)(*piVar13 + 0x38))(piVar13);
      uVar8 = __floatsisf(*(int *)(iVar5 + 0xc) / 2);
      uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar7 + 4));
      __subsf3(uVar8,DAT_00114bd4);
      iVar7 = __fixsfsi();
      iVar9 = (**(code **)(*piVar13 + 0x14))(piVar13);
      Effect::Effect_Draw((Effect *)param_3,pCVar17,iVar12,iVar11,iVar7,iVar9,false);
    }
    iVar5 = *(int *)(iVar5 + 4);
    piVar13 = *(int **)(iVar3 + DAT_00114bd8);
    goto LAB_00114b28;
  }
  if (piVar13[2] == 2) {
    iVar5 = Unit_Attack_Timeing(param_2);
    if (iVar5 == 0) {
      return 0;
    }
    iVar11 = *(int *)(param_2 + 4);
    uVar19 = __extendsfdf2(*(undefined4 *)(iVar11 + 0x3c));
    uVar20 = __extendsfdf2(*(undefined4 *)(iVar11 + 0x40));
    uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_001146e0,DAT_001146e4);
    iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                           (int)((ulonglong)uVar20 >> 0x20));
    if (iVar5 == 0) {
      return 0;
    }
    if (*(char *)(iVar11 + 0x2c) != '\0') {
      return 0;
    }
    *(char *)(iVar11 + 0x2c) = '\x01';
    pCVar4 = (CCSprite *)bullet_return(param_1);
    if (pCVar4 == (CCSprite *)0x0) {
      return 0;
    }
    ppCVar14 = *(CCNode ***)(iVar3 + DAT_001146f4);
    if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
       (iVar5 = Random(0,100), **(int **)(iVar3 + DAT_001146f8) < iVar5)) {
      pCVar15 = *ppCVar14;
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      __addsf3(*puVar6,DAT_00114bdc);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar10 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar8 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar8 = __addsf3(uVar10,uVar8);
      uVar19 = __addsf3(uVar8,DAT_00114be0);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_38,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar2 = __fixsfsi(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      bVar1 = false;
    }
    else {
      pCVar15 = *ppCVar14;
      puVar6 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x38))(param_1);
      __addsf3(*puVar6,DAT_001146fc);
      iVar3 = (**(code **)(*(int *)param_1 + 0x38))(param_1);
      uVar10 = *(undefined4 *)(iVar3 + 4);
      iVar3 = (**(code **)(*(int *)param_1 + 0x7c))(param_1);
      uVar8 = __mulsf3(*(undefined4 *)(iVar3 + 4),0x3f000000);
      uVar8 = __addsf3(uVar10,uVar8);
      uVar19 = __addsf3(uVar8,DAT_00114700);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_40,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
      iVar3 = (**(code **)(*(int *)param_1 + 0x14))(param_1);
      iVar5 = *(int *)(*(int *)(param_2 + 4) + 4);
      uVar19 = __extendsfdf2(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38));
      __muldf3((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),DAT_001146e8,DAT_001146ec);
      uVar2 = __fixdfsi();
      bVar1 = true;
      local_38 = local_40;
      local_34 = local_3c;
    }
LAB_0011490a:
    Bullet_Draw(pCVar15,pCVar4,local_38,local_34,iVar3,iVar5,(bool)uVar2,bVar1,(void *)0x0);
    return 1;
  }
  uVar19 = __extendsfdf2(piVar13[0xf]);
  uVar20 = __extendsfdf2(piVar13[0x10]);
  uVar20 = __muldf3((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),DAT_001146e0,DAT_001146e4);
  iVar5 = __aeabi_dcmpgt((int)uVar19,(int)((ulonglong)uVar19 >> 0x20),(int)uVar20,
                         (int)((ulonglong)uVar20 >> 0x20));
  if (iVar5 == 0) {
    return 0;
  }
  if (*(char *)(piVar13 + 0xb) != '\0') {
    return 0;
  }
  *(char *)(piVar13 + 0xb) = '\x01';
  piVar13 = (int *)Unit_Collistion_Name(param_1,false);
  if (piVar13 == (int *)0x0) {
    return 0;
  }
  iVar5 = (**(code **)(*piVar13 + 0xa8))();
  if (*(int *)(*(int *)(param_2 + 4) + 4) == 0x96) {
    return 1;
  }
  local_44 = CONCAT13(local_44._3_1_,0x7f7fff);
  fVar18 = (float)SetDemigeColor((CCLayer *)piVar13,local_44,param_2);
  *(undefined *)(*(int *)(iVar5 + 4) + 0x124) = 1;
  if (param_3 != (CCNode *)0x0) {
    if ((*(int *)(*(int *)(param_2 + 4) + 0x120) == 0) ||
       (iVar11 = Random(0,100), fVar18 = extraout_s0, **(int **)(iVar3 + DAT_001146f8) < iVar11)) {
      iVar11 = *(int *)(param_2 + 4);
      if (*(int *)(iVar11 + 4) == 0x104) {
        Unit_Live_Collistion_attck(param_1,fVar18,*(int *)(iVar11 + 0x38));
        goto LAB_001146d2;
      }
      if (*(int *)(iVar11 + 4) != 0xb4) {
        Target_Attack(param_1,(CCLayer *)piVar13,fVar18);
        local_68 = **(CCLayer ***)(iVar3 + DAT_001146f4);
        iVar12 = *(int *)(*(int *)(param_2 + 4) + 4);
        puVar6 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
        iVar11 = __fixsfsi(*puVar6);
        iVar7 = (**(code **)(*piVar13 + 0x38))(piVar13);
        uVar8 = __floatsisf(*(int *)(iVar5 + 0xc) / 2);
        uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar7 + 4));
        __subsf3(uVar8,DAT_00114704);
        iVar7 = __fixsfsi();
        iVar9 = (**(code **)(*piVar13 + 0x14))(piVar13);
        bVar1 = false;
        goto LAB_001146c4;
      }
      uVar10 = *(undefined4 *)(iVar11 + 0x110);
      iVar7 = __fixsfsi(uVar10);
      uVar8 = __floatsisf(iVar7 / 2);
      uVar8 = __addsf3(uVar10,uVar8);
      *(undefined4 *)(iVar11 + 0x110) = uVar8;
      iVar11 = *(int *)(*(int *)(param_2 + 4) + 0x38);
      fVar18 = extraout_s0_02;
    }
    else {
      iVar11 = *(int *)(param_2 + 4);
      if (*(int *)(iVar11 + 4) == 0x104) {
        uVar10 = *(undefined4 *)(iVar11 + 0x110);
        iVar7 = __fixsfsi(uVar10);
        uVar8 = __floatsisf(iVar7 / 2);
        uVar8 = __addsf3(uVar10,uVar8);
        *(undefined4 *)(iVar11 + 0x110) = uVar8;
        iVar11 = __mulsf3(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38),0x3fc00000);
        fVar18 = extraout_s0_00;
      }
      else {
        if (*(int *)(iVar11 + 4) != 0xb4) {
          fVar18 = (float)__mulsf3(*(undefined4 *)(iVar11 + 0x38),0x3fc00000);
          Target_Attack(param_1,(CCLayer *)piVar13,fVar18);
          local_68 = **(CCLayer ***)(iVar3 + DAT_001146f4);
          iVar12 = *(int *)(*(int *)(param_2 + 4) + 4);
          puVar6 = (undefined4 *)(**(code **)(*piVar13 + 0x38))(piVar13);
          iVar11 = __fixsfsi(*puVar6);
          iVar7 = (**(code **)(*piVar13 + 0x38))(piVar13);
          uVar8 = __floatsisf(*(int *)(iVar5 + 0xc) / 2);
          uVar8 = __addsf3(uVar8,*(undefined4 *)(iVar7 + 4));
          __subsf3(uVar8,DAT_00114704);
          iVar7 = __fixsfsi();
          iVar9 = (**(code **)(*piVar13 + 0x14))(piVar13);
          bVar1 = true;
LAB_001146c4:
          Effect::Effect_Draw((Effect *)param_3,local_68,iVar12,iVar11,iVar7,iVar9,bVar1);
          goto LAB_001146d2;
        }
        uVar10 = *(undefined4 *)(iVar11 + 0x110);
        iVar7 = __fixsfsi(uVar10);
        uVar8 = __floatsisf(iVar7 / 2);
        uVar8 = __addsf3(uVar10,uVar8);
        *(undefined4 *)(iVar11 + 0x110) = uVar8;
        iVar11 = __mulsf3(*(undefined4 *)(*(int *)(param_2 + 4) + 0x38),0x3fc00000);
        fVar18 = extraout_s0_01;
      }
    }
    Unit_Live_Collistion_attck(param_1,fVar18,iVar11);
    uVar8 = __floatsisf(iVar7);
    *(undefined4 *)(*(int *)(param_2 + 4) + 0x110) = uVar8;
  }
LAB_001146d2:
  iVar5 = *(int *)(iVar5 + 4);
  piVar13 = *(int **)(iVar3 + DAT_00114708);
LAB_00114b28:
  if (*(int *)(*piVar13 + 0x2c) == *(int *)(iVar5 + 4)) {
    *(undefined *)(iVar5 + 0x84) = 0;
  }
  return 1;
}


