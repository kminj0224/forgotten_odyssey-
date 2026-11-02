/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bd7e  Symbol: setRectInPixels */

/* cocos2d::CCSpriteFrame::setRectInPixels(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCSpriteFrame::setRectInPixels(CCSpriteFrame *this,CCRect *param_1)

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
  
  CVar3 = param_1[1];
  CVar4 = param_1[2];
  *(CCRect *)(this + 0x14) = *param_1;
  *(CCRect *)(this + 0x18) = CVar3;
  *(CCRect *)(this + 0x1c) = CVar4;
  *(CCRect *)(this + 0x20) = param_1[3];
  CVar3 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_1[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar3,uVar2);
  CVar3 = param_1[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar5 = __divsf3(CVar3,uVar2);
  CCRect::CCRect((CCRect *)&local_28,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20),extraout_s2,
                 extraout_s3);
  *(undefined4 *)(this + 0x28) = local_28;
  *(undefined4 *)(this + 0x2c) = uStack_24;
  *(undefined4 *)(this + 0x30) = uStack_20;
  *(undefined4 *)(this + 0x34) = local_1c;
  return;
}


