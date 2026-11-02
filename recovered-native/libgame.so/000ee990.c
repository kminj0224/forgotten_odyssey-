/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee990  Symbol: Boss_Lode */

/* Boss_Lode(char const*, char const*, int, int, cocos2d::CCAnimate*,
   cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>*) */

void Boss_Lode(char *param_1,char *param_2,int param_3,int param_4,CCAnimate *param_5,
              CCMutableArray *param_6)

{
  CCSpriteFrameCache *pCVar1;
  CCDirector *this;
  undefined4 uVar2;
  int iVar3;
  CCSpriteFrame *pCVar4;
  char *__format;
  int *piVar5;
  char acStack_30 [20];
  int local_1c;
  
  piVar5 = *(int **)(DAT_000eea14 + 0xee99c);
  local_1c = *piVar5;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,param_1);
  for (; param_3 < param_4; param_3 = param_3 + 1) {
    this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_000eea1c + 0xee9d6);
    }
    else {
      __format = (char *)(DAT_000eea18 + 0xee9d0);
    }
    sprintf(acStack_30,__format,param_2,param_3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_30);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
              ((CCMutableArray<cocos2d::CCSpriteFrame*> *)param_6,pCVar4);
  }
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,param_1);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


