/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bc0c  Symbol: initWithTexture */

/* cocos2d::CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&) */

void __thiscall
cocos2d::CCSpriteFrame::initWithTexture(CCSpriteFrame *this,CCTexture2D *param_1,CCRect *param_2)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCRect CVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s3;
  CCRect aCStack_28 [2];
  CCSize aCStack_20 [3];
  
  CVar3 = *param_2;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_2[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_2[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(CVar3,uVar2);
  CVar3 = param_2[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar4 = __mulsf3(CVar3,uVar2);
  CCRect::CCRect((CCRect *)aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2,
                 extraout_s3);
  initWithTexture(this,param_1,aCStack_28,false,(CCPoint *)(DAT_0015bc8c + 0x15bc7c),aCStack_20);
  return;
}


