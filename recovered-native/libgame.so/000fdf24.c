/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fdf24  Symbol: Unit_init_layer */

/* Hero6::Unit_init_layer() */

CCNode * Hero6::Unit_init_layer(void)

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
  pcVar2 = (char *)(DAT_000fdff4 + 0xfdf56);
  pcVar3 = (char *)(DAT_000fdffc + 0xfdf58);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fe000 + 0xfdf5c),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fdff8 + 0xfdf52) + 5));
  if (2 < **(int **)(DAT_000fe004 + 0xfdf6e) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fe008 + 0xfdf80),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fe00c + 0xfdf90),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fe010 + 0xfdfa2),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fe014 + 0xfdfb4),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fe018 + 0xfdfc6),in_r0,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe01c + 0xfdfe2));
  }
  return in_r0;
}


