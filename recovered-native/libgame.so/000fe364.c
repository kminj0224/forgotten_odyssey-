/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fe364  Symbol: Unit_init_layer */

/* Hero1::Unit_init_layer() */

CCNode * Hero1::Unit_init_layer(void)

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
  pcVar2 = (char *)(DAT_000fe458 + 0xfe394);
  pcVar3 = (char *)(DAT_000fe45c + 0xfe398);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000fe460 + 0xfe39a),pcVar3,in_r0,local_20,local_1c,1,1,true,
                   *(bool *)*(undefined4 *)(DAT_000fe454 + 0xfe38e));
  if (2 < **(int **)(DAT_000fe464 + 0xfe3ac) - 1U) {
    vScript_Unit(pcVar2,(char *)(DAT_000fe468 + 0xfe3be),in_r0,1,1);
    vScript_Unit(pcVar2,(char *)(DAT_000fe46c + 0xfe3ce),in_r0,1,2);
    vScript_Unit(pcVar2,(char *)(DAT_000fe470 + 0xfe3e0),in_r0,1,3);
    vScript_Unit(pcVar2,(char *)(DAT_000fe474 + 0xfe3f2),in_r0,1,4);
    vScript_Unit(pcVar2,(char *)(DAT_000fe478 + 0xfe404),in_r0,1,5);
    vScript_Unit(pcVar2,(char *)(DAT_000fe47c + 0xfe416),in_r0,1,6);
    vScript_Unit(pcVar2,(char *)(DAT_000fe480 + 0xfe428),in_r0,1,7);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::removeSpriteFramesFromFile(pCVar1,pcVar3);
    pCVar1 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar1,(char *)(DAT_000fe484 + 0xfe444));
  }
  return in_r0;
}


