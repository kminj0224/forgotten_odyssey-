/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015935c  Symbol: addFrameWithFileName */

/* cocos2d::CCAnimation::addFrameWithFileName(char const*) */

void __thiscall cocos2d::CCAnimation::addFrameWithFileName(CCAnimation *this,char *param_1)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  CCSpriteFrame *pCVar2;
  CCRect local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_1);
  local_28 = *(CCRect *)(DAT_001593a4 + 0x159378);
  uStack_24 = *(undefined4 *)(DAT_001593a4 + 0x15937c);
  local_20 = *(undefined4 *)(DAT_001593a4 + 0x159380);
  local_1c = *(undefined4 *)(DAT_001593a4 + 0x159384);
  CCTexture2D::getContentSize();
  pCVar2 = (CCSpriteFrame *)CCSpriteFrame::frameWithTexture(pCVar1,&local_28);
  CCMutableArray<cocos2d::CCSpriteFrame*>::addObject
            (*(CCMutableArray<cocos2d::CCSpriteFrame*> **)(this + 0x1c),pCVar2);
  return;
}


