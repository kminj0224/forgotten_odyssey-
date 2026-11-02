/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a554  Symbol: initWithTexture */

/* cocos2d::CCSprite::initWithTexture(cocos2d::CCTexture2D*) */

void __thiscall cocos2d::CCSprite::initWithTexture(CCSprite *this,CCTexture2D *param_1)

{
  CCRect local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28 = *(CCRect *)(DAT_0015a58c + 0x15a562);
  uStack_24 = *(undefined4 *)(DAT_0015a58c + 0x15a566);
  local_20 = *(undefined4 *)(DAT_0015a58c + 0x15a56a);
  local_1c = *(undefined4 *)(DAT_0015a58c + 0x15a56e);
  CCTexture2D::getContentSize();
  initWithTexture(this,param_1,&local_28);
  return;
}


