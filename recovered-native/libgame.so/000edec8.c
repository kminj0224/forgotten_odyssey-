/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000edec8  Symbol: Hero_Main_Layer */

/* Hero_Main_Layer::Hero_Main_Layer() */

Hero_Main_Layer * __thiscall Hero_Main_Layer::Hero_Main_Layer(Hero_Main_Layer *this)

{
  int iVar1;
  CCSpriteFrameCache *pCVar2;
  int iVar3;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar3 = *(int *)(DAT_000edf2c + 0xededa);
  *(int *)this = iVar3 + 8;
  *(int *)(this + 0xfc) = iVar3 + 0x13c;
  *(int *)(this + 0x104) = iVar3 + 0x178;
  iVar1 = DAT_000edf30;
  *(int *)(this + 0x100) = iVar3 + 0x16c;
  if (**(int **)(iVar1 + 0xedefc) == 0x1a) {
    pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,(char *)(DAT_000edf34 + 0xedf0c));
    pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,(char *)(DAT_000edf38 + 0xedf18));
    pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
    cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,(char *)(DAT_000edf3c + 0xedf24));
  }
  return this;
}


