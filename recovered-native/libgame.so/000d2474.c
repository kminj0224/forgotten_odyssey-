/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d2474  Symbol: Item_SetInventory */

/* InventoryLayer::Item_SetInventory(int) */

void __thiscall InventoryLayer::Item_SetInventory(InventoryLayer *this,int param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  CCTexture2D *pCVar8;
  int extraout_r1;
  CCPoint *pCVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  int *piVar15;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar16;
  float fVar17;
  undefined4 local_98;
  undefined4 local_94;
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
  
  iVar10 = DAT_000d2790;
  piVar12 = *(int **)(DAT_000d278c + 0xd2480);
  local_1c = *piVar12;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,param_1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0x38))();
  local_98 = *puVar3;
  local_94 = puVar3[1];
  pcVar14 = *(code **)(*(int *)this + 0xd0);
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  uVar4 = cocos2d::CCNode::getChildByTag(pCVar1,param_1);
  (*pcVar14)(this,uVar4,1);
  piVar2 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_000d2794 + 0xd24c6));
  piVar11 = *(int **)(DAT_000d2798 + 0xd24d2);
  piVar15 = *(int **)(iVar10 + 0xd249a);
  iVar10 = *(int *)(*piVar15 + param_1 * 0x14 + *piVar11 * 2000 + DAT_000d279c + 4);
  if (iVar10 == 0) {
    pcVar5 = (char *)(DAT_000d27a0 + 0xd24fa);
  }
  else if (iVar10 == 1) {
    pcVar5 = (char *)(DAT_000d27a4 + 0xd2504);
  }
  else if (iVar10 == 2) {
    pcVar5 = (char *)(DAT_000d27a8 + 0xd250e);
  }
  else {
    pcVar5 = (char *)(DAT_000d27ac + 0xd2514);
  }
  piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrameName(pcVar5);
  pcVar14 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_90,extraout_s0,extraout_s1);
  (*pcVar14)(piVar6,aCStack_90);
  (**(code **)(*piVar6 + 0x3c))(piVar6,&local_98);
  piVar7 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)this,0);
  (**(code **)(*piVar7 + 0xcc))(piVar7,piVar6,param_1,param_1);
  iVar10 = param_1 * 0x14;
  iVar13 = *(int *)(*piVar15 + iVar10 + *piVar11 * 2000 + DAT_000d279c);
  if (iVar13 == 0) goto LAB_000d2778;
  memset(acStack_50,0,0x32);
  sprintf(acStack_50,(char *)(DAT_000d27b4 + 0xd2590),DAT_000d27b8 + 0xd2592,
          *(undefined4 *)(*(int *)(DAT_000d27b0 + 0xd2586) + iVar13 * 0xc + 4));
  piVar7 = (int *)cocos2d::CCSprite::spriteWithFile(acStack_50);
  pcVar14 = *(code **)(*piVar7 + 0x3c);
  puVar3 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))(piVar6);
  __mulsf3(*puVar3,0x3f000000);
  iVar13 = (**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar16 = __mulsf3(*(undefined4 *)(iVar13 + 4),0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_88,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar14)(piVar7,aCStack_88);
  (**(code **)(*piVar6 + 0xcc))
            (piVar6,piVar7,0,*(undefined4 *)(*piVar15 + iVar10 + *piVar11 * 2000 + DAT_000d279c));
  iVar13 = *piVar15 + iVar10 + *piVar11 * 2000;
  if (*(int *)(iVar13 + DAT_000d279c) - 0x51U < 0x46) {
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
    (**(code **)(*piVar7 + 0xcc))(piVar7,piVar6,0,0);
    piVar2 = (int *)Draw_Number::node();
    (**(code **)(*piVar7 + 0xcc))(piVar7,piVar2,1,1);
    Draw_Number::SetNumberFont((Draw_Number *)piVar2,8);
    uVar16 = __aeabi_idivmod(*(undefined4 *)(*piVar15 + iVar10 + *piVar11 * 2000 + DAT_000d279c),10)
    ;
    fVar17 = (float)((ulonglong)uVar16 >> 0x20);
    pcVar14 = *(code **)(*piVar6 + 0x3c);
    if (extraout_r1 != 0) {
      cocos2d::CCPoint::CCPoint(aCStack_70,(float)uVar16,fVar17);
      uVar16 = (*pcVar14)(piVar6,aCStack_70);
      pcVar14 = *(code **)(*piVar2 + 0x3c);
      cocos2d::CCPoint::CCPoint(aCStack_68,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
      pCVar9 = aCStack_68;
      iVar10 = extraout_r1;
      goto LAB_000d276c;
    }
    cocos2d::CCPoint::CCPoint(aCStack_80,(float)uVar16,fVar17);
    uVar16 = (*pcVar14)(piVar6,aCStack_80);
    pcVar14 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_78,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    (*pcVar14)(piVar2,aCStack_78);
    iVar10 = 10;
  }
  else {
    if (*(int *)(iVar13 + DAT_000d27d0) == 0) goto LAB_000d2778;
    pCVar8 = (CCTexture2D *)(**(code **)(*piVar2 + 0x118))(piVar2);
    piVar6 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
    (**(code **)(*piVar7 + 0xcc))(piVar7,piVar6,0,0);
    Draw_Number::node();
    piVar2 = (int *)Draw_Number::node();
    (**(code **)(*piVar7 + 0xcc))(piVar7,piVar2,1,1);
    uVar16 = Draw_Number::SetNumberFont((Draw_Number *)piVar2,8);
    iVar10 = *(int *)(*piVar15 + iVar10 + *piVar11 * 2000 + DAT_000d27d0);
    pcVar14 = *(code **)(*piVar6 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_60,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    uVar16 = (*pcVar14)(piVar6,aCStack_60);
    pcVar14 = *(code **)(*piVar2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_58,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
    pCVar9 = aCStack_58;
LAB_000d276c:
    (*pcVar14)(piVar2,pCVar9);
  }
  Draw_Number::SetNumber((Draw_Number *)piVar2,iVar10,0);
LAB_000d2778:
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


