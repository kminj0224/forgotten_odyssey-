/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cf73c  Symbol: Draw_Item */

/* Equip_Layer::Draw_Item(int) */

void __thiscall Equip_Layer::Draw_Item(Equip_Layer *this,int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  CCTexture2D *pCVar9;
  int *piVar10;
  int extraout_r1;
  CCPoint *pCVar11;
  int *piVar12;
  int iVar13;
  int *piVar14;
  code *pcVar15;
  int iVar16;
  int *piVar17;
  undefined8 uVar18;
  float fVar19;
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
  
  iVar13 = DAT_000cfae4 + 0xcf748;
  piVar14 = *(int **)(iVar13 + DAT_000cfae8);
  local_1c = *piVar14;
  piVar1 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000cfaec + 0xcf756));
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,param_1);
  if (iVar2 != 0) {
    pcVar15 = *(code **)(*(int *)this + 0xd0);
    uVar3 = cocos2d::CCNode::getChildByTag((CCNode *)this,param_1);
    (*pcVar15)(this,uVar3,1);
  }
  piVar17 = *(int **)(iVar13 + DAT_000cfaf0);
  piVar4 = *(int **)(iVar13 + DAT_000cfaf4);
  piVar10 = *(int **)(iVar13 + DAT_000cfaf8);
  piVar12 = (int *)(param_1 * 0x14 + *piVar10 * 0x50 + *piVar4 * 0x2d0 + *piVar17 + DAT_000cfafc);
  if (*piVar12 == 0) goto LAB_000cfad6;
  iVar2 = piVar12[1];
  if (iVar2 == 0) {
    pcVar5 = (char *)(DAT_000cfb00 + 0xcf7ca);
  }
  else if (iVar2 == 1) {
    pcVar5 = (char *)(DAT_000cfb04 + 0xcf7d4);
  }
  else if (iVar2 == 2) {
    pcVar5 = (char *)(DAT_000cfb08 + 0xcf7de);
  }
  else {
    pcVar5 = (char *)(DAT_000cfb0c + 0xcf7e4);
  }
  piVar12 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar5);
  iVar16 = *piVar12;
  pcVar15 = *(code **)(iVar16 + 0x3c);
  iVar2 = *(int *)(iVar13 + DAT_000cfb10);
  uVar3 = __floatsisf(*(undefined4 *)(param_1 * 0x10 + iVar2));
  puVar6 = (undefined4 *)(**(code **)(iVar16 + 0x7c))(piVar12);
  uVar7 = __mulsf3(*puVar6,0x3f000000);
  __addsf3(uVar3,uVar7);
  uVar3 = __floatsisf(*(undefined4 *)(iVar2 + param_1 * 0x10 + 4));
  iVar2 = (**(code **)(*piVar12 + 0x7c))(piVar12);
  uVar7 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
  uVar18 = __addsf3(uVar3,uVar7);
  cocos2d::CCPoint::CCPoint(aCStack_90,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar15)(piVar12,aCStack_90);
  (**(code **)(*(int *)this + 0xcc))(this,piVar12,param_1,param_1);
  memset(acStack_50,0,0x32);
  iVar16 = param_1 * 0x14;
  sprintf(acStack_50,(char *)(DAT_000cfb18 + 0xcf8c0),DAT_000cfb1c + 0xcf8be,
          *(undefined4 *)
           (*(int *)(iVar13 + DAT_000cfb14) +
            *(int *)(iVar16 + *piVar10 * 0x50 + *piVar4 * 0x2d0 + *piVar17 + DAT_000cfafc) * 0xc + 4
           ));
  piVar8 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  pcVar15 = *(code **)(*piVar8 + 0x3c);
  puVar6 = (undefined4 *)(**(code **)(*piVar12 + 0x7c))(piVar12);
  __mulsf3(*puVar6,0x3f000000);
  iVar2 = (**(code **)(*piVar12 + 0x7c))(piVar12);
  uVar18 = __mulsf3(*(undefined4 *)(iVar2 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
  (*pcVar15)(piVar8,aCStack_88);
  (**(code **)(*piVar12 + 0xcc))
            (piVar12,piVar8,0,
             *(undefined4 *)(*piVar17 + iVar16 + *piVar10 * 0x50 + *piVar4 * 0x2d0 + DAT_000cfafc));
  iVar2 = *piVar17 + iVar16 + *piVar10 * 0x50 + *piVar4 * 0x2d0;
  if (*(int *)(iVar2 + DAT_000cfafc) - 0x51U < 0x46) {
    pCVar9 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
    piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar9);
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar12,0,0);
    Draw_Number::node();
    piVar1 = (int *)Draw_Number::node();
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar1,1,1);
    Draw_Number::SetNumberFont((Draw_Number *)piVar1,8);
    uVar18 = __aeabi_idivmod(*(undefined4 *)
                              (*piVar17 + iVar16 + *piVar10 * 0x50 + *piVar4 * 0x2d0 + DAT_000cfafc)
                             ,10);
    fVar19 = (float)((ulonglong)uVar18 >> 0x20);
    pcVar15 = *(code **)(*piVar12 + 0x3c);
    if (extraout_r1 != 0) {
      cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar18,fVar19);
      uVar18 = (*pcVar15)(piVar12,aCStack_70);
      pcVar15 = *(code **)(*piVar1 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
      pCVar11 = aCStack_68;
      iVar2 = extraout_r1;
      goto LAB_000cfaca;
    }
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar18,fVar19);
    uVar18 = (*pcVar15)(piVar12,aCStack_80);
    pcVar15 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    (*pcVar15)(piVar1,aCStack_78);
    iVar2 = 10;
  }
  else {
    if (*(int *)(iVar2 + DAT_000cfb34) == 0) goto LAB_000cfad6;
    pCVar9 = (CCTexture2D *)(**(code **)(*piVar1 + 0x118))(piVar1);
    piVar12 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar9);
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar12,0,0);
    Draw_Number::node();
    piVar1 = (int *)Draw_Number::node();
    (**(code **)(*piVar8 + 0xcc))(piVar8,piVar1,1,1);
    uVar18 = Draw_Number::SetNumberFont((Draw_Number *)piVar1,8);
    iVar2 = *(int *)(*piVar17 + iVar16 + *piVar10 * 0x50 + *piVar4 * 0x2d0 + DAT_000cfb34);
    pcVar15 = *(code **)(*piVar12 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    uVar18 = (*pcVar15)(piVar12,aCStack_60);
    pcVar15 = *(code **)(*piVar1 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar18,(float)((ulonglong)uVar18 >> 0x20));
    pCVar11 = aCStack_58;
LAB_000cfaca:
    (*pcVar15)(piVar1,pCVar11);
  }
  Draw_Number::SetNumber((Draw_Number *)piVar1,iVar2,0);
LAB_000cfad6:
  if (local_1c == *piVar14) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


