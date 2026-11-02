/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e9060  Symbol: Lode_File */

/* KG_RandomBox::Lode_File() */

void __thiscall KG_RandomBox::Lode_File(KG_RandomBox *this)

{
  CCSpriteFrameCache *pCVar1;
  int *this_00;
  CCDirector *this_01;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  CCAnimation *pCVar5;
  CCAction *pCVar6;
  int *this_02;
  int *this_03;
  char *__format;
  uint uVar7;
  int iVar8;
  code *pcVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  _ccColor4B local_48;
  undefined local_47;
  undefined local_46;
  undefined local_45;
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar10 = *(int **)(DAT_000e9220 + 0xe906c);
  iVar12 = 1;
  local_1c = *piVar10;
  FileSave();
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000e9224 + 0xe9080));
  this_00 = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_000e9228 + 0xe9096) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  do {
    this_01 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_01);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_000e9234 + 0xe90c8);
      iVar3 = DAT_000e9238 + 0xe90ca;
    }
    else {
      __format = (char *)(DAT_000e922c + 0xe90be);
      iVar3 = DAT_000e9230 + 0xe90c0;
    }
    sprintf(acStack_3c,__format,iVar3,iVar12);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)this_00,pCVar4);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x14);
  pCVar5 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this_00);
  pCVar6 = (CCAction *)cocos2d::CCAnimate::actionWithAnimation(pCVar5);
  iVar12 = DAT_000e923c;
  uVar13 = __floatunsidf(this_00[6] - this_00[5] >> 2);
  __muldf3((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_000e9218,DAT_000e921c);
  uVar2 = __truncdfsf2();
  *(undefined4 *)(pCVar6 + 0x20) = uVar2;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000e9240 + 0xe9120));
  iVar3 = this_00[6];
  iVar8 = this_00[5];
  this_02 = (int *)operator_new(0x110);
  cocos2d::CCLayer::CCLayer((CCLayer *)this_02);
  puVar11 = *(undefined4 **)(iVar12 + 0xe9116);
  pcVar9 = *(code **)(*this_02 + 0x3c);
  __mulsf3(*puVar11,0x3f000000);
  uVar13 = __mulsf3(puVar11[1],0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar13,(float)((ulonglong)uVar13 >> 0x20));
  (*pcVar9)(this_02,aCStack_44);
  (**(code **)(*(int *)this + 0xcc))(this,this_02,1,1);
  cocos2d::CCObject::release((CCObject *)this_02);
  uVar7 = (iVar3 - iVar8 >> 2) - 1;
  pCVar4 = (CCSpriteFrame *)0x0;
  if (uVar7 < (uint)(this_00[6] - this_00[5] >> 2)) {
    pCVar4 = *(CCSpriteFrame **)(uVar7 * 4 + this_00[5]);
  }
  this_03 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  pcVar9 = *(code **)(*this_03 + 0x24);
  Random(0,10);
  uVar2 = __floatsisf();
  (*pcVar9)(this_03,uVar2);
  (**(code **)(*this_02 + 0xcc))(this_02,this_03,0,0);
  cocos2d::CCNode::runAction((CCNode *)this_03,pCVar6);
  cocos2d::CCObject::release((CCObject *)this_00);
  local_45 = 0x7f;
  local_48 = (_ccColor4B)0x0;
  local_47 = 0;
  local_46 = 0;
  uVar2 = cocos2d::CCLayerColor::layerWithColor(&local_48);
  (**(code **)(*(int *)this + 0xcc))(this,uVar2,0,0);
  *(undefined4 *)(this + 0x110) = 1;
  if (local_1c != *piVar10) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


