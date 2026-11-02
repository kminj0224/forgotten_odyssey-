/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134ad4  Symbol: onEnter */

/* StageClear::onEnter() */

void __thiscall StageClear::onEnter(StageClear *this)

{
  int iVar1;
  CCSpriteFrameCache *this_00;
  
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  (**(code **)(*(int *)this + 0x114))(this,1);
  this_00 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  iVar1 = DAT_00134b04;
  *(CCSpriteFrameCache **)(this + 0x110) = this_00;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(this_00,(char *)(iVar1 + 0x134af8));
  FileLode(this);
  return;
}


