/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc480  Symbol: Draw_Item */

/* Market_Hero::Draw_Item(int) */

void __thiscall Market_Hero::Draw_Item(Market_Hero *this,int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  CCTexture2D *pCVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  code *pcVar13;
  int *piVar14;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar15;
  CCPoint aCStack_68 [8];
  CCPoint aCStack_60 [8];
  CCPoint aCStack_58 [8];
  char acStack_50 [52];
  int local_1c;
  
  iVar12 = DAT_000dc6c8 + 0xdc48c;
  piVar11 = *(int **)(iVar12 + DAT_000dc6cc);
  local_1c = *piVar11;
  if (*(int *)(this + 0x114) == 6) goto LAB_000dc6b6;
  iVar9 = param_1 + 0x5a;
  iVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
  if (iVar1 != 0) {
    pcVar13 = *(code **)(*(int *)this + 0xd0);
    uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar9);
    (*pcVar13)(this,uVar2,1);
  }
  piVar14 = *(int **)(iVar12 + DAT_000dc6d0);
  piVar10 = *(int **)(iVar12 + DAT_000dc6d4);
  if (*(int *)(param_1 * 0x14 + (*(int *)(this + 0x114) + -7) * 0x50 + *piVar10 * 0x2d0 + *piVar14 +
              DAT_000dc6d8) == 0) goto LAB_000dc6b6;
  piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dc6dc + 0xdc510));
  piVar4 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dc6e0 + 0xdc51a));
  piVar5 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dc6e4 + 0xdc524));
  piVar6 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000dc6e8 + 0xdc52e));
  iVar1 = *(int *)(*piVar14 +
                   param_1 * 0x14 + (*(int *)(this + 0x114) + -7) * 0x50 + *piVar10 * 0x2d0 +
                   DAT_000dc6d8 + 4);
  if (iVar1 == 0) {
LAB_000dc56c:
    piVar6 = piVar3;
    pcVar13 = *(code **)(*piVar6 + 0x118);
  }
  else if (iVar1 == 1) {
    pcVar13 = *(code **)(*piVar4 + 0x118);
    piVar6 = piVar4;
  }
  else {
    piVar3 = piVar5;
    if (iVar1 == 2) goto LAB_000dc56c;
    pcVar13 = *(code **)(*piVar6 + 0x118);
  }
  pCVar7 = (CCTexture2D *)(*pcVar13)(piVar6);
  piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar7);
  pcVar13 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_68,extraout_s0,extraout_s1);
  (*pcVar13)(piVar6,aCStack_68);
  pcVar13 = *(code **)(*piVar6 + 0x3c);
  iVar1 = *(int *)(iVar12 + DAT_000dc6ec);
  __floatsisf(*(int *)(param_1 * 0x10 + iVar1) + 1);
  uVar15 = __floatsisf(*(int *)(iVar1 + param_1 * 0x10 + 8) + 2);
  cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
  (*pcVar13)(piVar6,aCStack_60);
  (**(code **)(*(int *)this + 0xcc))(this,piVar6,iVar9,iVar9);
  memset(acStack_50,0,0x32);
  if (*(int *)(*(int *)(iVar12 + DAT_000dc6f0) +
               *(int *)(param_1 * 0x14 + (*(int *)(this + 0x114) + -7) * 0x50 + *piVar10 * 0x2d0 +
                        *piVar14 + DAT_000dc6d8) * 0xc + 4) != 0) {
    sprintf(acStack_50,(char *)(DAT_000dc6f4 + 0xdc640),DAT_000dc6f8 + 0xdc642);
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
    pcVar13 = *(code **)(*piVar3 + 0x3c);
    puVar8 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
    __mulsf3(*puVar8,0x3f000000);
    iVar12 = (**(code **)(*piVar3 + 0x7c))(piVar3);
    uVar15 = __mulsf3(*(undefined4 *)(iVar12 + 4),0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar15,(float)((ulonglong)uVar15 >> 0x20));
    (*pcVar13)(piVar3,aCStack_58);
    (**(code **)(*piVar6 + 0xcc))
              (piVar6,piVar3,0,
               *(undefined4 *)
                (*piVar14 + param_1 * 0x14 + (*(int *)(this + 0x114) + -7) * 0x50 + *piVar10 * 0x2d0
                + DAT_000dc6d8));
  }
LAB_000dc6b6:
  if (local_1c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


