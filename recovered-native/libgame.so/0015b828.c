/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015b828  Symbol: initWithFile */

/* cocos2d::CCSpriteBatchNode::initWithFile(char const*, unsigned int) */

void __thiscall
cocos2d::CCSpriteBatchNode::initWithFile(CCSpriteBatchNode *this,char *param_1,uint param_2)

{
  CCTextureCache *this_00;
  CCTexture2D *pCVar1;
  
  this_00 = (CCTextureCache *)CCTextureCache::sharedTextureCache();
  pCVar1 = (CCTexture2D *)CCTextureCache::addImage(this_00,param_1);
  initWithTexture(this,pCVar1,param_2);
  return;
}


