/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011b270  Symbol: Inventory_slot_Plus */

/* UI_Notice::Inventory_slot_Plus(cocos2d::CCLayer*, int) */

void UI_Notice::Inventory_slot_Plus(CCLayer *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  CCArray *this;
  int iVar4;
  CCAction *pCVar5;
  CCPoint *pCVar6;
  int in_r2;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  undefined4 *puVar11;
  code *pcVar12;
  uint uVar13;
  int iVar14;
  float in_s0;
  float fVar15;
  float extraout_s0;
  float in_s1;
  undefined8 uVar16;
  float extraout_s1;
  float fVar17;
  CCPoint local_d8;
  int local_d4;
  CCSize aCStack_d0 [2];
  CCPoint aCStack_c8 [8];
  CCPoint aCStack_c0 [8];
  CCPoint aCStack_b8 [8];
  CCPoint aCStack_b0 [8];
  CCPoint aCStack_a8 [8];
  CCPoint aCStack_a0 [8];
  CCPoint aCStack_98 [8];
  CCPoint aCStack_90 [8];
  CCPoint aCStack_88 [8];
  char acStack_80 [100];
  int local_1c;
  
  iVar14 = DAT_0011b514 + 0x11b282;
  piVar9 = *(int **)(iVar14 + DAT_0011b518);
  local_1c = *piVar9;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_d8,in_s0,in_s1);
  uVar16 = vDrawScript_Lode((char *)(DAT_0011b524 + 0x11b2aa),(char *)(DAT_0011b528 + 0x11b2ac),
                            (CCNode *)param_2,local_d8,local_d4,2000,true,true);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_d0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar1 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0011b538 + 0x11b2d4),aCStack_d0,0,
                             (char *)(DAT_0011b53c + 0x11b2d0),fVar15);
  pcVar12 = *(code **)(*piVar1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_c8,extraout_s0,extraout_s1);
  (*pcVar12)(piVar1,aCStack_c8);
  piVar2 = (int *)Draw_Number::node();
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar3 + 0xcc))(piVar3,piVar2,DAT_0011b548,0xfffffffd);
  piVar3 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  this = (CCArray *)(**(code **)(*piVar3 + 0x58))();
  iVar4 = cocos2d::CCArray::count(this);
  for (uVar13 = 0; (int)uVar13 < iVar4; uVar13 = uVar13 + 1) {
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this,uVar13);
    iVar7 = (**(code **)(*piVar3 + 0xa0))();
    if (iVar7 != -1) {
      fVar15 = (float)(**(code **)(*piVar3 + 0xec))(piVar3,0);
      pCVar5 = (CCAction *)cocos2d::CCFadeIn::actionWithDuration(fVar15);
      cocos2d::CCNode::runAction((CCNode *)piVar3,pCVar5);
    }
  }
  iVar7 = 1;
  iVar4 = 0;
  piVar10 = *(int **)(iVar14 + DAT_0011b55c);
  piVar3 = piVar10;
  do {
    if (*piVar3 ==
        *(int *)((**(int **)(iVar14 + DAT_0011b550) + DAT_0011b558) * 4 +
                **(int **)(iVar14 + DAT_0011b554))) {
      iVar4 = iVar7;
    }
    iVar7 = iVar7 + 1;
    piVar3 = piVar3 + 3;
  } while (iVar7 != 0x15);
  if (piVar10[iVar4 * 3 + 1] == 0) {
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011b560 + 0x11b3a0));
    strcpy(acStack_80,(char *)(DAT_0011b564 + 0x11b3ac));
    Draw_Number::SetNumberFont((Draw_Number *)piVar2,0xd);
    uVar16 = Draw_Number::SetNumber((Draw_Number *)piVar2,piVar10[iVar4 * 3 + 2],0);
    fVar17 = (float)((ulonglong)uVar16 >> 0x20);
    fVar15 = (float)uVar16;
    if (piVar10[iVar4 * 3 + 2] < 100) {
      pcVar12 = *(code **)(*piVar2 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_b0,fVar15,fVar17);
      uVar16 = (*pcVar12)(piVar2,aCStack_b0);
      pcVar12 = *(code **)(*piVar3 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_a8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      pCVar6 = aCStack_a8;
    }
    else {
      pcVar12 = *(code **)(*piVar2 + 0x3c);
      if (DAT_0011b578 < piVar10[iVar4 * 3 + 2]) {
        cocos2d::CCPoint::CCPoint(aCStack_90,fVar15,fVar17);
        uVar16 = (*pcVar12)(piVar2,aCStack_90);
        pcVar12 = *(code **)(*piVar3 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        pCVar6 = aCStack_88;
      }
      else {
        cocos2d::CCPoint::CCPoint(aCStack_a0,fVar15,fVar17);
        uVar16 = (*pcVar12)(piVar2,aCStack_a0);
        pcVar12 = *(code **)(*piVar3 + 0x3c);
        cocos2d::CCPoint::CCPoint(aCStack_98,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
        pCVar6 = aCStack_98;
      }
    }
  }
  else {
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011b59c + 0x11b4c2));
    strcpy(acStack_80,(char *)(DAT_0011b5a0 + 0x11b4ce));
    Draw_Number::SetNumberFont((Draw_Number *)piVar2,0);
    uVar16 = Draw_Number::SetNumber((Draw_Number *)piVar2,piVar10[iVar4 * 3 + 1],0);
    pcVar12 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_c0,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    uVar16 = (*pcVar12)(piVar2,aCStack_c0);
    pcVar12 = *(code **)(*piVar3 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_b8,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    pCVar6 = aCStack_b8;
  }
  (*pcVar12)(piVar3,pCVar6);
  if (in_r2 == 7) {
    setString((CCLabelTTF *)param_1,(char *)piVar1);
    uVar8 = 5;
    puVar11 = *(undefined4 **)(iVar14 + DAT_0011b588);
  }
  else {
    if (in_r2 != 0x10) goto LAB_0011b47e;
    setString((CCLabelTTF *)param_1,(char *)piVar1);
    **(undefined4 **)(iVar14 + DAT_0011b58c) = 0x16;
    **(undefined4 **)(iVar14 + DAT_0011b590) = 0x13;
    uVar8 = 10;
    puVar11 = *(undefined4 **)(iVar14 + DAT_0011b594);
  }
  *puVar11 = uVar8;
LAB_0011b47e:
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar3,DAT_0011b598,0xfffffffe);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_2,0xd);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar1,2000,0xffffffff);
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


