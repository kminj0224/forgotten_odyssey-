/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bd00  Symbol: setRect */

/* cocos2d::CCSpriteFrame::setRect(cocos2d::CCRect const&) */

void __thiscall cocos2d::CCSpriteFrame::setRect(CCSpriteFrame *this,CCRect *param_1)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  CCRect CVar3;
  CCRect CVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  float extraout_s2;
  float extraout_s3;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  CVar3 = param_1[1];
  CVar4 = param_1[2];
  *(CCRect *)(this + 0x28) = *param_1;
  *(CCRect *)(this + 0x2c) = CVar3;
  *(CCRect *)(this + 0x30) = CVar4;
  *(CCRect *)(this + 0x34) = param_1[3];
  uVar5 = *(undefined4 *)(this + 0x28);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(uVar5,uVar2);
  uVar5 = *(undefined4 *)(this + 0x2c);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(uVar5,uVar2);
  uVar5 = *(undefined4 *)(this + 0x30);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __mulsf3(uVar5,uVar2);
  uVar5 = *(undefined4 *)(this + 0x34);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar6 = __mulsf3(uVar5,uVar2);
  CCRect::CCRect((CCRect *)&local_28,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20),extraout_s2,
                 extraout_s3);
  *(undefined4 *)(this + 0x14) = local_28;
  *(undefined4 *)(this + 0x18) = uStack_24;
  *(undefined4 *)(this + 0x1c) = uStack_20;
  *(undefined4 *)(this + 0x20) = local_1c;
  return;
}


