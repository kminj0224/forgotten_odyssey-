/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe23c  Symbol: Unit_init_layer */

/* Hero2::Unit_init_layer() */

CCNode * Hero2::Unit_init_layer(void)

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
  pcVar2 = (char *)(DAT_000fe330 + 0xfe26e);
  pcVar3 = (char *)(DAT_000fe338 + 0xfe270);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fe33c + 0xfe274),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fe334 + 0xfe26a) + 1));
  if (2 < **(int **)(DAT_000fe340 + 0xfe286) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fe344 + 0xfe298),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fe348 + 0xfe2a8),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fe34c + 0xfe2ba),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fe350 + 0xfe2cc),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fe354 + 0xfe2de),in_r0,1,5);
    vScript_Unit(pcVar2,(char *)(DAT_000fe358 + 0xfe2f0),in_r0,1,6);
    vScript_Unit(pcVar2,(char *)(DAT_000fe35c + 0xfe302),in_r0,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe360 + 0xfe31e));
  }
  return in_r0;
}


