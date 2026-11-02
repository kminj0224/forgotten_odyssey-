/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000caa48  Symbol: SetMoney_Re */

/* N_Draw_Number::SetMoney_Re(int, cocos2d::CCTextAlignment) */

void __thiscall N_Draw_Number::SetMoney_Re(N_Draw_Number *this,int param_1,CCTextAlignment param_2)

{
  byte bVar1;
  CCSprite *pCVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  CCTexture2D *pCVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 extraout_s0;
  float extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s1;
  float extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined8 uVar14;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float extraout_s2_02;
  float extraout_s2_03;
  float extraout_s2_04;
  float extraout_s2_05;
  float fVar15;
  float extraout_s2_06;
  float extraout_s2_07;
  float extraout_s3;
  float extraout_s3_00;
  float extraout_s3_01;
  float extraout_s3_02;
  float extraout_s3_03;
  float extraout_s3_04;
  float extraout_s3_05;
  float fVar16;
  float extraout_s3_06;
  float extraout_s3_07;
  int local_e8;
  uint local_e4;
  int local_dc;
  CCPoint aCStack_d0 [8];
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
  
  piVar10 = *(int **)(DAT_000cadf0 + 0xcaa54);
  local_1c = *piVar10;
  memset(local_30,0,0x14);
  sprintf((char *)local_30,(char *)(DAT_000cadf4 + 0xcaa70),param_1);
  uVar14 = CONCAT44(extraout_s1,extraout_s0);
  iVar8 = 0;
  local_dc = 0;
  local_e4 = 0;
  do {
    local_e4 = local_e4 + (local_30[iVar8] != 0);
    iVar7 = local_dc + 1;
    if (local_e4 != iVar7 * 3 && (int)(local_e4 + iVar7 * -3) < 0 == SBORROW4(local_e4,iVar7 * 3)) {
      local_dc = iVar7;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 0x14);
  if (param_2 == 0) {
    iVar8 = 0;
    uVar11 = 0;
    local_e8 = 0;
    do {
      if ((uVar11 - local_e8 == local_e4 + (local_e8 - local_dc) * 3) &&
         (((((int)uVar11 >> 0x1f) - ((int)local_e4 >> 0x1f)) + (uint)(local_e4 <= uVar11) & 0xff) ==
          0)) {
        if (local_30[iVar8] != 0) {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          uVar14 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000cadf8);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_80,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),
                     extraout_s2_02,extraout_s3_02);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_80);
          piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          pcVar9 = *(code **)(*piVar5 + 0x3c);
          uVar11 = uVar11 + 1;
          uVar4 = __floatsisf(iVar8);
          uVar13 = __subsf3(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x120));
          uVar14 = __mulsf3(uVar4,uVar13);
          cocos2d::CCPoint::CCPoint(aCStack_c8,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar9)(piVar5,aCStack_c8);
          local_e8 = local_e8 + 1;
        }
      }
      else {
        bVar1 = local_30[iVar8 - local_e8];
        if (bVar1 == 0) {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_90,extraout_s0_00,extraout_s1_00,extraout_s2_01,
                     extraout_s3_01);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_90);
        }
        else {
          pCVar2 = (CCSprite *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          uVar4 = *(undefined4 *)(this + 0x118);
          uVar11 = uVar11 + 1;
          uVar13 = __floatsisf(bVar1 - 0x30);
          uVar14 = __mulsf3(uVar13,uVar4);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_a0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),
                     extraout_s2_00,extraout_s3_00);
          cocos2d::CCSprite::setTextureRect(pCVar2,aCStack_a0);
          piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
          pcVar9 = *(code **)(*piVar5 + 0x3c);
          uVar4 = __floatsisf(iVar8);
          uVar13 = __subsf3(*(undefined4 *)(this + 0x118),*(undefined4 *)(this + 0x120));
          uVar14 = __mulsf3(uVar4,uVar13);
          cocos2d::CCPoint::CCPoint(aCStack_d0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar9)(piVar5,aCStack_d0);
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 0x14);
  }
  else if (param_2 == 1) {
    iVar8 = 0;
    local_e4 = 0;
    fVar15 = extraout_s2;
    fVar16 = extraout_s3;
    do {
      if (local_30[iVar8] == 0) {
        pCVar6 = *(CCTexture2D **)(this + 0x114);
        uVar13 = 0;
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_60,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),fVar15,
                   fVar16);
        uVar4 = cocos2d::CCSprite::spriteWithTexture(pCVar6,aCStack_60);
        uVar14 = (**(code **)(*(int *)this + 0xcc))(this,uVar4,iVar8,iVar8,uVar13);
        fVar15 = extraout_s2_05;
        fVar16 = extraout_s3_05;
      }
      else {
        pCVar6 = *(CCTexture2D **)(this + 0x114);
        uVar13 = *(undefined4 *)(this + 0x118);
        uVar4 = __floatsisf(local_30[iVar8] - 0x30);
        uVar14 = __mulsf3(uVar4,uVar13);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_70,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),
                   extraout_s2_03,extraout_s3_03);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6,aCStack_70);
        pcVar9 = *(code **)(*piVar5 + 0x3c);
        uVar4 = __floatsisf(iVar8);
        __mulsf3(uVar4,*(undefined4 *)(this + 0x118));
        uVar14 = __mulsf3(*(undefined4 *)(this + 0x11c),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar9)(piVar5,aCStack_c0);
        (**(code **)(*(int *)this + 0xcc))(this,piVar5,iVar8,iVar8);
        uVar4 = __floatsisf(local_e4);
        __addsf3(uVar4,*(undefined4 *)(this + 0x118));
        local_e4 = __fixsfsi();
        uVar14 = CONCAT44(extraout_s1_01,extraout_s0_01);
        fVar15 = extraout_s2_04;
        fVar16 = extraout_s3_04;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
    iVar8 = 0;
    do {
      piVar5 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,iVar8);
      if (piVar5 != (int *)0x0) {
        pcVar9 = *(code **)(*piVar5 + 0x3c);
        puVar3 = (undefined4 *)(**(code **)(*(int *)this + 0x7c))(this);
        uVar12 = *(undefined4 *)(this + 0x118);
        uVar4 = __mulsf3(*puVar3,0x3f000000);
        uVar13 = __floatsisf(iVar8);
        uVar13 = __mulsf3(uVar13,uVar12);
        uVar4 = __addsf3(uVar4,uVar13);
        uVar13 = __floatsisf(local_e4);
        uVar13 = __subsf3(uVar13,uVar12);
        uVar13 = __mulsf3(uVar13,0x3f000000);
        __subsf3(uVar4,uVar13);
        uVar14 = (**(code **)(*piVar5 + 0x38))(piVar5);
        cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar9)(piVar5,aCStack_b8);
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 != 10);
  }
  else {
    cocos2d::CCObject::retain(*(CCObject **)(this + 0x114));
    (**(code **)(*(int *)this + 0xd4))(this,1);
    iVar8 = 9;
    local_e8 = 0;
    local_e4 = 0;
    do {
      if (local_e4 - local_e8 == (local_e8 + 1) * 3) {
        if (local_30[iVar8] != 0) {
          pCVar6 = *(CCTexture2D **)(this + 0x114);
          uVar14 = __mulsf3(*(undefined4 *)(this + 0x118),DAT_000cae98);
          cocos2d::CCRect::CCRect
                    ((CCRect *)aCStack_40,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),
                     extraout_s2_07,extraout_s3_07);
          piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6,aCStack_40);
          pcVar9 = *(code **)(*piVar5 + 0x3c);
          uVar4 = __floatsisf(local_e4);
          uVar4 = __mulsf3(uVar4,*(undefined4 *)(this + 0x118));
          uVar14 = __subsf3(0,uVar4);
          cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
          (*pcVar9)(piVar5,aCStack_a8);
          (**(code **)(*(int *)this + 0xcc))(this,piVar5,iVar8,iVar8);
          iVar8 = iVar8 + 1;
          local_e4 = local_e4 + 1;
          local_e8 = local_e8 + 1;
        }
      }
      else if (local_30[iVar8] != 0) {
        pCVar6 = *(CCTexture2D **)(this + 0x114);
        uVar13 = *(undefined4 *)(this + 0x118);
        uVar4 = __floatsisf(local_30[iVar8] - 0x30);
        uVar14 = __mulsf3(uVar4,uVar13);
        cocos2d::CCRect::CCRect
                  ((CCRect *)aCStack_50,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20),
                   extraout_s2_06,extraout_s3_06);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar6,aCStack_50);
        pcVar9 = *(code **)(*piVar5 + 0x3c);
        uVar4 = __floatsisf(local_e4);
        uVar4 = __mulsf3(uVar4,*(undefined4 *)(this + 0x118));
        uVar14 = __subsf3(0,uVar4);
        cocos2d::CCPoint::CCPoint(aCStack_b0,(float)uVar14,(float)((ulonglong)uVar14 >> 0x20));
        (*pcVar9)(piVar5,aCStack_b0);
        (**(code **)(*(int *)this + 0xcc))(this,piVar5,iVar8,iVar8);
        local_e4 = local_e4 + 1;
      }
      iVar8 = iVar8 + -1;
    } while (-1 < iVar8);
    cocos2d::CCObject::release(*(CCObject **)(this + 0x114));
  }
  if (local_1c == *piVar10) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


