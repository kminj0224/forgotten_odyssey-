/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ce4b8  Symbol: onEnter */

/* StageSelect::onEnter() */

void __thiscall StageSelect::onEnter(StageSelect *this)

{
  bool bVar1;
  undefined4 uVar2;
  char *pcVar3;
  StageSelectChild *this_00;
  New_Notice *pNVar4;
  int *this_01;
  int *piVar5;
  CCPoint *pCVar6;
  CCAction *pCVar7;
  CCTexture2D *pCVar8;
  char *pcVar9;
  char **ppcVar10;
  int *piVar11;
  code *pcVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  float fVar16;
  undefined8 uVar17;
  CCPoint aCStack_40 [8];
  CCPoint aCStack_38 [8];
  CCPoint aCStack_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  uVar17 = (**(code **)(*(int *)this + 0x114))(this,1);
  iVar14 = DAT_000ce880;
  pcVar12 = *(code **)(*(int *)this + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_40,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar12)(this,aCStack_40);
  iVar14 = iVar14 + 0xce4ea;
  puVar15 = *(undefined4 **)(iVar14 + DAT_000ce884);
  iVar13 = *(int *)this;
  uVar2 = __divsf3(*puVar15,DAT_000ce888);
  (**(code **)(iVar13 + 0x2c))(this,uVar2);
  uVar2 = __divsf3(puVar15[1],DAT_000ce88c);
  (**(code **)(*(int *)this + 0x34))(this,uVar2);
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  **(undefined4 **)(iVar14 + DAT_000ce890) = 0;
  **(undefined4 **)(iVar14 + DAT_000ce894) = 0;
  **(undefined **)(iVar14 + DAT_000ce898) = 0;
  pcVar3 = (char *)CocosDenshion::SimpleAudioEngine::sharedEngine();
  CocosDenshion::SimpleAudioEngine::playBackgroundMusic(pcVar3,(bool)((char)DAT_000ce89c + '6'));
  ppcVar10 = *(char ***)(iVar14 + DAT_000ce8a0);
  if (**ppcVar10 == '\0') {
    bVar1 = (bool)CocosDenshion::SimpleAudioEngine::sharedEngine();
    CocosDenshion::SimpleAudioEngine::stopBackgroundMusic(bVar1);
  }
  strcpy(*(char **)(iVar14 + DAT_000ce8a4),(char *)(DAT_000ce8a8 + 0xce55a));
  **(undefined4 **)(iVar14 + DAT_000ce8b0) = **(undefined4 **)(iVar14 + DAT_000ce8ac);
  this_00 = (StageSelectChild *)operator_new(0x124);
  StageSelectChild::StageSelectChild(this_00);
  StageSelectChild::init(this_00);
  (**(code **)(*(int *)this + 0xcc))(this,this_00,0x11,0x11);
  cocos2d::CCObject::release((CCObject *)this_00);
  piVar11 = *(int **)(iVar14 + DAT_000ce8b4);
  if (*(int *)(*ppcVar10 + (*piVar11 + DAT_000ce8b8) * 4 + 4) == 0) {
    pNVar4 = (New_Notice *)New_Notice::node();
    (**(code **)(*(int *)this + 0xcc))(this,pNVar4,DAT_000ce8bc,DAT_000ce8bc);
    New_Notice::noticeWithType(pNVar4,(char *)(DAT_000ce8c0 + 0xce5cc),0x1a,1);
  }
  if (*(int *)(*ppcVar10 + (*piVar11 + DAT_000ce8b8) * 4 + 4) == 0) {
    uVar2 = Tutorial_Layer::node();
    (**(code **)(*(int *)this + 0xcc))(this,uVar2,0x16,0x16);
  }
  else if (*(int *)(*ppcVar10 + (*piVar11 + DAT_000ce8b8) * 4 + 4) == 0x16) {
    pNVar4 = (New_Notice *)New_Notice::node();
    (**(code **)(*(int *)this + 0xcc))(this,pNVar4,DAT_000ce8bc,DAT_000ce8bc);
    New_Notice::noticeWithType(pNVar4,(char *)(DAT_000ce8c4 + 0xce620),DAT_000ce8c8,0);
    *(undefined4 *)(*ppcVar10 + (*piVar11 + DAT_000ce8b8) * 4 + 4) = 1000;
    Set_Item_Upgrade_Count(5);
    FileSave();
  }
  FileLode(this);
  iVar14 = Random(0,1);
  if (iVar14 == 0) {
    pcVar3 = (char *)(DAT_000ce8d0 + 0xce662);
  }
  else {
    pcVar3 = (char *)(DAT_000ce8cc + 0xce65c);
  }
  this_01 = (int *)cocos2d::CCSprite::spriteWithFile(pcVar3);
  pcVar12 = *(code **)(*this_01 + 0x3c);
  piVar5 = (int *)(**(code **)(*this_01 + 0x7c))();
  __mulsf3(*piVar5 + -0x80000000,0x3f000000);
  iVar14 = (**(code **)(*this_01 + 0x7c))(this_01);
  uVar2 = __mulsf3(*(undefined4 *)(iVar14 + 4),0x3f000000);
  __addsf3(uVar2,0);
  iVar14 = __fixsfsi();
  iVar13 = (**(code **)(*this_01 + 0x7c))(this_01);
  uVar2 = __mulsf3(*(undefined4 *)(iVar13 + 4),0x3f000000);
  __subsf3(DAT_000ce88c,uVar2);
  iVar13 = __fixsfsi();
  Random(iVar14,iVar13);
  uVar17 = __floatsisf();
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar12)(this_01,aCStack_38);
  pcVar12 = *(code **)(*this_01 + 0x108);
  Random(5,10);
  __floatsisf();
  uVar17 = __extendsfdf2();
  __muldf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000ce878,DAT_000ce87c);
  uVar2 = __truncdfsf2();
  (*pcVar12)(this_01,uVar2);
  (**(code **)(*(int *)this + 0xcc))(this,this_01,3,3);
  Random(0xf,0x14);
  pCVar6 = (CCPoint *)__floatsisf();
  puVar15 = (undefined4 *)(**(code **)(*this_01 + 0x7c))(this_01);
  uVar2 = __mulsf3(*puVar15,0x3f000000);
  __addsf3(uVar2,DAT_000ce888);
  uVar17 = (**(code **)(*this_01 + 0x38))(this_01);
  fVar16 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_30,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pCVar7 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar16,pCVar6);
  cocos2d::CCNode::runAction((CCNode *)this_01,pCVar7);
  *(int *)(this + 0x114) = *(int *)(this + 0x114) + 1;
  pCVar8 = (CCTexture2D *)(**(code **)(*this_01 + 0x118))(this_01);
  piVar5 = (int *)cocos2d::CCSprite::spriteWithTexture(pCVar8);
  (**(code **)(*piVar5 + 0xf4))(piVar5);
  (**(code **)(*piVar5 + 0xec))(piVar5,0x7f);
  pcVar12 = *(code **)(*piVar5 + 0x3c);
  puVar15 = (undefined4 *)(**(code **)(*this_01 + 0x38))(this_01);
  __addsf3(*puVar15,DAT_000ce8d4);
  iVar14 = (**(code **)(*this_01 + 0x38))(this_01);
  uVar17 = __subsf3(*(undefined4 *)(iVar14 + 4),DAT_000ce8d8);
  cocos2d::CCPoint::CCPoint(aCStack_28,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  (*pcVar12)(piVar5,aCStack_28);
  pcVar12 = *(code **)(*piVar5 + 0x108);
  cocos2d::CCNode::getScale((CCNode *)this_01);
  uVar17 = __extendsfdf2();
  __subdf3((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),DAT_000ce878,DAT_000ce87c);
  uVar2 = __truncdfsf2();
  (*pcVar12)(piVar5,uVar2);
  (**(code **)(*(int *)this + 0xcc))(this,piVar5,1,1);
  puVar15 = (undefined4 *)(**(code **)(*piVar5 + 0x7c))(piVar5);
  uVar2 = __mulsf3(*puVar15,0x3f000000);
  __addsf3(uVar2,DAT_000ce888);
  uVar17 = (**(code **)(*piVar5 + 0x38))(piVar5);
  fVar16 = (float)cocos2d::CCPoint::CCPoint
                            (aCStack_20,(float)uVar17,(float)((ulonglong)uVar17 >> 0x20));
  pCVar7 = (CCAction *)cocos2d::CCMoveTo::actionWithDuration(fVar16,pCVar6);
  cocos2d::CCNode::runAction((CCNode *)piVar5,pCVar7);
  iVar14 = 0;
  pcVar3 = *ppcVar10;
  iVar13 = *piVar11;
  do {
    if (pcVar3[iVar14 + iVar13 * 200 + 6] == '\0') {
      __divsi3(iVar14,10);
      goto LAB_000ce8e4;
    }
    iVar14 = iVar14 + 1;
  } while (iVar14 != 100);
  iVar14 = 0;
LAB_000ce8e4:
  if ((pcVar3[DAT_000ce994 + iVar13 * 9] == '\0') && (3 < iVar14)) {
                    /* WARNING: Subroutine does not return */
    cocos2d::CCLog((char *)(DAT_000ce998 + 0xce900));
  }
  iVar13 = *piVar11;
  pcVar9 = *ppcVar10;
  pcVar3 = pcVar9 + DAT_000ce9a0 + iVar13 * 9;
  if ((*pcVar3 == '\0') && (0x24 < iVar14)) {
    *pcVar3 = '\x01';
    *(undefined4 *)(pcVar9 + DAT_000ce9a4 + iVar13 * 0x24 + 4) = 1;
    pNVar4 = (New_Notice *)New_Notice::node();
    (**(code **)(*(int *)this + 0xcc))(this,pNVar4,DAT_000ce9a8,DAT_000ce9a8);
    New_Notice::noticeWithType(pNVar4,(char *)(DAT_000ce9ac + 0xce980),0x18,0);
    FileSave();
  }
  cocos2d::CCNode::scheduleUpdate((CCNode *)this);
  return;
}


