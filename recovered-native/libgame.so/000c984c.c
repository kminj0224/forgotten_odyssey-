/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c984c  Symbol: SetMoney_Re */

/* Draw_Number::SetMoney_Re(int, cocos2d::CCTextAlignment) */

void __thiscall Draw_Number::SetMoney_Re(Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  byte bVar1;
  CCSprite *pCVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  CCTexture2D *pCVar13;
  bool bVar14;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined8 uVar15;
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
  float fVar16;
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
  float fVar17;
  uint local_e4;
  int local_dc;
  int local_d0;
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
  
  piVar9 = *(int **)(DAT_000c9bfc + 0xc9858);
  local_1c = *piVar9;
  memset(local_30,0,0x14);
  sprintf((char *)local_30,(char *)(DAT_000c9c00 + 0xc9874),param_1);
  uVar15 = CONCAT44(extraout_s1,extraout_s0);
  iVar7 = 0;
  local_d0 = 0;
  local_e4 = 0;
  do {
    local_e4 = local_e4 + (local_30[iVar7] != 0);
    iVar6 = local_d0 + 1;
    if (local_e4 != iVar6 * 3 && (int)(local_e4 + iVar6 * -3) < 0 == SBORROW4(local_e4,iVar6 * 3)) {
      local_d0 = iVar6;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x14);
  if (param_2 == 0) {
    iVar7 = 0;
    uVar11 = 0;
    local_dc = 0;
    do {
      if ((uVar11 - local_dc == local_e4 + (local_dc - local_d0) * 3) &&
         (((((int)uVar11 >> 0x1f) - ((int)local_e4 >> 0x1f)) + (uint)(local_e4 <= uVar11) & 0xff) ==
          0)) {
        if (local_30[iVar7] != 0) {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          uVar15 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000c9c04);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_80,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),
                     extraout_s2_02,extraout_s3_02);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_80);
          piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          pcVar8 = *(code **)(*piVar4 + 0x3c);
          uVar11 = uVar11 + 1;
          uVar3 = __floatsisf(iVar7);
          uVar10 = __subsf3(*(undefined4 *)(this + 0x118),0x3f800000);
          __mulsf3(uVar3,uVar10);
          uVar15 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
          (*pcVar8)(piVar4,aCStack_c0);
          local_dc = local_dc + 1;
        }
      }
      else {
        bVar1 = local_30[iVar7 - local_dc];
        if (bVar1 == 0) {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_90,extraout_s0_00,extraout_s1_00,extraout_s2_01,
                     extraout_s3_01);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_90);
        }
        else {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          uVar3 = *(undefined4 *)(this + 0x118);
          uVar11 = uVar11 + 1;
          uVar10 = __floatsisf(bVar1 - 0x30);
          uVar15 = __mulsf3(uVar10,uVar3);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_a0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_a0);
          piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
          pcVar8 = *(code **)(*piVar4 + 0x3c);
          uVar3 = __floatsisf(iVar7);
          uVar10 = __subsf3(*(undefined4 *)(this + 0x118),0x3f800000);
          __mulsf3(uVar3,uVar10);
          uVar15 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
          cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
          (*pcVar8)(piVar4,aCStack_c8);
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 0x14);
  }
  else if (param_2 == 1) {
    iVar7 = 0;
    local_e4 = 0;
    fVar16 = extraout_s2;
    fVar17 = extraout_s3;
    do {
      if (local_30[iVar7] == 0) {
        pCVar13 = *(CCTexture2D **)(this + 0x114);
        uVar10 = 0;
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_60,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),fVar16,
                   fVar17);
        uVar3 = cocos2d::CCSprite::spriteWithTexture(pCVar13,aCStack_60);
        uVar15 = (**(code **)(*(int *)this + 0xcc))(this,uVar3,iVar7,iVar7,uVar10);
        fVar16 = extraout_s2_05;
        fVar17 = extraout_s3_05;
      }
      else {
        pCVar13 = *(CCTexture2D **)(this + 0x114);
        uVar10 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(local_30[iVar7] - 0x30);
        uVar15 = __mulsf3(uVar3,uVar10);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_70,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),
                   extraout_s2_03,extraout_s3_03);
        piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar13,aCStack_70);
        pcVar8 = *(code **)(*piVar4 + 0x3c);
        uVar3 = __floatsisf(iVar7);
        __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        uVar15 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
        (*pcVar8)(piVar4,aCStack_b8);
        (**(code **)(*(int *)this + 0xcc))(this,piVar4,iVar7,iVar7);
        uVar3 = __floatsisf(local_e4);
        __addsf3(uVar3,*(undefined4 *)(this + 0x118));
        local_e4 = __fixsfsi();
        uVar15 = CONCAT44(extraout_s1_01,extraout_s0_01);
        fVar16 = extraout_s2_04;
        fVar17 = extraout_s3_04;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 10);
    iVar7 = 0;
    do {
      piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar7);
      if (piVar4 != (int *)0x0) {
        pcVar8 = *(code **)(*piVar4 + 0x3c);
        puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
        uVar12 = *(undefined4 *)(this + 0x118);
        uVar3 = __mulsf3(*puVar5,0x3f000000);
        uVar10 = __floatsisf(iVar7);
        uVar10 = __mulsf3(uVar10,uVar12);
        uVar3 = __addsf3(uVar3,uVar10);
        uVar10 = __floatsisf(local_e4);
        uVar10 = __subsf3(uVar10,uVar12);
        uVar10 = __mulsf3(uVar10,0x3f000000);
        __subsf3(uVar3,uVar10);
        uVar15 = (**(code **)(*piVar4 + 0x38))(piVar4);
        cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
        (*pcVar8)(piVar4,aCStack_b0);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 != 10);
  }
  else {
    local_e4 = 9;
    local_dc = 0;
    fVar16 = extraout_s2;
    fVar17 = extraout_s3;
    do {
      if (local_30[local_e4] == 0) {
        pCVar13 = *(CCTexture2D **)(this + 0x114);
        uVar10 = 0;
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_40,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),fVar16,
                   fVar17);
        uVar3 = cocos2d::CCSprite::spriteWithTexture(pCVar13,aCStack_40);
        uVar15 = (**(code **)(*(int *)this + 0xcc))(this,uVar3,local_e4,local_e4,uVar10);
        fVar16 = extraout_s2_08;
        fVar17 = extraout_s3_08;
      }
      else {
        uVar10 = *(undefined4 *)(this + 0x118);
        uVar3 = __floatsisf(local_30[local_e4] - 0x30);
        uVar15 = __mulsf3(uVar3,uVar10);
        pCVar13 = *(CCTexture2D **)(this + 0x114);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_50,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20),
                   extraout_s2_06,extraout_s3_06);
        piVar4 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar13,aCStack_50);
        pcVar8 = *(code **)(*piVar4 + 0x3c);
        puVar5 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
        uVar3 = __floatsisf(local_dc);
        uVar3 = __mulsf3(uVar3,*(undefined4 *)(this + 0x118));
        __subsf3(*puVar5,uVar3);
        uVar15 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
        (*pcVar8)(piVar4,aCStack_a8);
        uVar15 = (**(code **)(*(int *)this + 0xcc))(this,piVar4,local_e4,local_e4);
        local_dc = local_dc + 1;
        fVar16 = extraout_s2_07;
        fVar17 = extraout_s3_07;
      }
      bVar14 = local_e4 != 0;
      local_e4 = local_e4 + -1;
    } while (bVar14);
  }
  if (local_1c == *piVar9) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


