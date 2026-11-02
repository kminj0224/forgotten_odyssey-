/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d19e4  Symbol: Lode_File */

/* InventoryLayer::Lode_File() */

void InventoryLayer::Lode_File(void)

{
  int *in_r0;
  int iVar1;
  int *this;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *this_00;
  CCTexture2D *pCVar7;
  int iVar8;
  int extraout_r1;
  CCPoint *pCVar9;
  int *piVar10;
  CCTextAlignment CVar11;
  int *piVar12;
  code *pcVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  float in_s0;
  float extraout_s0;
  float extraout_s0_00;
  float in_s1;
  float extraout_s1;
  undefined8 uVar17;
  float extraout_s1_00;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int local_fc;
  int local_e8;
  CCPoint local_d8;
  CCPoint local_d4;
  int local_d0;
  int local_cc;
  CCPoint local_c8;
  CCPoint local_c4;
  int local_c0;
  int local_bc;
  CCPoint aCStack_b8 [8];
  CCPoint local_b0;
  CCPoint local_ac;
  int local_a8;
  int local_a4;
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  CCPoint aCStack_80 [8];
  CCPoint aCStack_78 [8];
  CCPoint aCStack_70 [8];
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  piVar10 = *(int **)(DAT_000d1d94 + 0xd19f0);
  piVar16 = *(int **)(DAT_000d1d98 + 0xd19f4);
  local_1c = *piVar10;
  piVar12 = *(int **)(DAT_000d1da0 + 0xd1a06);
  iVar1 = *(int *)((*piVar16 + DAT_000d1d9c) * 4 + *piVar12);
  if (iVar1 == 100) {
    local_fc = DAT_000d1da4;
  }
  else {
    iVar1 = __divsi3(iVar1,5);
    local_fc = iVar1 * 0x25 + -0x6f;
    in_s0 = extraout_s0;
    in_s1 = extraout_s1;
  }
  uVar17 = cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,in_s0,in_s1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  uVar17 = vDrawFrame((CCNode *)in_r0,(char *)(DAT_000d1dac + 0xd1a4c),local_d8,local_d4,local_d0,
                      local_cc);
  uVar17 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_c8,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_c0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  uVar19 = 2;
  uVar20 = 2;
  vDrawFrame((CCNode *)in_r0,(char *)(DAT_000d1db4 + 0xd1a7e),local_c8,local_c4,local_c0,local_bc);
  this = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  (**(code **)(*in_r0 + 0xcc))(in_r0,this,0,0,local_c0,local_bc,uVar19,uVar20);
  (**(code **)(*this + 0x3c))(this,in_r0 + 0x44);
  uVar17 = cocos2d::CCObject::release((CCObject *)this);
  if (0xf < *(int *)((*piVar16 + DAT_000d1d9c) * 4 + *piVar12)) {
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,0);
    iVar1 = (**(code **)(*piVar2 + 0x38))();
    uVar19 = __floatsisf(local_fc);
    uVar19 = __divsf3(*(undefined4 *)(iVar1 + 4),uVar19);
    uVar19 = __mulsf3(uVar19,DAT_000d1db0);
    piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,2);
    pcVar13 = *(code **)(*piVar2 + 0x3c);
    piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)in_r0,2);
    (**(code **)(*piVar3 + 0x38))();
    uVar17 = __subsf3(DAT_000d1db0,uVar19);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
    uVar17 = (*pcVar13)(piVar2,aCStack_b8);
  }
  iVar1 = 0;
  uVar17 = cocos2d::CCPoint::CCPoint
                     ((CCPoint *)&local_b0,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_a8,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  vDrawFrame((CCNode *)this,(char *)(DAT_000d1dbc + 0xd1b56),local_b0,local_ac,local_a8,local_a4);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d1dc4 + 0xd1b6a));
  do {
    iVar8 = __divsi3(*(undefined4 *)((*piVar16 + DAT_000d1f80) * 4 + *piVar12),5);
    if (iVar8 <= iVar1) {
      if (local_1c == *piVar10) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_e8 = 0;
    do {
      iVar14 = local_e8 + iVar1 * 5;
      iVar8 = *(int *)(*piVar12 + iVar14 * 0x14 + *piVar16 * 2000 + DAT_000d1dc8 + 4);
      if (iVar8 == 0) {
        pcVar4 = (char *)(DAT_000d1dcc + 0xd1ba0);
      }
      else if (iVar8 == 1) {
        pcVar4 = (char *)(DAT_000d1dd0 + 0xd1baa);
      }
      else if (iVar8 == 2) {
        pcVar4 = (char *)(DAT_000d1dd4 + 0xd1bb4);
      }
      else {
        pcVar4 = (char *)(DAT_000d1dd8 + 0xd1bba);
      }
      piVar3 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar4);
      pcVar13 = *(code **)(*piVar3 + 0x74);
      cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_00,extraout_s1_00);
      (*pcVar13)(piVar3,aCStack_a0);
      pcVar13 = *(code **)(*piVar3 + 0x3c);
      __floatsisf(local_e8 * 0x25);
      uVar17 = __floatsisf(iVar1 * -0x25 + 0x4a);
      cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
      (*pcVar13)(piVar3,aCStack_98);
      (**(code **)(*this + 0xcc))(this,piVar3,iVar14,iVar14);
      iVar8 = *(int *)(*piVar12 + iVar14 * 0x14 + *piVar16 * 2000 + DAT_000d1dc8);
      if (iVar8 != 0) {
        memset(acStack_50,0,0x32);
        if (iVar8 == 0xa9) {
          pcVar4 = (char *)(DAT_000d1ddc + 0xd1c44);
          iVar8 = DAT_000d1de0 + 0xd1c46;
          iVar15 = DAT_000d1de4 + 0xd1c48;
        }
        else {
          iVar15 = *(int *)(*(int *)(DAT_000d1de8 + 0xd1c52) + iVar8 * 0xc + 4);
          pcVar4 = (char *)(DAT_000d1dec + 0xd1c5e);
          iVar8 = DAT_000d1df0 + 0xd1c60;
        }
        sprintf(acStack_50,pcVar4,iVar8,iVar15);
        piVar5 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
        pcVar13 = *(code **)(*piVar5 + 0x3c);
        puVar6 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))(piVar3);
        __mulsf3(*puVar6,0x3f000000);
        iVar8 = (**(code **)(*piVar3 + 0x7c))(piVar3);
        uVar17 = __mulsf3(*(undefined4 *)(iVar8 + 4),0x3f000000);
        cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
        (*pcVar13)(piVar5,aCStack_90);
        iVar14 = iVar14 * 0x14;
        (**(code **)(*piVar3 + 0xcc))
                  (piVar3,piVar5,0,
                   *(undefined4 *)(iVar14 + *piVar16 * 2000 + *piVar12 + DAT_000d1dc8));
        iVar15 = *piVar12 + iVar14 + *piVar16 * 2000;
        iVar8 = *(int *)(iVar15 + DAT_000d1dc8);
        if (iVar8 - 0x51U < 0x46) {
          pCVar7 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
          piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
          (**(code **)(*piVar5 + 0xcc))(piVar5,piVar3,0,0);
          Draw_Number::node();
          this_00 = (int *)Draw_Number::node();
          (**(code **)(*piVar5 + 0xcc))(piVar5,this_00,1,1);
          Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
          uVar17 = __aeabi_idivmod(*(undefined4 *)
                                    (*piVar12 + iVar14 + *piVar16 * 2000 + DAT_000d1dc8),10);
          fVar18 = (float)((ulonglong)uVar17 >> 0x20);
          pcVar13 = *(code **)(*piVar3 + 0x3c);
          if (extraout_r1 == 0) {
            cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar17,fVar18);
            uVar17 = (*pcVar13)(piVar3,aCStack_88);
            pcVar13 = *(code **)(*this_00 + 0x3c);
            cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
            (*pcVar13)(this_00,aCStack_80);
            iVar8 = 10;
          }
          else {
            cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar17,fVar18);
            uVar17 = (*pcVar13)(piVar3,aCStack_78);
            pcVar13 = *(code **)(*this_00 + 0x3c);
            cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
            pCVar9 = aCStack_70;
            iVar8 = extraout_r1;
