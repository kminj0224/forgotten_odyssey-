/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012afe0  Symbol: UI_Loding_Img */

/* GameScene::UI_Loding_Img() */

void __thiscall GameScene::UI_Loding_Img(GameScene *this)

{
  int *piVar1;
  CCSpriteFrameCache *this_00;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined4 local_30;
  
  iVar7 = DAT_0012b0c8 + 0x12afec;
  piVar1 = *(int **)(iVar7 + DAT_0012b0cc);
  piVar4 = *(int **)(iVar7 + DAT_0012b0d0);
  piVar6 = *(int **)(iVar7 + DAT_0012b0d4);
  iVar5 = *(int *)(*piVar1 + (*piVar4 * 9 + *piVar6 + DAT_0012b0dc) * 4 + 4);
  if (iVar5 == 1) {
    local_30 = **(undefined4 **)(iVar7 + DAT_0012b0d8);
  }
  else {
    uVar8 = __floatsidf((*(undefined4 **)(iVar7 + DAT_0012b0d8))[iVar5 + -1]);
    uVar2 = (undefined4)((ulonglong)uVar8 >> 0x20);
    uVar9 = __muldf3((int)uVar8,uVar2,DAT_0012b0c0,DAT_0012b0c4);
    __adddf3((int)uVar8,uVar2,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20));
    local_30 = __fixdfsi();
  }
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(DAT_0012b0e0 + 0x12b056));
  uVar2 = New_UI::node();
  *(undefined4 *)(this + 0x120) = uVar2;
  (**(code **)(*(int *)this + 0xcc))(this,uVar2,9,9);
  uVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,9);
  **(undefined4 **)(iVar7 + DAT_0012b0e4) = uVar2;
  iVar5 = *(int *)(*(int *)(this + 0x120) + 0x120);
  uVar2 = __floatsisf(*(undefined4 *)(*piVar1 + (*piVar4 * 9 + *piVar6 + DAT_0012b0e8) * 4 + 4));
  uVar3 = __floatsisf(local_30);
  uVar2 = __divsf3(uVar2,uVar3);
  *(undefined4 *)(iVar5 + 0x118) = uVar2;
  return;
}


