/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd630  Symbol: Unit_init_layer */

/* Hero8::Unit_init_layer() */

CCNode * Hero8::Unit_init_layer(void)

{
  CCNode *in_r0;
  CCSpriteFrameCache *this;
  char *pcVar1;
  char *pcVar2;
  float in_s0;
  float in_s1;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,in_s0,in_s1);
  pcVar1 = (char *)(DAT_000fd6ac + 0xfd662);
  pcVar2 = (char *)(DAT_000fd6b4 + 0xfd664);
  vDrawScript_Unit(pcVar1,(char *)(DAT_000fd6b8 + 0xfd668),pcVar2,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fd6b0 + 0xfd65e) + 7));
  if (2 < **(int **)(DAT_000fd6bc + 0xfd67c) - 1U) {
    vScript_Unit(pcVar1,(char *)(DAT_000fd6c0 + 0xfd68e),in_r0,1,1);
    this = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(this,pcVar2);
  }
  return in_r0;
}


