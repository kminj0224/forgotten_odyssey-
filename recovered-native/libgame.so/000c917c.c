/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c917c  Symbol: SetNumber_Re */

/* Draw_Number::SetNumber_Re(int, cocos2d::CCTextAlignment) */

void __thiscall Draw_Number::SetNumber_Re(Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  byte bVar1;
  CCSprite *pCVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  float extraout_s0;
  float extraout_s0_00;
  undefined8 uVar12;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  int local_a0;
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCRect aCStack_78 [4];
  CCRect aCStack_68 [4];
  CCRect aCStack_58 [4];
  CCRect aCStack_48 [4];
  CCRect aCStack_38 [4];
  byte local_28 [12];
  int local_1c;
  
  piVar8 = *(int **)(DAT_000c9404 + 0xc9188);
  local_1c = *piVar8;
  memset(local_28,0,10);
  sprintf((char *)local_28,(char *)(DAT_000c9408 + 0xc91a4),param_1);
  if (param_2 == 0) {
    do {
      bVar1 = local_28[param_2];
      if (bVar1 == 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,param_2);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_68,extraout_s0,extraout_s1,extraout_s2_00,extraout_s3_00);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_68);
      }
      else {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,param_2);
        uVar6 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar6);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_78,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),extraout_s2
                   ,extraout_s3);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_78);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,param_2);
        pcVar7 = *(code **)(*piVar4 + 0x3c);
        uVar3 = __floatsisf(param_2);
        __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (*pcVar7)(piVar4,aCStack_90);
      }
      param_2 = param_2 + 1;
    } while (param_2 != 10);
  }
  else if (param_2 == 1) {
    iVar9 = 0;
    local_a0 = 0;
    do {
      bVar1 = local_28[iVar9];
      if (bVar1 != 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
        uVar6 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar6);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_58,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                   extraout_s2_01,extraout_s3_01);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_58);
        uVar3 = __floatsisf(local_a0);
        __addsf3(uVar3,*(undefined4 *)(this + 0x118));
        local_a0 = __fixsfsi();
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != 10);
    iVar9 = 0;
    do {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
      pcVar7 = *(code **)(*piVar4 + 0x3c);
      puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
      uVar10 = *(undefined4 *)(this + 0x118);
      uVar3 = __mulsf3(*puVar5,0x3f000000);
      uVar6 = __floatsisf(iVar9);
      uVar6 = __mulsf3(uVar6,uVar10);
      uVar3 = __addsf3(uVar3,uVar6);
      uVar6 = __floatsisf(local_a0);
      uVar6 = __subsf3(uVar6,uVar10);
      uVar6 = __mulsf3(uVar6,0x3f000000);
      __subsf3(uVar3,uVar6);
      uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
      cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
      iVar9 = iVar9 + 1;
      (*pcVar7)(piVar4,aCStack_88);
    } while (iVar9 != 10);
  }
  else {
    iVar9 = 9;
    local_a0 = 0;
    do {
      bVar1 = local_28[iVar9];
      if (bVar1 == 0) {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_38,extraout_s0_00,extraout_s1_00,extraout_s2_03,extraout_s3_03)
        ;
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_38);
      }
      else {
        pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
        uVar6 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(bVar1 - 0x30);
        uVar12 = __mulsf3(uVar3,uVar6);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                   extraout_s2_02,extraout_s3_02);
        cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_48);
        piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
        pcVar7 = *(code **)(*piVar4 + 0x3c);
        puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
        uVar3 = __floatsisf(local_a0);
        uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        __subsf3(*puVar5,uVar3);
        uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
        (*pcVar7)(piVar4,aCStack_80);
        local_a0 = local_a0 + 1;
      }
      bVar11 = iVar9 != 0;
      iVar9 = iVar9 + -1;
    } while (bVar11);
  }
  if (local_1c == *piVar8) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


