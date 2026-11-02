/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e7660  Symbol: FileLoding_Layer */

/* MarketLayer::FileLoding_Layer() */

void MarketLayer::FileLoding_Layer(void)

{
  int *in_r0;
  int *piVar1;
  CCSpriteFrameCache *pCVar2;
  int *piVar3;
  CCDirector *this;
  undefined4 uVar4;
  CCSpriteFrame *pCVar5;
  int *this_00;
  CCAnimation *pCVar6;
  CCActionInterval *pCVar7;
  CCAction *pCVar8;
  char *__format;
  int iVar9;
  int iVar10;
  code *pcVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int *piVar14;
  float in_s0;
  float fVar15;
  float in_s1;
  undefined8 uVar16;
  _ccColor4B local_4c;
  undefined local_4b;
  undefined local_4a;
  undefined local_49;
  CCPoint aCStack_48 [8];
  CCSize aCStack_40 [2];
  CCPoint aCStack_38 [8];
  char acStack_30 [20];
  int local_1c;
  
  piVar14 = *(int **)(DAT_000e7810 + 0xe766c);
  puVar13 = *(undefined4 **)(DAT_000e7814 + 0xe7670);
  local_1c = *piVar14;
  local_4c = (_ccColor4B)0x0;
  local_4b = 0;
  local_4a = 0;
  local_49 = 0xff;
  piVar1 = (int *)cocos2d::CCLayerColor::layerWithColorWidthHeight(&local_4c,in_s0,in_s1);
  (**(code **)(*in_r0 + 0xcc))(in_r0,piVar1,DAT_000e7818,DAT_000e7818);
  pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar10 = 1;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,(char *)(DAT_000e781c + 0xe76aa));
  piVar3 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)piVar3);
  iVar9 = *(int *)(DAT_000e7820 + 0xe76c2);
  piVar3[5] = 0;
  piVar3[6] = 0;
  *piVar3 = iVar9 + 8;
  piVar3[7] = 0;
  do {
    this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar4 = cocos2d::CCDirector::getContentScaleFactor(this);
    iVar9 = __aeabi_fcmpeq(uVar4,0x40000000);
    if (iVar9 == 0) {
      __format = (char *)(DAT_000e782c + 0xe76f4);
      iVar9 = DAT_000e7830 + 0xe76f6;
    }
    else {
      __format = (char *)(DAT_000e7824 + 0xe76ea);
      iVar9 = DAT_000e7828 + 0xe76ec;
    }
    sprintf(acStack_30,__format,iVar9,iVar10);
    pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar5 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar2,acStack_30);
    iVar10 = iVar10 + 1;
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
              ((CCMutableArray<cocos2d::CCSpriteFrame*> *)piVar3,pCVar5);
  } while (iVar10 != 0xb);
  pCVar5 = (CCSpriteFrame *)(piVar3[6] - (int)(CCSpriteFrame **)piVar3[5] >> 2);
  if (pCVar5 != (CCSpriteFrame *)0x0) {
    pCVar5 = *(CCSpriteFrame **)piVar3[5];
  }
  this_00 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar5);
  pcVar11 = *(code **)(*this_00 + 0x3c);
  __mulsf3(*puVar13,0x3f000000);
  uVar16 = __mulsf3(puVar13[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_48,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(this_00,aCStack_48);
  fVar15 = (float)(**(code **)(*piVar1 + 0xc4))(piVar1,this_00);
  pCVar6 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)piVar3,fVar15)
  ;
  pCVar7 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar6);
  pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar7);
  cocos2d::CCNode::runAction((CCNode *)this_00,pCVar8);
  uVar16 = cocos2d::CCObject::release((CCObject *)piVar3);
  fVar15 = (float)cocos2d::CCSize::CCSize
                            ((CCSize *)aCStack_40,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  piVar3 = (int *)cocos2d::CCLabelTTF::labelWithString
                            ((char *)(DAT_000e7844 + 0xe7798),aCStack_40,2,
                             (char *)(DAT_000e7848 + 0xe7794),fVar15);
  uVar12 = *puVar13;
  pcVar11 = *(code **)(*piVar3 + 0x3c);
  puVar13 = (undefined4 *)(**(code **)(*piVar3 + 0x7c))();
  uVar4 = __mulsf3(*puVar13,0x3f000000);
  uVar4 = __subsf3(uVar12,uVar4);
  __subsf3(uVar4,DAT_000e784c);
  iVar9 = (**(code **)(*piVar3 + 0x7c))(piVar3);
  uVar16 = __addsf3(*(undefined4 *)(iVar9 + 4),DAT_000e784c);
  cocos2d::CCPoint::CCPoint(aCStack_38,(float)uVar16,(float)((ulonglong)uVar16 >> 0x20));
  (*pcVar11)(piVar3,aCStack_38);
  (**(code **)(*piVar1 + 0xcc))(piVar1,piVar3,0,0);
  **(undefined4 **)(DAT_000e7850 + 0xe77fc) = 2;
  if (local_1c != *piVar14) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


