/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000db908  Symbol: Number_Loding */

/* Market_Equip::Number_Loding() */

void __thiscall Market_Equip::Number_Loding(Market_Equip *this)

{
  int *piVar1;
  CCNode *pCVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  CCTexture2D *pCVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int *piVar10;
  int iVar11;
  code *pcVar12;
  int *piVar13;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s0_02;
  float extraout_s0_03;
  float extraout_s0_04;
  float extraout_s0_05;
  float extraout_s0_06;
  float extraout_s0_07;
  float extraout_s0_08;
  float extraout_s0_09;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  float extraout_s1_06;
  float extraout_s1_07;
  float extraout_s1_08;
  float extraout_s1_09;
  undefined8 uVar14;
  undefined8 uVar15;
  CCPoint local_b8;
  int local_b4;
  CCPoint local_b0;
  int local_ac;
  CCPoint local_a8;
  int local_a4;
  CCPoint local_a0;
  int local_9c;
  CCPoint local_98;
  int local_94;
  CCPoint local_90;
  int local_8c;
  CCPoint local_88;
  int local_84;
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar13 = *(int **)(DAT_000dbad4 + 0xdb914);
  iVar11 = 1;
LAB_000db916:
  do {
    piVar10 = *(int **)(DAT_000dbad8 + 0xdb91e);
    if (*(char *)(*piVar13 + *piVar10 * 9 + iVar11 + DAT_000dbadc) != '\0') {
      if (iVar11 == 1) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_b8,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbae4 + 0xdb96e),local_b8,local_b4,9);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 2;
        goto LAB_000db916;
      }
      if (iVar11 == 2) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_b0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbae8 + 0xdb9b2),local_b0,local_ac,10);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 3;
        goto LAB_000db916;
      }
      if (iVar11 == 3) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_a8,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbaec + 0xdb9f6),local_a8,local_a4,0xb);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 4;
        goto LAB_000db916;
      }
      if (iVar11 == 4) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_a0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbaf0 + 0xdba3a),local_a0,local_9c,0xc);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 5;
        goto LAB_000db916;
      }
      if (iVar11 == 5) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_98,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbaf4 + 0xdba7e),local_98,local_94,0xd);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 6;
        goto LAB_000db916;
      }
      if (iVar11 == 6) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_90,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000dbaf8 + 0xdbac2),local_90,local_8c,0xe);
        *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
        iVar11 = 7;
        goto LAB_000db916;
      }
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      uVar14 = __floatsisf(*(int *)(this + 0x118) * 0x30 + -0x1c1);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_88,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      vDrawImage(pCVar2,(char *)(DAT_000dbef8 + 0xdbb2a),local_88,local_84,0xf);
      *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 8) {
      if (*piVar13 + DAT_000dbefc != 0) {
        piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dbf00 + 0xdbb52));
        pcVar12 = *(code **)(*piVar1 + 0x74);
        cocos2d::CCPoint::CCPoint(aCStack_80,extraout_s0,extraout_s1);
        (*pcVar12)(piVar1,aCStack_80);
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag
                                  (pCVar2,*(char *)(*piVar13 + *piVar10 + DAT_000dbf04 + 4) + 8);
        (**(code **)(*piVar3 + 0xcc))(piVar3,piVar1,3,3);
      }
      iVar11 = 9;
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dbf08 + 900000));
      piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dbf0c + 0xdbbaa));
      do {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        iVar4 = cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
        if (iVar4 != 0) {
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar5 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          puVar9 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))();
          uVar8 = *puVar9;
          pCVar6 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
          piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
          pcVar12 = *(code **)(*piVar5 + 0x74);
          cocos2d::CCPoint::CCPoint(aCStack_78,extraout_s0_00,extraout_s1_00);
          (*pcVar12)(piVar5,aCStack_78);
          pcVar12 = *(code **)(*piVar5 + 0x3c);
          puVar9 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
          uVar14 = __subsf3(uVar8,*puVar9);
          cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar12)(piVar5,aCStack_70);
          (**(code **)(*piVar5 + 0x6c))(piVar5,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          (**(code **)(*piVar7 + 0xcc))(piVar7,piVar5,0,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          upAction(this,pCVar2);
          pCVar6 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))(piVar3);
          piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6);
          pcVar12 = *(code **)(*piVar5 + 0x74);
          cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0_01,extraout_s1_01);
          (*pcVar12)(piVar5,aCStack_68);
          pcVar12 = *(code **)(*piVar5 + 0x3c);
          puVar9 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
          uVar14 = __subsf3(uVar8,*puVar9);
          cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar12)(piVar5,aCStack_60);
          (**(code **)(*piVar5 + 0x6c))(piVar5,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar7 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          (**(code **)(*piVar7 + 0xcc))(piVar7,piVar5,1,1);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
          DownAction(this,pCVar2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x11);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x154) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0_02,extraout_s1_02);
      (*pcVar12)(piVar1,aCStack_58);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x154),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x154),0);
      Draw_Number::SetNumber
                (*(Draw_Number **)(this + 0x154),
                 *(int *)(*piVar13 + (*piVar10 + DAT_000dbf1c) * 4 + 4),2);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x158) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_50,extraout_s0_03,extraout_s1_03);
      (*pcVar12)(piVar1,aCStack_50);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x158),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x158),0);
      Draw_Number::SetNumber(*(Draw_Number **)(this + 0x158),*(int *)(*piVar13 + DAT_000dbf04),2);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x15c) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0_04,extraout_s1_04);
      (*pcVar12)(piVar1,aCStack_48);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x15c),0x65,0x65);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x15c),3);
      Draw_Number::SetNumber(*(Draw_Number **)(this + 0x15c),10,0);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,100);
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,9);
      uVar8 = (**(code **)(*piVar3 + 0x38))();
      (*pcVar12)(piVar1,uVar8);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dbf2c + 0xdbe02));
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_40,extraout_s0_05,extraout_s1_05);
      (*pcVar12)(piVar1,aCStack_40);
      (**(code **)(*(int *)this + 0xcc))(this,piVar1,0x65,0x65);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x160) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_06,extraout_s1_06);
      (*pcVar12)(piVar1,aCStack_38);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x160),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x160),1);
      Draw_Number::SetNumber(*(Draw_Number **)(this + 0x160),0,2);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x168) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_07,extraout_s1_07);
      (*pcVar12)(piVar1,aCStack_30);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x168),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x168),1);
      Draw_Number::SetNumber(*(Draw_Number **)(this + 0x168),0,2);
      Image_Name(this,9);
      piVar1 = (int *)InventoryLayer::node();
      *(int **)(this + 0x170) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_08,extraout_s1_08);
      (*pcVar12)(piVar1,aCStack_28);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x170),99,99);
      InventoryLayer::Set_Hero_Item_Cheking(*(InventoryLayer **)(this + 0x170),1);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dbf48 + 0xdbee8));
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_09,extraout_s1_09);
      (*pcVar12)(piVar1,aCStack_20);
      (**(code **)(*(int *)this + 0xcc))(this,piVar1,0x58,0x58);
      *(undefined4 *)(this + 0x110) = 9;
      iVar11 = 0;
      do {
        iVar4 = iVar11 + 1;
        Draw_Item(this,iVar11);
        iVar11 = iVar4;
      } while (iVar4 != 4);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,99);
      iVar11 = *(int *)((*piVar10 + DAT_000dc01c) * 4 + *piVar13);
      if (iVar11 != 100) {
        __divsi3(iVar11,5);
      }
      iVar11 = DAT_000dc024;
      puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar14 = __extendsfdf2(*puVar9);
      iVar4 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar15 = __extendsfdf2(*(undefined4 *)(iVar4 + 4));
      uVar8 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(iVar11 + 0xdbfdc),uVar8,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                     (int)uVar15,uVar8);
    }
  } while( true );
}


