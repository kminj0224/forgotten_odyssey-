/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fde28  Symbol: Unit_init_layer */

/* Hero7::Unit_init_layer() */

CCNode * Hero7::Unit_init_layer(void)

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
  pcVar2 = (char *)(DAT_000fdef8 + 0xfde5a);
  pcVar3 = (char *)(DAT_000fdf00 + 0xfde5c);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fdf04 + 0xfde60),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)(*(int *)(DAT_000fdefc + 0xfde56) + 6));
  if (2 < **(int **)(DAT_000fdf08 + 0xfde72) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fdf0c + 0xfde84),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fdf10 + 0xfde94),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fdf14 + 0xfdea6),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fdf18 + 0xfdeb8),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fdf1c + 0xfdeca),in_r0,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fdf20 + 0xfdee6));
  }
  return in_r0;
}


