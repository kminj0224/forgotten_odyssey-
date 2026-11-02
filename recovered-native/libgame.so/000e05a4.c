/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e05a4  Symbol: Item_Sell */

/* Market_Store::Item_Sell(int) */

undefined8 __thiscall Market_Store::Item_Sell(Market_Store *this,int param_1)

{
  CCNode *pCVar1;
  int *piVar2;
  CCArray *this_00;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int iVar7;
  code *pcVar8;
  Market_Store **ppMVar9;
  int iVar10;
  Market_Store *local_20;
  
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_000e0694);
  piVar2 = (int *)cocos2d::CCNode::getChildByTag(pCVar1,param_1);
  iVar7 = DAT_000e069c;
  iVar4 = DAT_000e0698;
  this_00 = (CCArray *)(**(code **)(*piVar2 + 0x58))();
  ppMVar9 = *(Market_Store ***)(iVar4 + 0xe05c4);
  piVar2 = *(int **)(iVar7 + 0xe05c6);
  local_20 = this;
  if (this_00 != (CCArray *)0x0) {
    piVar3 = (int *)cocos2d::CCArray::objectAtIndex(this_00,0);
    iVar4 = (**(code **)(*piVar3 + 0xa0))();
    local_20 = *ppMVar9;
    iVar7 = *piVar2;
    iVar10 = iVar7 + DAT_000e06a0;
    *(int *)(local_20 + iVar10 * 4 + 4) =
         *(int *)(local_20 + iVar10 * 4 + 4) +
         *(int *)(*(int *)(DAT_000e06a4 + 0xe05fa) + iVar4 * 0x18 + 4);
    iVar7 = param_1 * 0x14 + iVar7 * 2000;
    iVar4 = DAT_000e06a8 + iVar7;
    *(undefined4 *)(local_20 + iVar4) = 0;
    *(undefined4 *)((int)(local_20 + iVar4) + 4) = 0;
    iVar7 = DAT_000e06ac + iVar7;
    *(undefined4 *)((int)(local_20 + iVar7) + 4) = 0;
    *(undefined4 *)(local_20 + iVar7) = 0;
    InventoryLayer::Item_Equip(*(int *)(this + 0x128));
  }
  Draw_Number::SetNumber
            (*(Draw_Number **)(this + 0x138),*(int *)(*ppMVar9 + (*piVar2 + DAT_000e06a0) * 4 + 4),2
            );
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  KG_removeChild(pCVar1,true);
  pcVar8 = *(code **)(*(int *)this + 0xd0);
  uVar5 = cocos2d::CCNode::getChildByTag((CCNode *)this,0xd);
  (*pcVar8)(this,uVar5,1);
  **(undefined4 **)(DAT_000e06b0 + 0xe067a) = 4;
  if ((*ppMVar9)[1] != (Market_Store)0x0) {
    pcVar6 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::playEffect(pcVar6,(bool)((char)DAT_000e06b4 + -0x70));
  }
  return CONCAT44(param_1,local_20);
}


