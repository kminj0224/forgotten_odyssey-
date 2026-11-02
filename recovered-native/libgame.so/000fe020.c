/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe020  Symbol: Unit_init_layer */

/* Hero5::Unit_init_layer() */

CCNode * Hero5::Unit_init_layer(void)

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
  pcVar2 = (char *)(DAT_000fe10c + 0xfe052);
  pcVar3 = (char *)(DAT_000fe114 + 0xfe054);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fe118 + 0xfe058),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fe110 + 0xfe04e) + 4));
  if (2 < **(int **)(DAT_000fe11c + 0xfe06a) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fe120 + 0xfe07c),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fe124 + 0xfe08c),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fe128 + 0xfe09e),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fe12c + 0xfe0b0),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fe130 + 0xfe0c2),in_r0,1,5);
    vScript_Unit(pcVar2,(char *)(DAT_000fe134 + 0xfe0d4),in_r0,1,6);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe138 + 0xfe0f0));
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe13c + 0xfe0fc));
  }
  return in_r0;
}


