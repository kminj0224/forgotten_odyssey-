/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e5264  Symbol: Unit_Upgrade_Notice */

/* Market_Unit::Unit_Upgrade_Notice() */

undefined8 __thiscall Market_Unit::Unit_Upgrade_Notice(Market_Unit *this)

{
  int iVar1;
  int iVar2;
  N_Draw_Number *this_00;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  
  piVar7 = *(int **)(DAT_000e5354 + 0xe5270);
  iVar4 = *piVar7;
  piVar6 = *(int **)(DAT_000e5358 + 0xe527c);
  iVar1 = iVar4 * 9;
  iVar5 = *piVar6;
  iVar2 = iVar5 + (iVar1 + *(int *)(this + 0x138) + DAT_000e535c) * 4;
  *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) + 1;
  if (*(int *)(iVar5 + (iVar1 + *(int *)(this + 0x138) + DAT_000e535c) * 4 + 4) < 0x15) {
    iVar2 = GetMoney(*(int *)(iVar5 + (iVar4 + DAT_000e5364) * 4 + 4),*(int *)(this + 0x158));
    if (iVar2 != 0) {
      iVar2 = *piVar6 + (*piVar7 + DAT_000e5364) * 4;
      *(int *)(iVar2 + 4) = *(int *)(iVar2 + 4) - *(int *)(this + 0x158);
    }
  }
  else {
    *(int *)(iVar5 + DAT_000e5360) = *(int *)(iVar5 + DAT_000e5360) + -100;
  }
  MarketLayer::reset(**(MarketLayer ***)(DAT_000e5368 + 0xe52ec));
  iVar2 = *(int *)(this + 0x138);
  **(undefined4 **)(DAT_000e536c + 0xe52fc) = 1;
  Draw_Unit(this,iVar2);
  Touch_Image_Pos(this,*(int *)(this + 0x138));
  *(undefined4 *)(this + 0x140) = 0;
  this_00 = (N_Draw_Number *)
            cocos2d::CCNode::getChildByTag((CCNode *)this,*(int *)(this + 0x138) + 0xc);
  N_Draw_Number::SetNumber
            (this_00,*(int *)(*piVar6 + (*piVar7 * 9 + *(int *)(this + 0x138) + DAT_000e535c) * 4 +
                             4),2);
  FileSave();
  if (*(char *)(*piVar6 + 1) != '\0') {
    pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar3,(bool)((char)DAT_000e5370 + 'N'));
  }
  return CONCAT44(iVar1,this);
}


