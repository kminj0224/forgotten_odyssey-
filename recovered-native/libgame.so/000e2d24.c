/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e2d24  Symbol: Number_Loding */

/* Market_Store::Number_Loding() */

void __thiscall Market_Store::Number_Loding(Market_Store *this)

{
  int *piVar1;
  CCNode *pCVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  CCTexture2D *pCVar7;
  int *piVar8;
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
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s1_02;
  float extraout_s1_03;
  float extraout_s1_04;
  float extraout_s1_05;
  undefined8 uVar14;
  undefined8 uVar15;
  CCPoint local_98;
  int local_94;
  CCPoint local_90;
  int local_8c;
  CCPoint local_88;
  int local_84;
  CCPoint local_80;
  int local_7c;
  CCPoint local_78;
  int local_74;
  CCPoint local_70;
  int local_6c;
  CCPoint local_68;
  int local_64;
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  CCPoint aCStack_50 [8];
  CCPoint aCStack_48 [8];
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  piVar13 = *(int **)(DAT_000e2ef0 + 0xe2d30);
  iVar11 = 1;
LAB_000e2d32:
  do {
    piVar10 = *(int **)(DAT_000e2ef4 + 0xe2d3a);
    if (*(char *)(*piVar13 + *piVar10 * 9 + iVar11 + DAT_000e2ef8) != '\0') {
      if (iVar11 == 1) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_98,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f00 + 0xe2d8a),local_98,local_94,0xd);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 2;
        goto LAB_000e2d32;
      }
      if (iVar11 == 2) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_90,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f04 + 0xe2dce),local_90,local_8c,0xe);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 3;
        goto LAB_000e2d32;
      }
      if (iVar11 == 3) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_88,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f08 + 0xe2e12),local_88,local_84,0xf);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 4;
        goto LAB_000e2d32;
      }
      if (iVar11 == 4) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_80,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f0c + 0xe2e56),local_80,local_7c,0x10);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 5;
        goto LAB_000e2d32;
      }
      if (iVar11 == 5) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_78,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f10 + 0xe2e9a),local_78,local_74,0x11);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 6;
        goto LAB_000e2d32;
      }
      if (iVar11 == 6) {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
        cocos2d::CCPoint::CCPoint
                  ((CCPoint *)&local_70,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        vDrawImage(pCVar2,(char *)(DAT_000e2f14 + 0xe2ede),local_70,local_6c,0x12);
        *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
        iVar11 = 7;
        goto LAB_000e2d32;
      }
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      uVar14 = __floatsisf(*(int *)(this + 0x110) * 0x30 + -0x1c1);
      cocos2d::CCPoint::CCPoint
                ((CCPoint *)&local_68,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
      vDrawImage(pCVar2,(char *)(DAT_000e32e0 + 0xe2f46),local_68,local_64,0x13);
      *(int *)(this + 0x110) = *(int *)(this + 0x110) + 1;
    }
    iVar11 = iVar11 + 1;
    if (iVar11 == 8) {
      if (*piVar13 + DAT_000e32e4 != 0) {
        piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e32e8 + 0xe2f6e));
        pcVar12 = *(code **)(*piVar1 + 0x74);
        cocos2d::CCPoint::CCPoint(aCStack_60,extraout_s0,extraout_s1);
        (*pcVar12)(piVar1,aCStack_60);
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        piVar3 = (int *)cocos2d::CCNode::getChildByTag
                                  (pCVar2,*(char *)(*piVar13 + *piVar10 + DAT_000e32ec + 4) + 0xc);
        (**(code **)(*piVar3 + 0xcc))(piVar3,piVar1,3,3);
      }
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,1000);
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,0xd);
      iVar11 = 0xd;
      uVar4 = (**(code **)(*piVar3 + 0x38))();
      (*pcVar12)(piVar1,uVar4);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e32f0 + 0xe2fec));
      piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e32f4 + 0xe2ff6));
      do {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        iVar5 = cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
        if (iVar5 != 0) {
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar6 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          puVar9 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
          uVar4 = *puVar9;
          pCVar7 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
          piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
          pcVar12 = *(code **)(*piVar6 + 0x74);
          cocos2d::CCPoint::CCPoint(aCStack_58,extraout_s0_00,extraout_s1_00);
          (*pcVar12)(piVar6,aCStack_58);
          pcVar12 = *(code **)(*piVar6 + 0x3c);
          puVar9 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
          uVar14 = __subsf3(uVar4,*puVar9);
          cocos2d::CCPoint::CCPoint(aCStack_50,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar12)(piVar6,aCStack_50);
          (**(code **)(*piVar6 + 0x6c))(piVar6,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          (**(code **)(*piVar8 + 0xcc))(piVar8,piVar6,0,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,0);
          upAction(this,pCVar2);
          pCVar7 = (CCTexture2D *)(**(code **)(*piVar3 + 0x118))(piVar3);
          piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
          pcVar12 = *(code **)(*piVar6 + 0x74);
          cocos2d::CCPoint::CCPoint(aCStack_48,extraout_s0_01,extraout_s1_01);
          (*pcVar12)(piVar6,aCStack_48);
          pcVar12 = *(code **)(*piVar6 + 0x3c);
          puVar9 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
          uVar14 = __subsf3(uVar4,*puVar9);
          cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar12)(piVar6,aCStack_40);
          (**(code **)(*piVar6 + 0x6c))(piVar6,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          piVar8 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          (**(code **)(*piVar8 + 0xcc))(piVar8,piVar6,1,1);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
          pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
          DownAction(this,pCVar2);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 != 0x15);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x138) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_38,extraout_s0_02,extraout_s1_02);
      (*pcVar12)(piVar1,aCStack_38);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x138),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x138),0);
      Draw_Number::SetNumber
                (*(Draw_Number **)(this + 0x138),
                 *(int *)(*piVar13 + (*piVar10 + DAT_000e3304) * 4 + 4),2);
      piVar1 = (int *)Draw_Number::node();
      *(int **)(this + 0x13c) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_30,extraout_s0_03,extraout_s1_03);
      (*pcVar12)(piVar1,aCStack_30);
      (**(code **)(*(int *)this + 0xcc))(this,*(undefined4 *)(this + 0x13c),3,3);
      Draw_Number::SetNumberFont(*(Draw_Number **)(this + 0x13c),0);
      Draw_Number::SetNumber(*(Draw_Number **)(this + 0x13c),*(int *)(*piVar13 + DAT_000e32ec),2);
      piVar1 = (int *)InventoryLayer::node();
      *(int **)(this + 0x128) = piVar1;
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0_04,extraout_s1_04);
      (*pcVar12)(piVar1,aCStack_28);
      (**(code **)(*(int *)this + 0xcc))
                (this,*(undefined4 *)(this + 0x128),DAT_000e3314,DAT_000e3314);
      iVar11 = 6;
      do {
        pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
        piVar1 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,iVar11);
        iVar11 = iVar11 + 1;
        (**(code **)(*piVar1 + 0x6c))(piVar1,0);
      } while (iVar11 != 10);
      piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000e3318 + 0xe322c));
      pcVar12 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_20,extraout_s0_05,extraout_s1_05);
      (*pcVar12)(piVar1,aCStack_20);
      (**(code **)(*(int *)this + 0xcc))(this,piVar1,0x3dc,0x3dc);
      piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e3314);
      iVar11 = *(int *)((*piVar10 + DAT_000e3324) * 4 + *piVar13);
      if (iVar11 != 100) {
        __divsi3(iVar11,5);
      }
      iVar11 = DAT_000e332c;
      puVar9 = (undefined4 *)(**(code **)(*piVar1 + 0x38))(piVar1);
      uVar14 = __extendsfdf2(*puVar9);
      iVar5 = (**(code **)(*piVar1 + 0x38))(piVar1);
      uVar15 = __extendsfdf2(*(undefined4 *)(iVar5 + 4));
      uVar4 = (undefined4)((ulonglong)uVar15 >> 0x20);
                    /* WARNING: Subroutine does not return */
      cocos2d::CCLog((char *)(iVar11 + 0xe32ae),uVar4,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),
                     (int)uVar15,uVar4);
    }
  } while( true );
}


