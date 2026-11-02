/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010b4fc  Symbol: Unit_Lode */

/* Unit_Lode(char const*, char const*, int, int, cocos2d::CCAnimate*,
   cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>*) */

void Unit_Lode(char *param_1,char *param_2,int param_3,int param_4,CCAnimate *param_5,
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
  
  piVar5 = *(int **)(DAT_0010b57c + 0x10b508);
  local_1c = *piVar5;
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,param_1);
  for (; param_3 < 0x14; param_3 = param_3 + 1) {
    this = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    uVar2 = cocos2d::CCDirector::getContentScaleFactor(this);
    iVar3 = __aeabi_fcmpeq(uVar2,0x40000000);
    if (iVar3 == 0) {
      __format = (char *)(DAT_0010b584 + 0x10b540);
    }
    else {
      __format = (char *)(DAT_0010b580 + 0x10b53a);
    }
    sprintf(acStack_30,__format,param_2,param_3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    pCVar4 = (CCSpriteFrame *)cocos2d::CCSpriteFrameCache::spriteFrameByName(pCVar1,acStack_30);
    if (pCVar4 != (CCSpriteFrame *)0x0) {
      cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
                ((CCMutableArray<cocos2d::CCSpriteFrame*> *)param_6,pCVar4);
    }
  }
  pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,param_1);
  if (local_1c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


