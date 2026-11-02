/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0011dc6c  Symbol: Resurrection_true_Touch */

/* New_Notice::Resurrection_true_Touch() */

void __thiscall New_Notice::Resurrection_true_Touch(New_Notice *this)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int *this_00;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  CCNode *pCVar8;
  CCNode **ppCVar9;
  int **ppiVar10;
  code *pcVar11;
  int iVar12;
  undefined8 uVar13;
  CCPoint aCStack_20 [12];
  
  iVar12 = DAT_0011ddf0 + 0x11dc7a;
  ppCVar9 = *(CCNode ***)(iVar12 + DAT_0011ddf4);
  piVar1 = (int *)cocos2d::CCNode::getChildByTag(*ppCVar9,1);
  iVar2 = (**(code **)(*piVar1 + 0xa8))();
  if (**(CCNode ***)(iVar12 + DAT_0011ddf8) != (CCNode *)0x0) {
    cocos2d::CCNode::removeFromParentAndCleanup(**(CCNode ***)(iVar12 + DAT_0011ddf8),true);
  }
  uVar3 = DAT_0011de00;
  **(undefined4 **)(iVar12 + DAT_0011ddfc) = 0xb;
  **(undefined **)(iVar12 + DAT_0011de04) = 0;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 0xffffffff;
  *(undefined4 *)(*(int *)(iVar2 + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar2 + 4) + 0x28);
  ppiVar10 = *(int ***)(iVar12 + DAT_0011de08);
  piVar1 = *ppiVar10;
  iVar7 = *piVar1;
  pCVar8 = *ppCVar9;
  uVar3 = __subsf3(uVar3,*(undefined4 *)(*(int *)(iVar2 + 4) + 0x54));
  uVar3 = __subsf3(uVar3,DAT_0011de0c);
  __addsf3(uVar3,DAT_0011de10);
  uVar3 = __fixsfsi();
  (**(code **)(iVar7 + 0xd8))(piVar1,pCVar8,uVar3);
  pCVar8 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,0xf);
  KG_removeChild(pCVar8,true);
  GameScene::RevivalCall(**(GameScene ***)(iVar12 + DAT_0011de14));
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar10,DAT_0011de18);
  if (iVar2 != 0) {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar10,DAT_0011de18);
    this_00 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar10,DAT_0011de1c);
    piVar4 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)*ppiVar10,DAT_0011de20);
    iVar12 = (**(code **)(*piVar1 + 0xa8))(piVar1);
    *(undefined4 *)(*(int *)(iVar12 + 4) + 0x24) = *(undefined4 *)(*(int *)(iVar12 + 4) + 0x28);
    iVar2 = DAT_0011de24;
    *(undefined4 *)(*(int *)(iVar12 + 4) + 100) = 0xffffffff;
    uVar3 = cocos2d::CCSprite::spriteWithFile((char *)(iVar2 + 0x11dd54));
    uVar5 = cocos2d::CCSprite::spriteWithFile((char *)(DAT_0011de28 + 0x11dd5e));
    pcVar11 = *(code **)(*piVar1 + 0xd0);
    uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)piVar1,0);
    (*pcVar11)(piVar1,uVar6,1);
    pcVar11 = *(code **)(*this_00 + 0xd0);
    uVar6 = cocos2d::CCNode::getChildByTag((CCNode *)this_00,0);
    (*pcVar11)(this_00,uVar6,1);
    (**(code **)(*piVar1 + 0xcc))(piVar1,uVar3,0,0);
    (**(code **)(*this_00 + 0xcc))(this_00,uVar5,0,0);
    pcVar11 = *(code **)(*piVar4 + 0x3c);
    uVar13 = (**(code **)(*piVar4 + 0x38))(piVar4);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
    (*pcVar11)(piVar4,aCStack_20);
    iVar2 = (**(code **)(*piVar4 + 0xa8))(piVar4);
    *(undefined4 *)(*(int *)(iVar2 + 4) + 100) = 0xffffffff;
  }
  iVar2 = cocos2d::CCScheduler::sharedScheduler();
  *(undefined4 *)(iVar2 + 0x14) = 0x3f800000;
  cocos2d::CCNode::removeFromParentAndCleanup((CCNode *)this,true);
  return;
}


