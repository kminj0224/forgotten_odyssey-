/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011a3e8  Symbol: KG_BG_Move */

/* KG_BG_Move(cocos2d::CCNode*, cocos2d::CCPoint, cocos2d::CCPoint) */

void KG_BG_Move(CCNode *param_1,CCPoint param_2,CCPoint param_3)

{
  int iVar1;
  CCNode *pCVar2;
  int *this;
  int *this_00;
  int *this_01;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  code *pcVar7;
  int *piVar8;
  int **ppiVar9;
  int *piVar10;
  undefined8 uVar11;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  undefined8 uVar12;
  undefined8 uVar13;
  CCPoint aCStack_58 [8];
  CCRect aCStack_50 [4];
  CCRect aCStack_40 [4];
  CCRect aCStack_30 [5];
  
  iVar1 = BG_STOP(***(int ***)(DAT_0011a5c8 + 0x11a402));
  if (iVar1 != 0) {
    ppiVar9 = *(int ***)(DAT_0011a5cc + 0x11a41c);
    piVar8 = *ppiVar9;
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
    this = (int *)cocos2d::CCNode::getChildByTag(pCVar2,6);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
    this_00 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,4);
    pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(param_1,0);
    this_01 = (int *)cocos2d::CCNode::getChildByTag(pCVar2,2);
    iVar1 = (**(code **)(*this_00 + 0x7c))(this_00);
    uVar3 = *(undefined4 *)(iVar1 + 4);
    puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x38))(piVar8);
    uVar5 = __subsf3(in_r3,param_2);
    uVar6 = __subsf3(*puVar4,uVar5);
    iVar1 = __aeabi_fcmple(uVar6,DAT_0011a5d0);
    if (iVar1 != 0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x38))(piVar8);
      uVar6 = __subsf3(*puVar4,uVar5);
      iVar1 = __aeabi_fcmpge(uVar6,DAT_0011a5d4);
      if (iVar1 != 0) {
        piVar10 = *ppiVar9;
        pcVar7 = *(code **)(*piVar10 + 0x3c);
        puVar4 = (undefined4 *)(**(code **)(*piVar8 + 0x38))(piVar8);
        __subsf3(*puVar4,uVar5);
        uVar11 = (**(code **)(*piVar8 + 0x38))(piVar8);
        cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
        (*pcVar7)(piVar10,aCStack_58);
        uVar12 = __extendsfdf2(uVar5);
        uVar6 = (undefined4)((ulonglong)uVar12 >> 0x20);
        uVar11 = __extendsfdf2(this_01[0x4b]);
        uVar13 = __muldf3((int)uVar12,uVar6,DAT_0011a5b8,DAT_0011a5bc);
        __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar13,
                 (int)((ulonglong)uVar13 >> 0x20));
        __truncdfsf2();
        (**(code **)(*this_01 + 0x7c))(this_01);
        uVar11 = (**(code **)(*this_01 + 0x7c))(this_01);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_50,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),extraout_s2
                   ,extraout_s3);
        cocos2d::CCSprite::setTextureRect((CCSprite *)this_01,aCStack_50);
        uVar11 = __addsf3(uVar5,this_00[0x4b]);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_40,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                   extraout_s2_00,extraout_s3_00);
        cocos2d::CCSprite::setTextureRect((CCSprite *)this_00,aCStack_40);
        if (this != (int *)0x0) {
          uVar11 = __extendsfdf2(this[0x4b]);
          uVar12 = __muldf3((int)uVar12,uVar6,DAT_0011a5c0,DAT_0011a5c4,uVar3);
          __adddf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),(int)uVar12,
                   (int)((ulonglong)uVar12 >> 0x20));
          __truncdfsf2();
          (**(code **)(*this + 0x7c))(this);
          uVar11 = (**(code **)(*this + 0x7c))(this);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_30,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_01,extraout_s3_01);
          cocos2d::CCSprite::setTextureRect((CCSprite *)this,aCStack_30);
        }
      }
    }
  }
  return;
}


