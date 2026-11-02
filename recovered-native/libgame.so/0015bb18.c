/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bb18  Symbol: initWithTexture */

/* cocos2d::CCSpriteFrame::initWithTexture(cocos2d::CCTexture2D*, cocos2d::CCRect const&, bool,
   cocos2d::CCPoint const&, cocos2d::CCSize const&) */

undefined4 __thiscall
cocos2d::CCSpriteFrame::initWithTexture
          (CCSpriteFrame *this,CCTexture2D *param_1,CCRect *param_2,bool param_3,CCPoint *param_4,
          CCSize *param_5)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCRect CVar3;
  CCRect CVar4;
  undefined8 uVar5;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  *(CCTexture2D **)(this + 0x48) = param_1;
  if (param_1 != (CCTexture2D *)0x0) {
    CCObject::retain((CCObject *)param_1);
  }
  CVar3 = param_2[1];
  CVar4 = param_2[2];
  *(CCRect *)(this + 0x14) = *param_2;
  *(CCRect *)(this + 0x18) = CVar3;
  *(CCRect *)(this + 0x1c) = CVar4;
  *(CCRect *)(this + 0x20) = param_2[3];
  CVar3 = *param_2;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_2[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_2[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_2[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar5 = __divsf3(CVar3,uVar2);
  CCRect::CCRect((CCRect *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,
                 extraout_s3);
  *(undefined4 *)(this + 0x28) = local_28;
  *(undefined4 *)(this + 0x2c) = uStack_24;
  *(undefined4 *)(this + 0x30) = uStack_20;
  *(undefined4 *)(this + 0x34) = local_1c;
  this[0x24] = (CCSpriteFrame)param_3;
  *(CCPoint *)(this + 0x38) = *param_4;
  *(CCPoint *)(this + 0x3c) = param_4[1];
  *(CCSize *)(this + 0x40) = *param_5;
  *(CCSize *)(this + 0x44) = param_5[1];
  return 1;
}


