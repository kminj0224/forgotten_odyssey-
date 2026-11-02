/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b014  Symbol: setDisplayFrameWithAnimationName */

/* cocos2d::CCSprite::setDisplayFrameWithAnimationName(char const*, int) */

void __thiscall
cocos2d::CCSprite::setDisplayFrameWithAnimationName(CCSprite *this,char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  CCSpriteFrame *pCVar3;
  int iVar4;
  
  pcVar1 = (char *)CCAnimationCache::sharedAnimationCache();
  iVar2 = CCAnimationCache::animationByName(pcVar1);
  pCVar3 = (CCSpriteFrame *)0x0;
  iVar4 = *(int *)(*(int *)(iVar2 + 0x1c) + 0x14);
  if ((uint)param_2 < (uint)(*(int *)(*(int *)(iVar2 + 0x1c) + 0x18) - iVar4 >> 2)) {
    pCVar3 = *(CCSpriteFrame **)(param_2 * 4 + iVar4);
  }
  setDisplayFrame(this,pCVar3);
  return;
}


