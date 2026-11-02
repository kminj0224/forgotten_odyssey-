/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c940c  Symbol: SetMoney */

/* Draw_Number::SetMoney(int, cocos2d::CCTextAlignment) */

void __thiscall Draw_Number::SetMoney(Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  CCTexture2D *pCVar10;
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
  float extraout_s2_08;
  float extraout_s2_09;
  float extraout_s2_10;
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
  float extraout_s3_10;
  float fVar14;
  uint local_f4;
  uint local_f0;
  int local_ec;
  int local_e0;
  undefined4 local_d8;
  undefined4 local_cc;
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCRect aCStack_a0 [4];
  CCRect aCStack_90 [4];
  CCRect aCStack_80 [4];
  CCRect aCStack_70 [4];
  CCRect aCStack_60 [4];
  CCRect aCStack_50 [4];
  CCRect aCStack_40 [4];
  byte local_30 [20];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000c9760 + 0xc9418);
  local_1c = *piVar5;
  if (*(int *)(this + 0x114) != 0) {
    memset(local_30,0,0x14);
    sprintf((char *)local_30,(char *)(DAT_000c9764 + 0xc9442),param_1);
    iVar6 = 0;
    local_e0 = 0;
    local_f0 = 0;
    do {
      local_f0 = local_f0 + (local_30[iVar6] != 0);
      iVar4 = local_e0 + 1;
      if (local_f0 != iVar4 * 3 && (int)(local_f0 + iVar4 * -3) < 0 == SBORROW4(local_f0,iVar4 * 3))
      {
        local_e0 = iVar4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0x14);
    cocos2d::CCTexture2D::getContentSize();
    uVar1 = __divsf3(local_d8,DAT_000c9768);
    *(undefined4 *)(this + 0x118) = uVar1;
    uVar12 = cocos2d::CCTexture2D::getContentSize();
    *(undefined4 *)(this + 0x11c) = local_cc;
    if (param_2 == 0) {
      iVar6 = 0;
      local_f4 = 0;
      local_ec = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if ((local_f4 - local_ec == local_f0 + (local_ec - local_e0) * 3) &&
           (((((int)local_f4 >> 0x1f) - ((int)local_f0 >> 0x1f)) + (uint)(local_f0 <= local_f4) &
            0xff) == 0)) {
          if (local_30[iVar6] != 0) {
            pCVar10 = *(CCTexture2D **)(this + 0x114);
            uVar12 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000c976c);
            cocos2d::CCRect::CCRect
                      ((CCRect *)aCStack_80,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                       extraout_s2_03,extraout_s3_03);
            piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_80);
            pcVar7 = *(code **)(*piVar2 + 0x3c);
            uVar1 = __floatsisf(iVar6);
            uVar8 = __subsf3(*(undefined4 *)(this + 0x118),0x3f800000);
            __mulsf3(uVar1,uVar8);
            uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
            cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
            (*pcVar7)(piVar2,aCStack_c0);
            uVar12 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,iVar6,iVar6);
            local_f4 = local_f4 + 1;
            local_ec = local_ec + 1;
            fVar13 = extraout_s2_04;
            fVar14 = extraout_s3_04;
          }
        }
        else if (local_30[iVar6 - local_ec] == 0) {
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          uVar8 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_90,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_90);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar6,iVar6,uVar8);
          fVar13 = extraout_s2_02;
          fVar14 = extraout_s3_02;
        }
        else {
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          uVar8 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[iVar6 - local_ec] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar8);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_a0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_a0);
          pcVar7 = *(code **)(*piVar2 + 0x3c);
          uVar1 = __floatsisf(iVar6);
          uVar8 = __subsf3(*(undefined4 *)(this + 0x118),0x3f800000);
          __mulsf3(uVar1,uVar8);
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar7)(piVar2,aCStack_c8);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,iVar6,iVar6);
          local_f4 = local_f4 + 1;
          fVar13 = extraout_s2_01;
          fVar14 = extraout_s3_01;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 0x14);
    }
    else if (param_2 == 1) {
      iVar6 = 0;
      local_f4 = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if (local_30[iVar6] == 0) {
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          uVar8 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_60,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_60);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,iVar6,iVar6,uVar8);
          fVar13 = extraout_s2_07;
          fVar14 = extraout_s3_07;
        }
        else {
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          uVar8 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[iVar6] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar8);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_70,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_05,extraout_s3_05);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_70);
          pcVar7 = *(code **)(*piVar2 + 0x3c);
          uVar1 = __floatsisf(iVar6);
          __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar7)(piVar2,aCStack_b8);
          (**(code **)(*(int *)this + 0xcc))(this,piVar2,iVar6,iVar6);
          uVar1 = __floatsisf(local_f4);
          __addsf3(uVar1,*(undefined4 *)(this + 0x118));
          local_f4 = __fixsfsi();
          uVar12 = CONCAT44(extraout_s1,extraout_s0);
          fVar13 = extraout_s2_06;
          fVar14 = extraout_s3_06;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
      iVar6 = 0;
      do {
        piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar6);
        if (piVar2 != (int *)0x0) {
          pcVar7 = *(code **)(*piVar2 + 0x3c);
          puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar9 = *(undefined4 *)(this + 0x118);
          uVar1 = __mulsf3(*puVar3,0x3f000000);
          uVar8 = __floatsisf(iVar6);
          uVar8 = __mulsf3(uVar8,uVar9);
          uVar1 = __addsf3(uVar1,uVar8);
          uVar8 = __floatsisf(local_f4);
          uVar8 = __subsf3(uVar8,uVar9);
          uVar8 = __mulsf3(uVar8,0x3f000000);
          __subsf3(uVar1,uVar8);
          uVar12 = (**(code **)(*piVar2 + 0x38))(piVar2);
          cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar7)(piVar2,aCStack_b0);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 != 10);
    }
    else {
      local_f4 = 9;
      local_f0 = 0;
      fVar13 = extraout_s2;
      fVar14 = extraout_s3;
      do {
        if (local_30[local_f4] == 0) {
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          uVar8 = 0;
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_40,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),fVar13,
                     fVar14);
          uVar1 = cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_40);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,uVar1,local_f4,local_f4,uVar8);
          fVar13 = extraout_s2_10;
          fVar14 = extraout_s3_10;
        }
        else {
          uVar8 = *(undefined4 *)(this + 0x118);
          uVar1 = __floatsisf(local_30[local_f4] - 0x30);
          uVar12 = __mulsf3(uVar1,uVar8);
          pCVar10 = *(CCTexture2D **)(this + 0x114);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_50,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20),
                     extraout_s2_08,extraout_s3_08);
          piVar2 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10,aCStack_50);
          pcVar7 = *(code **)(*piVar2 + 0x3c);
          puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
          uVar1 = __floatsisf(local_f0);
          uVar1 = __mulsf3(uVar1,*(undefined4 *)(this + 0x118));
          __subsf3(*puVar3,uVar1);
          uVar12 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
          (*pcVar7)(piVar2,aCStack_a8);
          uVar12 = (**(code **)(*(int *)this + 0xcc))(this,piVar2,local_f4,local_f4);
          local_f0 = local_f0 + 1;
          fVar13 = extraout_s2_09;
          fVar14 = extraout_s3_09;
        }
        bVar11 = local_f4 != 0;
        local_f4 = local_f4 + -1;
      } while (bVar11);
    }
  }
  if (local_1c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


