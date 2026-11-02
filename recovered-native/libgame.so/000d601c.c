/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d601c  Symbol: Draw_Item */

/* Market_Equip::Draw_Item(int) */

void __thiscall Market_Equip::Draw_Item(Market_Equip *this,int param_1)

{
  CCNode *pCVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  CCTexture2D *pCVar10;
  undefined4 *puVar11;
  int extraout_r1;
  CCPoint *pCVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  code *pcVar16;
  int *piVar17;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  undefined8 uVar18;
  float fVar19;
  CCPoint aCStack_a8 [8];
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
  
  iVar14 = DAT_000d63cc + 0xd6028;
  piVar13 = *(int **)(iVar14 + DAT_000d63d0);
  iVar15 = 9;
  local_1c = *piVar13;
  do {
    pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
    iVar2 = cocos2d::CCNode::getChildByTag(pCVar1,iVar15);
    if (iVar2 != 0) {
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar15);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,0);
      (**(code **)(*piVar3 + 0x6c))(piVar3,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
      pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar1,iVar15);
      piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,1);
      (**(code **)(*piVar3 + 0x6c))(piVar3,0);
    }
    iVar15 = iVar15 + 1;
  } while (iVar15 != 0x11);
  *(undefined4 *)(this + 0x130) = 0xffffffff;
  *(undefined4 *)(this + 0x138) = 0xffffffff;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,99);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,DAT_000d63d4);
  pcVar16 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a8,extraout_s0,extraout_s1);
  (*pcVar16)(piVar3,aCStack_a8);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0x66);
  pcVar16 = *(code **)(*piVar3 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_a0,extraout_s0_00,extraout_s1_00);
  (*pcVar16)(piVar3,aCStack_a0);
  iVar2 = param_1 + 0x5a;
  iVar15 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar2);
  if (iVar15 != 0) {
    pcVar16 = *(code **)(*(int *)this + 0xd0);
    uVar4 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar2);
    (*pcVar16)(this,uVar4,1);
  }
  piVar17 = *(int **)(iVar14 + DAT_000d63dc);
  piVar3 = *(int **)(iVar14 + DAT_000d63e0);
  if (*(int *)(param_1 * 0x14 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 + *piVar17 +
              DAT_000d63e4) == 0) goto LAB_000d64e8;
  piVar5 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d63e8 + 0xd6148));
  piVar6 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d63ec + 0xd6152));
  piVar7 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d63f0 + 0xd615c));
  piVar8 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d63f4 + 0xd6166));
  piVar9 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d63f8 + 0xd6170));
  iVar15 = *(int *)(*piVar17 +
                    param_1 * 0x14 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 +
                    DAT_000d63e4 + 4);
  if ((iVar15 == 0) || ((iVar15 != 1 && (piVar6 = piVar8, piVar5 = piVar7, iVar15 == 2)))) {
    piVar6 = piVar5;
    pcVar16 = *(code **)(*piVar6 + 0x118);
  }
  else {
    pcVar16 = *(code **)(*piVar6 + 0x118);
  }
  pCVar10 = (CCTexture2D *)(*pcVar16)(piVar6);
  piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10);
  pcVar16 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_98,extraout_s0_01,extraout_s1_01);
  (*pcVar16)(piVar6,aCStack_98);
  pcVar16 = *(code **)(*piVar6 + 0x3c);
  iVar15 = *(int *)(iVar14 + DAT_000d63fc);
  __floatsisf(*(int *)(param_1 * 0x10 + iVar15) + 1);
  uVar18 = __floatsisf(*(int *)(iVar15 + param_1 * 0x10 + 8) + 2);
  cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar16)(piVar6,aCStack_90);
  (**(code **)(*(int *)this + 0xcc))(this,piVar6,iVar2,iVar2);
  memset(acStack_50,0,0x32);
  iVar15 = param_1 * 0x14;
  sprintf(acStack_50,(char *)(DAT_000d6404 + 0xd627e),DAT_000d6408 + 0xd627c,
          *(undefined4 *)
           (*(int *)(iVar14 + DAT_000d6400) +
            *(int *)(iVar15 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 + *piVar17 +
                    DAT_000d63e4) * 0xc + 4));
  piVar5 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  pcVar16 = *(code **)(*piVar5 + 0x3c);
  puVar11 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))();
  __mulsf3(*puVar11,0x3f000000);
  iVar14 = (**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar18 = __mulsf3(*(undefined4 *)(iVar14 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar16)(piVar5,aCStack_88);
  (**(code **)(*piVar6 + 0xcc))
            (piVar6,piVar5,0,
             *(undefined4 *)
              (*piVar17 + iVar15 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 +
              DAT_000d63e4));
  iVar14 = *piVar17 + iVar15 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0;
  if (*(int *)(iVar14 + DAT_000d63e4) - 0x51U < 0x46) {
    pCVar10 = (CCTexture2D *)(**(code **)(*piVar9 + 0x118))(piVar9);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10);
    (**(code **)(*piVar5 + 0xcc))(piVar5,piVar6,0,0);
    Draw_Number::node();
    piVar7 = (int *)Draw_Number::node();
    (**(code **)(*piVar5 + 0xcc))(piVar5,piVar7,1,1);
    Draw_Number::SetNumberFont((Draw_Number *)piVar7,8);
    uVar18 = __aeabi_idivmod(*(undefined4 *)
                              (*piVar17 +
                               iVar15 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 +
                              DAT_000d63e4),10);
    fVar19 = (float)((ulonglong)uVar18 >> 0x20);
    pcVar16 = *(code **)(*piVar6 + 0x3c);
    if (extraout_r1 != 0) {
      cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar18,fVar19);
      uVar18 = (*pcVar16)(piVar6,aCStack_70);
      pcVar16 = *(code **)(*piVar7 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      pCVar12 = aCStack_68;
      iVar14 = extraout_r1;
      goto LAB_000d64dc;
    }
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar18,fVar19);
    uVar18 = (*pcVar16)(piVar6,aCStack_80);
    pcVar16 = *(code **)(*piVar7 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    (*pcVar16)(piVar7,aCStack_78);
    iVar14 = 10;
  }
  else {
    if (*(int *)(iVar14 + DAT_000d6508) == 0) goto LAB_000d64e8;
    pCVar10 = (CCTexture2D *)(**(code **)(*piVar9 + 0x118))(piVar9);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar10);
    (**(code **)(*piVar5 + 0xcc))(piVar5,piVar6,0,0);
    Draw_Number::node();
    piVar7 = (int *)Draw_Number::node();
    (**(code **)(*piVar5 + 0xcc))(piVar5,piVar7,1,1);
    uVar18 = Draw_Number::SetNumberFont((Draw_Number *)piVar7,8);
    iVar14 = *(int *)(*piVar17 + iVar15 + (*(int *)(this + 0x110) + -8) * 0x50 + *piVar3 * 0x2d0 +
                     DAT_000d6508);
    pcVar16 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    uVar18 = (*pcVar16)(piVar6,aCStack_60);
    pcVar16 = *(code **)(*piVar7 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    pCVar12 = aCStack_58;
LAB_000d64dc:
    (*pcVar16)(piVar7,pCVar12);
  }
  Draw_Number::SetNumber((Draw_Number *)piVar7,iVar14,0);
LAB_000d64e8:
  if (local_1c == *piVar13) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


