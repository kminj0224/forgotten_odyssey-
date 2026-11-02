/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c8e30  Symbol: SetNumber */

/* Draw_Number::SetNumber(int, cocos2d::CCTextAlignment) */

void __thiscall Draw_Number::SetNumber(Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  CCTexture2D *pCVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined4 extraout_s0;
  undefined8 uVar12;
  undefined4 extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float extraout_s2_06;
  float extraout_s2_07;
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
  float fVar14;
  int local_cc;
  int local_c8;
  undefined4 local_b8;
  undefined4 local_ac;
  CCPoint aCStack_a8 [8];
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
  
  piVar5 = *(int **)(DAT_000c9170 + 0xc8e3c);
  local_1c = *piVar5;
  iVar8 = 0;
  do {
    pcVar6 = *(code **)(*(int *)this + 0xd0);
    uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
    iVar8 = iVar8 + 1;
    (*pcVar6)(this,uVar1,1);
  } while (iVar8 != 10);
  if (*(int *)(this + 0x114) != 0) {
    memset(local_28,0,10);
    sprintf((char *)local_28,(char *)(DAT_000c9174 + 0xc8e84),param_1);
    cocos2d::CCTexture2D::getContentSize();
    uVar1 = __divsf3(local_b8,DAT_000c9178);
    *(undefined4 *)(this + 0x118) = uVar1;
    uVar12 = cocos2d::CCTexture2D::getContentSize();
    *(undefined4 *)(this + 0x11c) = local_ac;
    if (param_2 == 0) {
      iVar8 = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if (local_28[iVar8] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar1 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_78,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_78);
          pcVar6 = *(code **)(*(int *)this + 0xcc);
        }
        else {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[iVar8] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar7);
          uVar1 = *(undefined4 *)(this + 0x11c);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_88,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_88);
          pcVar6 = *(code **)(*piVar2 + 0x3c);
          uVar7 = __floatsisf(iVar8);
          __mulsf3(uVar7,*(undefined4 *)(this + 0x118));
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar6)(piVar2,aCStack_a8);
          pcVar6 = *(code **)(*(int *)this + 0xcc);
        }
        iVar9 = iVar8 + 1;
        uVar12 = (*pcVar6)(this,piVar2,iVar8,iVar8,uVar1);
        iVar8 = iVar9;
        fVar13 = extraout_s2_01;
        fVar14 = extraout_s3_01;
      } while (iVar9 != 10);
    }
    else if (param_2 == 1) {
      iVar8 = 0;
      local_cc = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if (local_28[iVar8] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar7 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_58,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_58);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar8,iVar8,uVar7);
          fVar13 = extraout_s2_04;
          fVar14 = extraout_s3_04;
        }
        else {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[iVar8] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar7);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_68,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_02,extraout_s3_02);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_68);
          pcVar6 = *(code **)(*piVar2 + 0x3c);
          uVar1 = __floatsisf(iVar8);
          __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar6)(piVar2,aCStack_a0);
          (**(code **)(*(int *)this + 0xcc))(this,piVar2,iVar8,iVar8);
          uVar1 = __floatsisf(local_cc);
          __addsf3(uVar1,*(undefined4 *)(this + 0x118));
          local_cc = __fixsfsi();
          uVar12 = CONCAT44(extraout_s1,extraout_s0);
          fVar13 = extraout_s2_03;
          fVar14 = extraout_s3_03;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 10);
      iVar8 = 0;
      do {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
        if (piVar2 != (int *)0x0) {
          pcVar6 = *(code **)(*piVar2 + 0x3c);
          puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar10 = *(undefined4 *)(this + 0x118);
          uVar1 = __mulsf3(*puVar3,0x3f000000);
          uVar7 = __floatsisf(iVar8);
          uVar7 = __mulsf3(uVar7,uVar10);
          uVar1 = __addsf3(uVar1,uVar7);
          uVar7 = __floatsisf(local_cc);
          uVar7 = __subsf3(uVar7,uVar10);
          uVar7 = __mulsf3(uVar7,0x3f000000);
          __subsf3(uVar1,uVar7);
          uVar12 = (**(code **)(*piVar2 + 0x38))(piVar2);
          cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar6)(piVar2,aCStack_98);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != 10);
    }
    else {
      local_cc = 9;
      local_c8 = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if (local_28[local_cc] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar7 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_38,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_38);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,local_cc,local_cc,uVar7);
          fVar13 = extraout_s2_07;
          fVar14 = extraout_s3_07;
        }
        else {
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[local_cc] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar7);
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_48,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_05,extraout_s3_05);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_48);
          pcVar6 = *(code **)(*piVar2 + 0x3c);
          puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar1 = __floatsisf(local_c8);
          uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          __subsf3(*puVar3,uVar1);
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar6)(piVar2,aCStack_90);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_cc,local_cc);
          local_c8 = local_c8 + 1;
          fVar13 = extraout_s2_06;
          fVar14 = extraout_s3_06;
        }
        bVar11 = local_cc != 0;
        local_cc = local_cc + -1;
      } while (bVar11);
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