LAB_000d1f10:
            (*pcVar13)(this_00,pCVar9);
          }
          CVar11 = 0;
        }
        else {
          if (iVar8 != 0xa9) {
            if (*(int *)(iVar15 + DAT_000d1f78) != 0) {
              pCVar7 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
              piVar3 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
              (**(code **)(*piVar5 + 0xcc))(piVar5,piVar3,0,0);
              Draw_Number::node();
              this_00 = (int *)Draw_Number::node();
              (**(code **)(*piVar5 + 0xcc))(piVar5,this_00,1,1);
              uVar17 = Draw_Number::SetNumberFont((Draw_Number *)this_00,8);
              iVar8 = *(int *)(*piVar12 + iVar14 + *piVar16 * 2000 + DAT_000d1f78);
              pcVar13 = *(code **)(*piVar3 + 0x3c);
              cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20))
              ;
              uVar17 = (*pcVar13)(piVar3,aCStack_60);
              pcVar13 = *(code **)(*this_00 + 0x3c);
              cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20))
              ;
              pCVar9 = aCStack_58;
              goto LAB_000d1f10;
            }
            goto LAB_000d1f1c;
          }
          Draw_Number::node();
          this_00 = (int *)Draw_Number::node();
          (**(code **)(*piVar5 + 0xcc))(piVar5,this_00,1,1);
          uVar17 = Draw_Number::SetNumberFont((Draw_Number *)this_00,1);
          iVar8 = *(int *)(*piVar12 + iVar14 + *piVar16 * 2000 + DAT_000d1f78 + 4);
          pcVar13 = *(code **)(*this_00 + 0x3c);
          cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
          (*pcVar13)(this_00,aCStack_68);
          CVar11 = 2;
        }
        Draw_Number::SetNumber((Draw_Number *)this_00,iVar8,CVar11);
      }
LAB_000d1f1c:
      local_e8 = local_e8 + 1;
    } while (local_e8 != 5);
    iVar1 = iVar1 + 1;
  } while( true );
}


