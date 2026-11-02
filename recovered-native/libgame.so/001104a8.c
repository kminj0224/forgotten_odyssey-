/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001104a8  Symbol: onEnter */

/* New_UI::onEnter() */

void __thiscall New_UI::onEnter(New_UI *this)

{
  int iVar1;
  CCSpriteFrameCache *pCVar2;
  CCObject *this_00;
  char *pcVar3;
  int iVar4;
  undefined *puVar5;
  
  iVar4 = 0;
  do {
    iVar1 = iVar4 + 0x128;
    iVar4 = iVar4 + 1;
    this[iVar1] = (New_UI)0x0;
  } while (iVar4 != 10);
  puVar5 = *(undefined **)(DAT_00110524 + 0x1104ca);
  *puVar5 = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  (**(code **)(*(int *)this + 0x114))(this,1);
  pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pcVar3 = (char *)(DAT_0011052c + 0x1104ea);
  **(CCSpriteFrameCache ***)(DAT_00110528 + 0x1104e6) = pCVar2;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,pcVar3);
  pCVar2 = (CCSpriteFrameCache *)cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache();
  pcVar3 = (char *)(DAT_00110534 + 0x1104fe);
  **(CCSpriteFrameCache ***)(DAT_00110530 + 0x1104fa) = pCVar2;
  cocos2d::CCSpriteFrameCache::addSpriteFramesWithFile(pCVar2,pcVar3);
  this_00 = (CCObject *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00110538 + 0x110508));
  *(CCObject **)(this + 0x124) = this_00;
  cocos2d::CCObject::retain(this_00);
  FileLode(this);
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


