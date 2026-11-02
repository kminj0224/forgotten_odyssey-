/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ca508  Symbol: SetMoney */

/* N_Draw_Number::SetMoney(int, cocos2d::CCTextAlignment) */

void __thiscall N_Draw_Number::SetMoney(N_Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int *piVar3;
  CCTexture2D *pCVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  code *pcVar8;
  undefined4 uVar9;
  undefined4 uVar10;
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
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
  float extraout_s2_11;
  float extraout_s2_12;
  float extraout_s2_13;
  float extraout_s2_14;
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
  float extraout_s3_08;
  float extraout_s3_09;
  float extraout_s3_10;
  float extraout_s3_11;
  float extraout_s3_12;
  float extraout_s3_13;
  float extraout_s3_14;
  float fVar13;
  uint local_128;
  int local_124;
  uint local_120;
  undefined4 local_11c;
  int local_114;
  undefined4 local_108;
  undefined4 local_fc;
  CCPoint aCStack_f8 [8];
  CCPoint aCStack_f0 [8];
  CCPoint aCStack_e8 [8];
  CCPoint aCStack_e0 [8];
  CCPoint aCStack_d8 [8];
  CCPoint aCStack_d0 [8];
  CCPoint aCStack_c8 [8];
  CCRect aCStack_c0 [4];
  CCRect aCStack_b0 [4];
  CCRect aCStack_a0 [4];
  CCRect aCStack_90 [4];
  CCRect aCStack_80 [4];
  CCRect aCStack_70 [4];
  CCRect aCStack_60 [4];
  CCRect aCStack_50 [4];
  CCRect aCStack_40 [4];
  byte local_30 [20];
  int local_1c;
  
  piVar6 = *(int **)(DAT_000ca7d0 + 0xca514);
  local_1c = *piVar6;
  if (*(int *)(this + 0x114) != 0) {
    memset(local_30,0,0x14);
    sprintf((char *)local_30,(char *)(DAT_000ca7d4 + 0xca53e),param_1);
    iVar7 = 0;
    local_114 = 0;
    local_120 = 0;
    do {
      local_120 = local_120 + (local_30[iVar7] != 0);
      iVar5 = local_114 + 1;
      if (local_120 != iVar5 * 3 &&
          (int)(local_120 + iVar5 * -3) < 0 == SBORROW4(local_120,iVar5 * 3)) {
        local_114 = iVar5;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x14);
    cocos2d::CCTexture2D::getContentSize();
    uVar1 = __divsf3(local_108,DAT_000ca7d8);
    *(undefined4 *)(this + 0x118) = uVar1;
    uVar11 = cocos2d::CCTexture2D::getContentSize();
    *(undefined4 *)(this + 0x11c) = local_fc;
    if (param_2 == 0) {
      iVar7 = 0;
      local_128 = 0;
      local_124 = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if ((local_128 - local_124 == local_120 + (local_124 - local_114) * 3) &&
           (((((int)local_128 >> 0x1f) - ((int)local_120 >> 0x1f)) + (uint)(local_120 <= local_128)
            & 0xff) == 0)) {
          if (local_30[iVar7] != 0) {
            pCVar4 = *(CCTexture2D **)(this + 0x114);
            uVar11 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000ca7dc);
            cocos2d::CCRect::CCRect
                      ((CCRect *)aCStack_a0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                       extraout_s2_03,extraout_s3_03);
            piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_a0);
            pcVar8 = *(code **)(*piVar3 + 0x3c);
            uVar1 = __floatsisf(iVar7);
            uVar10 = __subsf3(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x120));
            uVar11 = __mulsf3(uVar1,uVar10);
            cocos2d::CCPoint::CCPoint(aCStack_f0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
            (*pcVar8)(piVar3,aCStack_f0);
            uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
            local_128 = local_128 + 1;
            local_124 = local_124 + 1;
            fVar12 = extraout_s2_04;
            fVar13 = extraout_s3_04;
          }
        }
        else if (local_30[iVar7 - local_124] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_b0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_b0);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar7,iVar7,uVar10);
          fVar12 = extraout_s2_02;
          fVar13 = extraout_s3_02;
        }
        else {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[iVar7 - local_124] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar10);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_c0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_c0);
          pcVar8 = *(code **)(*piVar3 + 0x3c);
          uVar1 = __floatsisf(iVar7);
          uVar10 = __subsf3(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x120));
          uVar11 = __mulsf3(uVar1,uVar10);
          cocos2d::CCPoint::CCPoint(aCStack_f8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar3,aCStack_f8);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
          local_128 = local_128 + 1;
          fVar12 = extraout_s2_01;
          fVar13 = extraout_s3_01;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 0x14);
    }
    else if (param_2 == 1) {
      iVar7 = 0;
      local_11c = 0;
      local_124 = 0;
      local_128 = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if ((local_128 - local_124 == local_120 + (local_124 - local_114) * 3) &&
           (((((int)local_128 >> 0x1f) - ((int)local_120 >> 0x1f)) + (uint)(local_120 <= local_128)
            & 0xff) == 0)) {
          if (local_30[iVar7] != 0) {
            pCVar4 = *(CCTexture2D **)(this + 0x114);
            uVar11 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000caa44);
            cocos2d::CCRect::CCRect
                      ((CCRect *)aCStack_70,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                       extraout_s2_08,extraout_s3_08);
            piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_70);
            pcVar8 = *(code **)(*piVar3 + 0x3c);
            uVar1 = __floatsisf(iVar7);
            uVar10 = __subsf3(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x120));
            uVar11 = __mulsf3(uVar1,uVar10);
            cocos2d::CCPoint::CCPoint(aCStack_e0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
            (*pcVar8)(piVar3,aCStack_e0);
            uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
            local_128 = local_128 + 1;
            local_124 = local_124 + 1;
            fVar12 = extraout_s2_09;
            fVar13 = extraout_s3_09;
          }
        }
        else if (local_30[iVar7] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_80,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_80);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar7,iVar7,uVar10);
          fVar12 = extraout_s2_07;
          fVar13 = extraout_s3_07;
        }
        else {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[iVar7] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar10);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_90,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_05,extraout_s3_05);
          piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_90);
          pcVar8 = *(code **)(*piVar3 + 0x3c);
          uVar1 = __floatsisf(iVar7);
          uVar11 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          cocos2d::CCPoint::CCPoint(aCStack_e8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar3,aCStack_e8);
          (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
          uVar1 = __floatsisf(local_11c);
          __addsf3(uVar1,*(undefined4 *)(this + 0x118));
          local_11c = __fixsfsi();
          uVar11 = CONCAT44(extraout_s1,extraout_s0);
          local_128 = local_128 + 1;
          fVar12 = extraout_s2_06;
          fVar13 = extraout_s3_06;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
      iVar7 = 0;
      do {
        piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
        if (piVar3 != (int *)0x0) {
          pcVar8 = *(code **)(*piVar3 + 0x3c);
          puVar2 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar9 = *(undefined4 *)(this + 0x118);
          uVar1 = __mulsf3(*puVar2,0x3f000000);
          uVar10 = __floatsisf(iVar7);
          uVar10 = __mulsf3(uVar10,uVar9);
          uVar1 = __addsf3(uVar1,uVar10);
          uVar10 = __floatsisf(local_11c);
          uVar10 = __subsf3(uVar10,uVar9);
          uVar10 = __mulsf3(uVar10,0x3f000000);
          __subsf3(uVar1,uVar10);
          uVar11 = (**(code **)(*piVar3 + 0x38))(piVar3);
          cocos2d::CCPoint::CCPoint(aCStack_d8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar3,aCStack_d8);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 10);
    }
    else {
      iVar7 = 9;
      local_128 = 0;
      local_120 = 0;
      fVar12 = extraout_s2;
      fVar13 = extraout_s3;
      do {
        if (local_120 - local_128 == (local_128 + 1) * 3) {
          if (local_30[iVar7] != 0) {
            pCVar4 = *(CCTexture2D **)(this + 0x114);
            uVar11 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000caa44);
            cocos2d::CCRect::CCRect
                      ((CCRect *)aCStack_40,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                       extraout_s2_13,extraout_s3_13);
            piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_40);
            pcVar8 = *(code **)(*piVar3 + 0x3c);
            uVar1 = __floatsisf(local_120);
            uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
            uVar11 = __subsf3(0,uVar1);
            cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
            (*pcVar8)(piVar3,aCStack_c8);
            uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
            iVar7 = iVar7 + 1;
            local_120 = local_120 + 1;
            fVar12 = extraout_s2_14;
            fVar13 = extraout_s3_14;
            local_128 = local_128 + 1;
          }
        }
        else if (local_30[iVar7] == 0) {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_50,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),fVar12,
                     fVar13);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_50);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar7,iVar7,uVar10);
          fVar12 = extraout_s2_12;
          fVar13 = extraout_s3_12;
        }
        else {
          pCVar4 = *(CCTexture2D **)(this + 0x114);
          uVar10 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[iVar7] - 0x30);
          uVar11 = __mulsf3(uVar1,uVar10);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_60,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20),
                     extraout_s2_10,extraout_s3_10);
          piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar4,aCStack_60);
          pcVar8 = *(code **)(*piVar3 + 0x3c);
          uVar1 = __floatsisf(local_120);
          uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          uVar11 = __subsf3(0,uVar1);
          cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar11,(float)((ulonglong)uVar11 >> 0x20));
          (*pcVar8)(piVar3,aCStack_d0);
          uVar11 = (**(code **)(*(int *)this + 0xcc))(this,piVar3,iVar7,iVar7);
          local_120 = local_120 + 1;
          fVar12 = extraout_s2_11;
          fVar13 = extraout_s3_11;
        }
        iVar7 = iVar7 + -1;
      } while (-1 < iVar7);
    }
  }
  if (local_1c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


