/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe140  Symbol: Unit_init_layer */

/* Hero3::Unit_init_layer() */

CCNode * Hero3::Unit_init_layer(void)

{
  CCNode *in_r0;
  CCSpriteFrameCache *pCVar1;
  char *pcVar2;
  char *pcVar3;
  float in_s0;
  float in_s1;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,in_s0,in_s1);
  pcVar2 = (char *)(DAT_000fe210 + 0xfe172);
  pcVar3 = (char *)(DAT_000fe218 + 0xfe174);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fe21c + 0xfe178),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fe214 + 0xfe16e) + 2));
  if (2 < **(int **)(DAT_000fe220 + 0xfe18a) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fe224 + 0xfe19c),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fe228 + 0xfe1ac),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fe22c + 0xfe1be),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fe230 + 0xfe1d0),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fe234 + 0xfe1e2),in_r0,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe238 + 0xfe1fe));
  }
  return in_r0;
}


