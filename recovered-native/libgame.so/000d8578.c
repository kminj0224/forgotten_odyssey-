/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d8578  Symbol: Item_Random */

/* Market_Equip::Item_Random() */

void __thiscall Market_Equip::Item_Random(Market_Equip *this)

{
  int iVar1;
  CCNode *pCVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  void *unaff_r6;
  int iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_30;
  
  iVar1 = *(int *)(this + 0x134);
  piVar6 = *(int **)(DAT_000d86f0 + 0xd858c);
  piVar7 = *(int **)(DAT_000d86f4 + 0xd858e);
  if (iVar1 == -1) {
    local_30 = *(int *)(this + 0x138);
    if (local_30 == -1) {
      local_30 = 0;
    }
    else {
      unaff_r6 = (void *)(*piVar6 +
                         local_30 * 0x14 + (*(int *)(this + 0x114) + -8) * 0x50 + *piVar7 * 0x2d0 +
                         DAT_000d86fc);
    }
  }
  else {
    unaff_r6 = (void *)(*piVar6 + iVar1 * 0x14 + *piVar7 * 2000 + DAT_000d86f8);
    local_30 = iVar1;
  }
  iVar1 = Item_Upgrade_Count_Num(iVar1,unaff_r6);
  iVar9 = *(int *)(DAT_000d8704 + 0xd860a);
  Rmove_Item_Upgread_Count
            (*(int *)((*(int *)(*(int *)(this + 0x134) * 0x14 + *piVar7 * 2000 + *piVar6 +
                               DAT_000d8700) * 7 + iVar1) * 4 + iVar9));
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  pCVar2 = (CCNode *)cocos2d::CCNode::getChildByTag(pCVar2,1);
  iVar5 = *(int *)(iVar9 + *(int *)((int)unaff_r6 + 8) * 0x1c + 0x14);
  iVar1 = Random(0,100);
  puVar8 = *(undefined4 **)(DAT_000d8708 + 0xd8644);
  if (iVar5 < iVar1) {
    KG_removeChild(pCVar2,true);
    ReinforcementLayer::Draw_PopUp(*(ReinforcementLayer **)(this + 0x178),4,local_30,unaff_r6);
    *(undefined4 *)(this + 0x144) = *(undefined4 *)((int)unaff_r6 + 8);
    *(undefined4 *)((int)unaff_r6 + 0xc) = *(undefined4 *)((int)unaff_r6 + 0x10);
    *(undefined4 *)((int)unaff_r6 + 8) = 0;
    uVar4 = 0x10;
  }
  else {
    if (*(char *)(*piVar6 + 1) != '\0') {
      pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
      CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)((char)DAT_000d870c + '\\'));
    }
    KG_removeChild(pCVar2,true);
    iVar1 = *(int *)((int)unaff_r6 + 8);
    *(int *)((int)unaff_r6 + 8) = iVar1 + 1;
    uVar10 = __floatsidf(*(undefined4 *)((int)unaff_r6 + 0x10));
    uVar11 = __floatsidf(*(undefined4 *)(iVar9 + iVar1 * 0x1c + 0x18));
    uVar11 = __muldf3((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_000d86e8,DAT_000d86ec);
    __muldf3((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),(int)uVar11,
             (int)((ulonglong)uVar11 >> 0x20));
    uVar4 = __fixdfsi();
    *(undefined4 *)((int)unaff_r6 + 0xc) = uVar4;
    ReinforcementLayer::Draw_PopUp(*(ReinforcementLayer **)(this + 0x178),3,local_30,unaff_r6);
    uVar4 = 0xf;
  }
  *puVar8 = uVar4;
  SetHeroState(this);
  return;
}


