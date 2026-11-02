/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dfcf8  Symbol: Item_Random */

/* Market_Store::Item_Random() */

void __thiscall Market_Store::Item_Random(Market_Store *this)

{
  int iVar1;
  CCNode *pCVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  piVar11 = *(int **)(DAT_000dfee8 + 0xdfd04);
  piVar9 = *(int **)(DAT_000dfeec + 0xdfd1c);
  iVar1 = Item_Upgrade_Count_Num
                    (*(int *)(this + 0x194),
                     (void *)(*piVar9 +
                             *(int *)(this + 0x194) * 0x14 + *piVar11 * 2000 + DAT_000dfef0));
  iVar6 = *(int *)(DAT_000dfef4 + 0xdfd34);
  Rmove_Item_Upgread_Count
            (*(int *)((*(int *)(*(int *)(this + 0x194) * 0x14 + *piVar11 * 2000 + *piVar9 +
                               DAT_000dfef8) * 7 + iVar1) * 4 + iVar6));
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
  iVar7 = *(int *)(iVar6 + *(int *)(*piVar9 + *(int *)(this + 0x194) * 0x14 + *piVar11 * 2000 +
                                   DAT_000dfef8) * 0x1c + 0x14);
  iVar1 = Random(0,100);
  puVar4 = *(undefined4 **)(DAT_000dfefc + 0xdfda8);
  if (iVar7 < iVar1) {
    KG_removeChild(pCVar2,true);
    ReinforcementLayer::Draw_PopUp
              (*(ReinforcementLayer **)(this + 0x1b4),4,*(int *)(this + 0x194),
               (void *)(*piVar9 + *(int *)(this + 0x194) * 0x14 + *piVar11 * 2000 + DAT_000dfef0));
    iVar6 = *piVar11;
    iVar7 = *piVar9;
    iVar1 = iVar7 + *(int *)(this + 0x194) * 0x14 + iVar6 * 2000;
    puVar5 = (undefined4 *)(iVar1 + DAT_000dfef8);
    *(undefined4 *)(this + 0x1a4) = *puVar5;
    puVar5[1] = *(undefined4 *)(iVar1 + DAT_000dff04);
    *(undefined4 *)(iVar7 + *(int *)(this + 0x194) * 0x14 + iVar6 * 2000 + DAT_000dfef8) = 0;
    uVar8 = 0x10;
  }
  else {
    if (*(char *)(*piVar9 + 1) != '\0') {
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)((char)DAT_000dff00 + -0x3c));
    }
    KG_removeChild(pCVar2,true);
    iVar1 = DAT_000dfef8;
    iVar10 = *piVar9;
    iVar12 = *piVar11 * 2000;
    piVar9 = (int *)(iVar10 + *(int *)(this + 0x194) * 0x14 + iVar12 + DAT_000dfef8);
    *piVar9 = *piVar9 + 1;
    iVar7 = iVar10 + *(int *)(this + 0x194) * 0x14 + iVar12;
    piVar9 = (int *)(iVar7 + iVar1);
    uVar13 = __floatsidf(*(undefined4 *)(iVar7 + DAT_000dff04));
    uVar14 = __floatsidf(*(undefined4 *)(iVar6 + (*piVar9 + -1) * 0x1c + 0x18));
    uVar14 = __muldf3((int)uVar14,(int)((ulonglong)uVar14 >> 0x20),DAT_000dfee0,DAT_000dfee4);
    __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
             (int)((ulonglong)uVar14 >> 0x20));
    iVar1 = __fixdfsi();
    piVar9[1] = iVar1;
    ReinforcementLayer::Draw_PopUp
              (*(ReinforcementLayer **)(this + 0x1b4),3,*(int *)(this + 0x194),
               (void *)(iVar10 + *(int *)(this + 0x194) * 0x14 + iVar12 + DAT_000dfef0));
    uVar8 = 0xf;
  }
  *puVar4 = uVar8;
  return;
}


