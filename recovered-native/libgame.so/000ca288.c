/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ca288  Symbol: SetNumber_Re */

/* N_Draw_Number::SetNumber_Re(int, cocos2d::CCTextAlignment) */

void __thiscall N_Draw_Number::SetNumber_Re(N_Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  byte bVar1;
  CCSprite *pCVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined8 uVar12;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  int local_b0;
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCRect aCStack_88 [4];
  CCRect aCStack_78 [4];
  CCRect aCStack_68 [4];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [4];
  CCRect aCStack_38 [4];
  byte local_28 [12];
  int local_1c;
  
  piVar7 = *(int **)(DAT_000ca500 + 0xca294);
  local_1c = *piVar7;
  memset(local_28,0,10);
  sprintf((char *)local_28,(char *)(DAT_000ca504 + 0xca2b2),param_1);
  if ((this[0x112] != (N_Draw_Number)0x0) && (local_28[1] == 0)) {
    local_28[1] = local_28[0];
    local_28[0] = 0x30;
  }
  if (param_2 == 0) {
    iVar8 = 0;
    do {
      bVar1 = local_28[iVar8];
      if (bVar1 == 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_78,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_78);
      }
      else {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        uVar5 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar5);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_88,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),extraout_s2
                   ,extraout_s3);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_88);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        pcVar6 = *(code **)(*piVar4 + 0x3c);
        uVar3 = __floatsisf(iVar8);
        uVar12 = __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (*pcVar6)(piVar4,aCStack_a0);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
  }
  else if (param_2 == 1) {
    iVar8 = 0;
    local_b0 = 0;
    do {
      bVar1 = local_28[iVar8];
      if (bVar1 == 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_58,extraout_s0_00,extraout_s1_00,extraout_s2_02,extraout_s3_02)
        ;
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_58);
      }
      else {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        uVar5 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar5);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_68,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                   extraout_s2_01,extraout_s3_01);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_68);
        uVar3 = __floatsisf(local_b0);
        __addsf3(uVar3,*(undefined4 *)(this + 0x118));
        local_b0 = __fixsfsi();
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
    iVar8 = 0;
    do {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
      pcVar6 = *(code **)(*piVar4 + 0x3c);
      iVar9 = iVar8 + 1;
      uVar10 = *(undefined4 *)(this + 0x118);
      uVar3 = __floatsisf(iVar8);
      uVar3 = __mulsf3(uVar3,uVar10);
      uVar3 = __addsf3(uVar3,0);
      uVar5 = __floatsisf(local_b0);
      uVar5 = __subsf3(uVar5,uVar10);
      uVar5 = __mulsf3(uVar5,0x3f000000);
      uVar12 = __subsf3(uVar3,uVar5);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      (*pcVar6)(piVar4,aCStack_98);
      iVar8 = iVar9;
    } while (iVar9 != 10);
  }
  else {
    iVar8 = 9;
    local_b0 = 0;
    do {
      bVar1 = local_28[iVar8];
      if (bVar1 == 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_38,extraout_s0_01,extraout_s1_01,extraout_s2_04,extraout_s3_04)
        ;
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_38);
      }
      else {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        uVar5 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar5);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                   extraout_s2_03,extraout_s3_03);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_48);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        pcVar6 = *(code **)(*piVar4 + 0x3c);
        uVar3 = __floatsisf(local_b0);
        uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        uVar12 = __subsf3(0,uVar3);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (*pcVar6)(piVar4,aCStack_90);
        local_b0 = local_b0 + 1;
      }
      bVar11 = iVar8 != 0;
      iVar8 = iVar8 + -1;
    } while (bVar11);
  }
  if (local_1c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


