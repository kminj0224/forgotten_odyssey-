/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b2ec  Symbol: FileLoding_Layer */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x0012b316) */
/* WARNING: Removing unreachable block (ram,0x0012b316) */
/* GameScene::FileLoding_Layer() */

void __thiscall GameScene::FileLoding_Layer(GameScene *this)

{
  undefined4 uVar1;
  int *piVar2;
  CCSpriteFrameCache *pCVar3;
  int *this_00;
  CCDirector *this_01;
  int iVar4;
  CCSpriteFrame *pCVar5;
  int *piVar6;
  CCAnimation *pCVar7;
  CCActionInterval *pCVar8;
  CCAction *pCVar9;
  undefined4 *puVar10;
  char *pcVar11;
  int *piVar12;
  int iVar13;
  code *pcVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 *puVar17;
  float extraout_s0;
  float extraout_s0_00;
  float fVar18;
  float extraout_s0_01;
  float extraout_s1;
  float extraout_s1_00;
  float fVar20;
  undefined8 uVar19;
  float extraout_s1_01;
  _ccColor4B local_188;
  undefined local_187;
  undefined local_186;
  undefined local_185;
  CCPoint aCStack_184 [8];
  CCSize aCStack_17c [2];
  CCPoint aCStack_174 [8];
  CCPoint aCStack_16c [8];
  CCPoint aCStack_164 [8];
  char acStack_15c [20];
  char acStack_148 [300];
  int local_1c;
  
  piVar12 = *(int **)(DAT_0012b5e4 + 0x12b2f8);
  local_1c = *piVar12;
  memset(acStack_148,0,300);
  uVar1 = Random(0,10);
  fVar18 = extraout_s0;
  fVar20 = extraout_s1;
  switch(uVar1) {
  case 0:
    pcVar11 = (char *)(DAT_0012b5e8 + 0x12b32e);
    iVar13 = DAT_0012b5ec + 0x12b330;
    break;
  case 1:
    pcVar11 = (char *)(DAT_0012b5f0 + 0x12b338);
    iVar13 = DAT_0012b5f4 + 0x12b33a;
    break;
  case 2:
    pcVar11 = (char *)(DAT_0012b5f8 + 0x12b342);
    iVar13 = DAT_0012b5fc + 0x12b344;
    break;
  case 3:
    pcVar11 = (char *)(DAT_0012b600 + 0x12b34c);
    iVar13 = DAT_0012b604 + 0x12b34e;
    break;
  case 4:
    pcVar11 = (char *)(DAT_0012b608 + 0x12b356);
    iVar13 = DAT_0012b60c + 0x12b358;
    break;
  case 5:
    pcVar11 = (char *)(DAT_0012b610 + 0x12b360);
    iVar13 = DAT_0012b614 + 0x12b362;
    break;
  case 6:
    pcVar11 = (char *)(DAT_0012b618 + 0x12b36a);
    iVar13 = DAT_0012b61c + 0x12b36c;
    break;
  case 7:
    pcVar11 = (char *)(DAT_0012b620 + 0x12b374);
    iVar13 = DAT_0012b624 + 0x12b376;
    break;
  case 8:
    pcVar11 = (char *)(DAT_0012b628 + 0x12b37e);
    iVar13 = DAT_0012b62c + 0x12b380;
    break;
  case 9:
    pcVar11 = (char *)(DAT_0012b630 + 0x12b388);
    iVar13 = DAT_0012b634 + 0x12b38a;
    break;
  case 10:
    pcVar11 = (char *)(DAT_0012b638 + 0x12b392);
    iVar13 = DAT_0012b63c + 0x12b394;
    break;
  default:
    goto switchD_0012b316_caseD_b;
  }
  sprintf(acStack_148,pcVar11,iVar13);
  fVar18 = extraout_s0_00;
  fVar20 = extraout_s1_00;
switchD_0012b316_caseD_b:
  puVar17 = *(undefined4 **)(DAT_0012b640 + 0x12b3a2);
  local_188 = (_ccColor4B)0x0;
  local_187 = 0;
  local_186 = 0;
  local_185 = 0xff;
  piVar2 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_188,fVar18,fVar20);
  (**(code **)(*(int *)this + 0xcc))(this,piVar2,DAT_0012b644,DAT_0012b644);
  pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar13 = 1;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar3,(char *)(DAT_0012b648 + 0x12b3d4));
  this_00 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_0012b64c + 0x12b3ea) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  do {
    this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar1 = cocos2d::CCDirector::getContentScaleFactor(this_01);
    iVar4 = __aeabi_fcmpeq(uVar1,0x40000000);
    if (iVar4 == 0) {
      pcVar11 = (char *)(DAT_0012b658 + 0x12b41c);
      iVar4 = DAT_0012b65c + 0x12b41e;
    }
    else {
      pcVar11 = (char *)(DAT_0012b650 + 0x12b412);
      iVar4 = DAT_0012b654 + 0x12b414;
    }
    sprintf(acStack_15c,pcVar11,iVar4,iVar13);
    pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar5 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar3,acStack_15c);
    iVar13 = iVar13 + 1;
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
              ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this_00,pCVar5);
  } while (iVar13 != 0xb);
  pCVar5 = (CCSpriteFrame *)(this_00[6] - (int)(CCSpriteFrame **)this_00[5] >> 2);
  if (pCVar5 != (CCSpriteFrame *)0x0) {
    pCVar5 = *(CCSpriteFrame **)this_00[5];
  }
  piVar6 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar5);
  pcVar14 = *(code **)(*piVar6 + 0x3c);
  __mulsf3(*puVar17,0x3f000000);
  uVar19 = __mulsf3(puVar17[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_184,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (*pcVar14)(piVar6,aCStack_184);
  fVar18 = (float)(**(code **)(*piVar2 + 0xc4))(piVar2,piVar6);
  pCVar7 = (CCAnimation *)
           cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this_00,fVar18);
  pCVar8 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar7);
  pCVar9 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar8);
  uVar19 = cocos2d::CCNode::runAction((CCNode *)piVar6,pCVar9);
  fVar18 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_17c,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20))
  ;
  pcVar11 = (char *)(DAT_0012b674 + 0x12b4b8);
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_0012b670 + 0x12b4bc),aCStack_17c,2,pcVar11,fVar18);
  pcVar14 = *(code **)(*piVar6 + 0x3c);
  uVar15 = *puVar17;
  puVar10 = (undefined4 *)(**(code **)(*piVar6 + 0x7c))();
  uVar1 = __mulsf3(*puVar10,0x3f000000);
  uVar1 = __subsf3(uVar15,uVar1);
  __subsf3(uVar1,DAT_0012b678);
  iVar13 = (**(code **)(*piVar6 + 0x7c))(piVar6);
  uVar19 = __addsf3(*(undefined4 *)(iVar13 + 4),DAT_0012b678);
  cocos2d::CCPoint::CCPoint(aCStack_174,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (*pcVar14)(piVar6,aCStack_174);
  fVar18 = (float)(**(code **)(*piVar2 + 0xcc))(piVar2,piVar6,0,0);
  piVar6 = (int *)cocos2d::CCLabelTTF::labelWithString(acStack_148,pcVar11,fVar18);
  pcVar14 = *(code **)(*piVar6 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_16c,extraout_s0_01,extraout_s1_01);
  (*pcVar14)(piVar6,aCStack_16c);
  pcVar14 = *(code **)(*piVar6 + 0x3c);
  __mulsf3(*puVar17,0x3f000000);
  uVar1 = __mulsf3(puVar17[1],0x3f000000);
  uVar19 = __addsf3(uVar1,DAT_0012b67c);
  cocos2d::CCPoint::CCPoint(aCStack_164,(float)uVar19,(float)((ulonglong)uVar19 >> 0x20));
  (*pcVar14)(piVar6,aCStack_164);
  (**(code **)(*piVar2 + 0xcc))(piVar2,piVar6,1,1);
  **(undefined4 **)(DAT_0012b680 + 0x12b590) = 2;
  pcVar14 = *(code **)(*(int *)this + 0xd0);
  uVar1 = cocos2d::CCNode::getChildByTag((CCNode *)this,DAT_0012b684);
  (*pcVar14)(this,uVar1,1);
  uVar16 = this_00[6] - this_00[5] >> 2;
  while (uVar16 = uVar16 - 1, -1 < (int)uVar16) {
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeObjectAtIndex
              ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this_00,uVar16,true);
  }
  cocos2d::CCObject::release((CCObject *)this_00);
  pCVar3 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar3,(char *)(DAT_0012b688 + 0x12b5ce));
  if (local_1c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


