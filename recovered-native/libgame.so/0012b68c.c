/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012b68c  Symbol: Effect_Stun_Lode */

/* GameScene::Effect_Stun_Lode() */

void GameScene::Effect_Stun_Lode(void)

{
  CCSpriteFrameCache *pCVar1;
  int *this;
  CCDirector *this_00;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  CCAnimation *pCVar5;
  CCObject *this_01;
  char *__format;
  int **ppiVar6;
  int *piVar7;
  int iVar8;
  char acStack_3c [40];
  int local_14;
  
  iVar8 = 1;
  piVar7 = *(int **)(DAT_0012b73c + 0x12b698);
  local_14 = *piVar7;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_0012b740 + 0x12b6a6));
  this = (int *)operator_new(0x20);
  cocos2d::CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_0012b744 + 0x12b6ba) + 8;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  ppiVar6 = *(int ***)(DAT_0012b748 + 0x12b6cc);
  *ppiVar6 = this;
  do {
    this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this_00);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_0012b754 + 0x12b6f6);
      iVar3 = DAT_0012b758 + 0x12b6f8;
    }
    else {
      __format = (char *)(DAT_0012b74c + 0x12b6ec);
      iVar3 = DAT_0012b750 + 0x12b6ee;
    }
    sprintf(acStack_3c,__format,iVar3,iVar8);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_3c);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
              ((CCMutableArray<cocos2d::CCSpriteFrame*> *)*ppiVar6,pCVar4);
    pCVar5 = (CCAnimation *)cocos2d::CCAnimation::animationWithFrames((CCMutableArray *)*ppiVar6);
    this_01 = (CCObject *)cocos2d::CCAnimate::actionWithAnimation(pCVar5);
    iVar8 = iVar8 + 1;
    **(CCObject ***)(DAT_0012b75c + 0x12b722) = this_01;
    cocos2d::CCObject::retain(this_01);
  } while (iVar8 != 3);
  if (local_14 != *piVar7) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


