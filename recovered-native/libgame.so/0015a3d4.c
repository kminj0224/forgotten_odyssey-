/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a3d4  Symbol: setTextureRect */

/* cocos2d::CCSprite::setTextureRect(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCSprite::setTextureRect(CCSprite *this,CCRect *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCRect CVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  CCRect aCStack_28 [2];
  CCSize aCStack_20 [3];
  
  CVar3 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_1[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_1[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar4 = __mulsf3(CVar3,uVar2);
  CCRect::CCRect((CCRect *)aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2,
                 extraout_s3);
  setTextureRectInPixels(this,aCStack_28,false,aCStack_20);
  return;
}


