/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c9f84  Symbol: SetNumber */

/* N_Draw_Number::SetNumber(int, cocos2d::CCTextAlignment) */

void __thiscall N_Draw_Number::SetNumber(N_Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  undefined4 uVar1;
  int *piVar2;
  CCTexture2D *pCVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  bool bVar10;
  undefined4 extraout_s0;
  undefined8 uVar11;
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
  float fVar12;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float extraout_s3_06;
  float extraout_s3_07;
  float fVar13;
  int local_d0;
  int local_cc;
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
  
  piVar5 = *(int **)(DAT_000ca27c + 0xc9f90);
  local_1c = *piVar5;
  iVar6 = 10;
  do {
    iVar6 = iVar6 + -1;
    (**(code **)(*(int *)this + 0xd4))(this,1);
  } while (iVar6 != 0);
  if (*(int *)(this + 0x114) != 0) {
    memset(local_28,0,10);
    sprintf((char *)local_28,(char *)(DAT_000ca280 + 0xc9fd0),param_1);
    if ((this[0x112] != (N_Draw_Number)0x0) && (local_28[8] == '\0')) {
      local_28[8] = '\0';
    }
    cocos2d::CCTexture2D::getContentSize();
    uVar1 = __divsf3(local_b8,DAT_000ca284);
    *(undefined4 *)(this + 0x118) = uVar1;
    uVar11 = cocos2d::CCTexture2D::getContentSize();
    *(undefined4 *)(this + 0x11c) = local_ac;
    if (param_2 == 0) {
      iVar6 = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if (local_28[iVar6] == 0) {
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          uVar1 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_78,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_78);
          pcVar8 = *(code **)(*(int *)this + 0xcc);
        }
        else {
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[iVar6] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar7);
          uVar1 = *(undefined4 *)(this + 0x11c);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_88,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_88);
          pcVar8 = *(code **)(*piVar2 + 0x3c);
          uVar7 = __floatsisf(iVar6);
          uVar11 = __mulsf3(uVar7,*(undefined4 *)(this + 0x118));
          cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar2,aCStack_a8);
          pcVar8 = *(code **)(*(int *)this + 0xcc);
        }
        iVar9 = iVar6 + 1;
        uVar11 = (*pcVar8)(this,piVar2,iVar6,iVar6,uVar1);
        iVar6 = iVar9;
        fVar12 = extraout_s2_01;
        fVar13 = extraout_s3_01;
      } while (iVar9 != 10);
    }
    else if (param_2 == 1) {
      iVar6 = 0;
      local_d0 = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if (local_28[iVar6] == 0) {
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          uVar7 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_58,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_58);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar6,iVar6,uVar7);
          fVar12 = extraout_s2_04;
          fVar13 = extraout_s3_04;
        }
        else {
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[iVar6] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar7);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_68,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_02,extraout_s3_02);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_68);
          pcVar8 = *(code **)(*piVar2 + 0x3c);
          uVar1 = __floatsisf(iVar6);
          uVar11 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          cocos2d::CCPoint::CCPoint(aCStack_a0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar2,aCStack_a0);
          (**(code **)(*(int *)this + 0xcc))(this,piVar2,iVar6,iVar6);
          uVar1 = __floatsisf(local_d0);
          __addsf3(uVar1,*(undefined4 *)(this + 0x118));
          local_d0 = __fixsfsi();
          uVar11 = CONCAT44(extraout_s1,extraout_s0);
          fVar12 = extraout_s2_03;
          fVar13 = extraout_s3_03;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
      iVar6 = 0;
      do {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
        if (piVar2 != (int *)0x0) {
          iVar9 = *piVar2;
          pcVar8 = *(code **)(iVar9 + 0x3c);
          uVar4 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(iVar6);
          uVar1 = __mulsf3(uVar1,uVar4);
          uVar7 = __floatsisf(local_d0);
          uVar7 = __subsf3(uVar7,uVar4);
          uVar7 = __mulsf3(uVar7,0x3f000000);
          __subsf3(uVar1,uVar7);
          uVar11 = (**(code **)(iVar9 + 0x38))(piVar2);
          cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar2,aCStack_98);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
    }
    else {
      local_d0 = 9;
      local_cc = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if (local_28[local_d0] == 0) {
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          uVar7 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_38,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_38);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,local_d0,local_d0,uVar7);
          fVar12 = extraout_s2_07;
          fVar13 = extraout_s3_07;
        }
        else {
          uVar7 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_28[local_d0] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar7);
          pCVar3 = *(CCTexture2D **)(this + 0x114);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_48,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_05,extraout_s3_05);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar3,aCStack_48);
          pcVar8 = *(code **)(*piVar2 + 0x3c);
          uVar1 = __floatsisf(local_cc);
          uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          uVar11 = __subsf3(0,uVar1);
          cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar2,aCStack_90);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_d0,local_d0);
          local_cc = local_cc + 1;
          fVar12 = extraout_s2_06;
          fVar13 = extraout_s3_06;
        }
        bVar10 = local_d0 != 0;
        local_d0 = local_d0 + -1;
      } while (bVar10);
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


