/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015afc0  Symbol: spriteWithSpriteFrameName */

/* cocos2d::CCSprite::spriteWithSpriteFrameName(char const*) */

void cocos2d::CCSprite::spriteWithSpriteFrameName(char *param_1)

{
  CCSpriteFrameCache *this;
  CCSpriteFrame *pCVar1;
  int *piVar2;
  char acStack_114 [256];
  int local_14;
  
  piVar2 = *(int **)(DAT_0015b00c + 0x15afcc);
  local_14 = *piVar2;
  this = (CCSpriteFrameCache *)CCSpriteFrameCache::sharedSpriteFrameCache();
  pCVar1 = (CCSpriteFrame *)CCSpriteFrameCache::spriteFrameByName(this,param_1);
  memset(acStack_114,0,0x100);
  sprintf(acStack_114,(char *)(DAT_0015b010 + 0x15aff2),param_1);
  spriteWithSpriteFrame(pCVar1);
  if (local_14 != *piVar2) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


