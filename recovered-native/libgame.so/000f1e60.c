/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000f1e60  Symbol: Draw_Limit */

/* Draw_Limit(cocos2d::CCNode*) */

void Draw_Limit(CCNode *param_1)

{
  CCSpriteFrameCache *pCVar1;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this;
  CCDirector *this_00;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  int *this_01;
  undefined4 *puVar5;
  CCAnimation *pCVar6;
  CCActionInterval *pCVar7;
  CCAction *pCVar8;
  char *__format;
  int *piVar9;
  code *pcVar10;
  int iVar11;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar12;
  CCPoint aCStack_4c [8];
  CCPoint aCStack_44 [8];
  char acStack_3c [32];
  int local_1c;
  
  piVar9 = *(int **)(DAT_000f1fa0 + 0xf1e6c);
  iVar11 = 1;
  local_1c = *piVar9;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000f1fa4 + 0xf1e7c));
  this = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this,0);
  do {
    this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_00);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_000f1fb0 + 0xf1eb4);
      iVar3 = DAT_000f1fb4 + 0xf1eb6;
    }
    else {
      __format = (char *)(DAT_000f1fa8 + 0xf1eaa);
      iVar3 = DAT_000f1fac + 0xf1eac;
    }
    sprintf(acStack_3c,__format,iVar3,iVar11);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject(this,pCVar4);
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 != 0x14);
  pCVar4 = (CCSpriteFrame *)
           cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::getObjectAtIndex(this,0);
  this_01 = (int *)cocos2d::CCSprite::spriteWithSpriteFrame(pCVar4);
  pcVar10 = *(code **)(*this_01 + 0x74);
  cocos2d::CCPoint::CCPoint(aCStack_4c,extraout_s0,extraout_s1);
  (*pcVar10)(this_01,aCStack_4c);
  pcVar10 = *(code **)(*this_01 + 0x3c);
  puVar5 = (undefined4 *)(**(code **)(*(int *)param_1 + 0x7c))(param_1);
  uVar12 = __mulsf3(*puVar5,0x3f000000);
  cocos2d::CCPoint::CCPoint(aCStack_44,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
  (*pcVar10)(this_01,aCStack_44);
  (**(code **)(*(int *)param_1 + 0xcc))(param_1,this_01,0,0x3d8);
  pCVar6 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)this);
  pCVar7 = (CCActionInterval *)cocos2d::CCAnimate::actionWithAnimation(pCVar6);
  uVar12 = __floatunsidf(*(int *)(this + 0x18) - *(int *)(this + 0x14) >> 2);
  __muldf3((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_000f1f98,DAT_000f1f9c);
  uVar2 = __truncdfsf2();
  *(undefined4 *)(pCVar7 + 0x20) = uVar2;
  pCVar8 = (CCAction *)cocos2d::CCRepeatForever::actionWithAction(pCVar7);
  cocos2d::CCNode::runAction((CCNode *)this_01,pCVar8);
  cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::removeAllObjects(this,true);
  cocos2d::CCObject::release((CCObject *)this);
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,(char *)(DAT_000f1fb8 + 0xf1f7e));
  if (local_1c != *piVar9) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


