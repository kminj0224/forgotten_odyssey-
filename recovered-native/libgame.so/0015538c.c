/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015538c  Symbol: setTexture */

/* cocos2d::CCParticleSystemQuad::setTexture(cocos2d::CCTexture2D*) */

void __thiscall
cocos2d::CCParticleSystemQuad::setTexture(CCParticleSystemQuad *this,CCTexture2D *param_1)

{
  undefined8 uVar1;
  float extraout_s2;
  float extraout_s3;
  CCRect aCStack_20 [5];
  
  uVar1 = CCTexture2D::getContentSize();
  CCRect::CCRect((CCRect *)aCStack_20,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20),extraout_s2,
                 extraout_s3);
  setTextureWithRect(this,param_1,aCStack_20);
  return;
}


