/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a4d0  Symbol: initWithFile */

/* cocos2d::CCSprite::initWithFile(char const*) */

CCTexture2D * __thiscall cocos2d::CCSprite::initWithFile(CCSprite *this,char *param_1)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  CCRect local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_1);
  if (pCVar1 != (CCTexture2D *)0x0) {
    local_28 = *(CCRect *)(DAT_0015a518 + 0x15a4f0);
    uStack_24 = *(undefined4 *)(DAT_0015a518 + 0x15a4f4);
    local_20 = *(undefined4 *)(DAT_0015a518 + 0x15a4f8);
    local_1c = *(undefined4 *)(DAT_0015a518 + 0x15a4fc);
    CCTexture2D::getContentSize();
    pCVar1 = (CCTexture2D *)initWithTexture(this,pCVar1,&local_28);
  }
  return pCVar1;
}


