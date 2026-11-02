/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011a5d8  Symbol: KG_BG_Hero_Move */

/* KG_BG_Hero_Move(cocos2d::CCNode*, cocos2d::CCPoint) */

void KG_BG_Hero_Move(CCNode *param_1,CCPoint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  CCNode *pCVar4;
  int *this;
  int *this_00;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int **ppiVar8;
  int *piVar9;
  undefined4 *puVar10;
  code *pcVar11;
  undefined8 uVar12;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s2_08;
  float extraout_s2_09;
  float fVar13;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float extraout_s3_08;
  float extraout_s3_09;
  float fVar14;
  undefined8 uVar15;
  undefined4 local_c8 [2];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCRect aCStack_a8 [4];
  CCRect aCStack_98 [4];
  CCRect aCStack_88 [4];
  CCRect aCStack_78 [4];
  CCRect aCStack_68 [4];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [4];
  CCRect aCStack_38 [4];
  CCRect aCStack_28 [5];
  
  iVar1 = BG_STOP(***(int ***)(DAT_0011a8f8 + 0x11a5e4));
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(param_1,0);
  puVar7 = (undefined4 *)(DAT_0011a8fc + 0x11a60a);
  (**(code **)(*piVar2 + 0xa8))();
  ppiVar8 = (int **)*puVar7;
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar8,1);
  iVar3 = (**(code **)(*piVar2 + 0xa8))();
  piVar9 = *ppiVar8;
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,6);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
  this = (int *)cocos2d::CCNode::getChildByTag(pCVar4,4);
  pCVar4 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
  this_00 = (int *)cocos2d::CCNode::getChildByTag(pCVar4,2);
  (**(code **)(*this + 0x7c))(this);
  puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
  __addsf3(*puVar7,param_2);
  uVar12 = (**(code **)(*piVar9 + 0x38))(piVar9);
  cocos2d::CCPoint::CCPoint((CCPoint *)local_c8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  iVar1 = DAT_0011a900;
  puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
  puVar10 = *(undefined4 **)(iVar1 + 0x11a694);
  uVar5 = __mulsf3(*puVar10,0x3f000000);
  uVar5 = __subsf3(local_c8[0],uVar5);
  uVar5 = __subsf3(*puVar7,uVar5);
  iVar1 = __aeabi_fcmple(uVar5,0);
  if (iVar1 != 0) {
    puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
    uVar5 = __mulsf3(*puVar10,0x3f000000);
    uVar5 = __subsf3(local_c8[0],uVar5);
    uVar5 = __subsf3(*puVar7,uVar5);
    iVar1 = __aeabi_fcmpge(uVar5,0xc4000000);
    if (iVar1 != 0) {
      pcVar11 = *(code **)(*piVar9 + 0x3c);
      puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
      uVar5 = __mulsf3(*puVar10,0x3f000000);
      uVar5 = __subsf3(local_c8[0],uVar5);
      __subsf3(*puVar7,uVar5);
      uVar12 = (**(code **)(*piVar9 + 0x38))(piVar9);
      cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar11)(piVar9,aCStack_c0);
      uVar12 = __extendsfdf2(this_00[0x4b]);
      uVar5 = __mulsf3(*puVar10,0x3f000000);
      __subsf3(local_c8[0],uVar5);
      uVar15 = __extendsfdf2();
      uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_0011a8e8,DAT_0011a8ec);
      __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar15,
               (int)((ulonglong)uVar15 >> 0x20));
      __truncdfsf2();
      (**(code **)(*this_00 + 0x7c))(this_00);
      uVar12 = (**(code **)(*this_00 + 0x7c))(this_00);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_a8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),extraout_s2,
                 extraout_s3);
      cocos2d::CCSprite::setTextureRect((CCSprite *)this_00,aCStack_a8);
      if (piVar2 != (int *)0x0) {
        uVar12 = __extendsfdf2(piVar2[0x4b]);
        uVar5 = __mulsf3(*puVar10,0x3f000000);
        __subsf3(local_c8[0],uVar5);
        uVar15 = __extendsfdf2();
        uVar15 = __muldf3((int)uVar15,(int)((ulonglong)uVar15 >> 0x20),DAT_0011a8f0,DAT_0011a8f4);
        __adddf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),(int)uVar15,
                 (int)((ulonglong)uVar15 >> 0x20));
        __truncdfsf2();
        (**(code **)(*piVar2 + 0x7c))(piVar2);
        uVar12 = (**(code **)(*piVar2 + 0x7c))(piVar2);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_98,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                   extraout_s2_00,extraout_s3_00);
        cocos2d::CCSprite::setTextureRect((CCSprite *)piVar2,aCStack_98);
      }
      uVar5 = __mulsf3(*puVar10,0x3f000000);
      uVar5 = __subsf3(local_c8[0],uVar5);
      uVar12 = __addsf3(uVar5,this[0x4b]);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_88,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                 extraout_s2_01,extraout_s3_01);
      cocos2d::CCSprite::setTextureRect((CCSprite *)this,aCStack_88);
      uVar5 = 0x3f800000;
      iVar1 = *(int *)(iVar3 + 4) + 4;
      goto LAB_0011a9ce;
    }
  }
  puVar7 = (undefined4 *)(**(code **)(*piVar9 + 0x38))(piVar9);
  uVar5 = __mulsf3(*puVar10,0x3f000000);
  uVar5 = __subsf3(local_c8[0],uVar5);
  uVar5 = __subsf3(*puVar7,uVar5);
  iVar1 = __aeabi_fcmpgt(uVar5,0xc4000000);
  iVar6 = *piVar9;
  if (iVar1 == 0) {
    puVar7 = (undefined4 *)(**(code **)(iVar6 + 0x38))(piVar9);
    uVar5 = __mulsf3(*puVar10,0x3f000000);
    uVar5 = __subsf3(local_c8[0],uVar5);
    uVar5 = __subsf3(*puVar7,uVar5);
    iVar1 = __aeabi_fcmplt(uVar5,0xc4000000);
    if (iVar1 == 0) {
      return;
    }
    pcVar11 = *(code **)(*piVar9 + 0x3c);
    uVar12 = (**(code **)(*piVar9 + 0x38))(piVar9);
    cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar11)(piVar9,aCStack_b0);
    (**(code **)(*this_00 + 0x7c))(this_00);
    uVar12 = (**(code **)(*this_00 + 0x7c))(this_00);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),extraout_s2_06,
               extraout_s3_06);
    uVar12 = cocos2d::CCSprite::setTextureRect((CCSprite *)this_00,aCStack_48);
    fVar13 = extraout_s2_07;
    fVar14 = extraout_s3_07;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar12 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                 extraout_s2_08,extraout_s3_08);
      uVar12 = cocos2d::CCSprite::setTextureRect((CCSprite *)piVar2,aCStack_38);
      fVar13 = extraout_s2_09;
      fVar14 = extraout_s3_09;
    }
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_28,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,fVar14);
    cocos2d::CCSprite::setTextureRect((CCSprite *)this,aCStack_28);
    uVar5 = 0x40000000;
    iVar1 = *(int *)(iVar3 + 4) + 4;
  }
  else {
    pcVar11 = *(code **)(iVar6 + 0x3c);
    uVar12 = (**(code **)(iVar6 + 0x38))(piVar9);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar11)(piVar9,aCStack_b8);
    (**(code **)(*this_00 + 0x7c))(this_00);
    uVar12 = (**(code **)(*this_00 + 0x7c))(this_00);
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_78,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),extraout_s2_02,
               extraout_s3_02);
    uVar12 = cocos2d::CCSprite::setTextureRect((CCSprite *)this_00,aCStack_78);
    fVar13 = extraout_s2_03;
    fVar14 = extraout_s3_03;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x7c))(piVar2);
      uVar12 = (**(code **)(*piVar2 + 0x7c))(piVar2);
      cocos2d::CCRect::CCRect
                ((CCRect *)aCStack_68,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                 extraout_s2_04,extraout_s3_04);
      uVar12 = cocos2d::CCSprite::setTextureRect((CCSprite *)piVar2,aCStack_68);
      fVar13 = extraout_s2_05;
      fVar14 = extraout_s3_05;
    }
    cocos2d::CCRect::CCRect
              ((CCRect *)aCStack_58,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,fVar14);
    cocos2d::CCSprite::setTextureRect((CCSprite *)this,aCStack_58);
    uVar5 = 0;
    iVar1 = *(int *)(iVar3 + 4) + 4;
  }
LAB_0011a9ce:
  *(undefined4 *)(iVar1 + 0x7c) = uVar5;
  return;
}


