/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015a1ec  Symbol: setTextureRectInPixels */

/* cocos2d::CCSprite::setTextureRectInPixels(cocos2d::CCRect const&, bool, cocos2d::CCSize const&)
    */

void __thiscall
cocos2d::CCSprite::setTextureRectInPixels
          (CCSprite *this,CCRect *param_1,bool param_2,CCSize *param_3)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  CCRect CVar5;
  CCRect CVar6;
  undefined4 uVar7;
  float extraout_s0;
  float extraout_s1;
  float extraout_s2;
  float extraout_s3;
  int local_3c;
  int local_38;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  CVar5 = param_1[1];
  CVar6 = param_1[2];
  *(CCRect *)(this + 0x13c) = *param_1;
  *(CCRect *)(this + 0x140) = CVar5;
  *(CCRect *)(this + 0x144) = CVar6;
  *(CCRect *)(this + 0x148) = param_1[3];
  CVar5 = *param_1;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar5,uVar2);
  CVar5 = param_1[1];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar5,uVar2);
  CVar5 = param_1[2];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  __divsf3(CVar5,uVar2);
  CVar5 = param_1[3];
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __divsf3(CVar5,uVar2);
  CCRect::CCRect((CCRect *)&local_28,extraout_s0,extraout_s1,extraout_s2,extraout_s3);
  *(undefined4 *)(this + 300) = local_28;
  *(undefined4 *)(this + 0x130) = uStack_24;
  *(undefined4 *)(this + 0x134) = uStack_20;
  *(undefined4 *)(this + 0x138) = local_1c;
  this[0x14c] = (CCSprite)param_2;
  (**(code **)(*(int *)this + 0x88))(this,param_3,8,*(code **)(*(int *)this + 0x88),uVar2);
  updateTextureCoords(this,(CCRect *)(this + 0x13c));
  local_38 = *(int *)(this + 0x15c);
  local_3c = *(int *)(this + 0x158);
  if (this[0x1c4] != (CCSprite)0x0) {
    local_3c = local_3c + -0x80000000;
  }
  if (this[DAT_0015a3d0] != (CCSprite)0x0) {
    local_38 = local_38 + -0x80000000;
  }
  uVar7 = *(undefined4 *)(this + 0x144);
  uVar2 = __subsf3(*(undefined4 *)(this + 0x68),uVar7);
  uVar2 = __mulsf3(uVar2,0x3f000000);
  uVar2 = __addsf3(uVar2,local_3c);
  *(undefined4 *)(this + 0x150) = uVar2;
  uVar3 = *(undefined4 *)(this + 0x148);
  uVar4 = __subsf3(*(undefined4 *)(this + 0x6c),uVar3);
  uVar4 = __mulsf3(uVar4,0x3f000000);
  uVar4 = __addsf3(uVar4,local_38);
  *(undefined4 *)(this + 0x154) = uVar4;
  if (this[0x128] == (CCSprite)0x0) {
    uVar2 = __addsf3(uVar2,0);
    uVar4 = __addsf3(uVar4,0);
    uVar7 = __addsf3(uVar2,uVar7);
    uVar3 = __addsf3(uVar4,uVar3);
    *(undefined4 *)(this + 0x178) = uVar2;
    *(undefined4 *)(this + 0x17c) = uVar4;
    *(undefined4 *)(this + 0x180) = 0;
    *(undefined4 *)(this + 0x1a8) = uVar7;
    *(undefined4 *)(this + 0x1ac) = uVar4;
    *(undefined4 *)(this + 0x1b0) = 0;
    *(undefined4 *)(this + 0x160) = uVar2;
    *(undefined4 *)(this + 0x164) = uVar3;
    *(undefined4 *)(this + 0x168) = 0;
    *(undefined4 *)(this + 400) = uVar7;
    *(undefined4 *)(this + 0x194) = uVar3;
    *(undefined4 *)(this + 0x198) = 0;
  }
  else {
    this[0x118] = (CCSprite)0x1;
  }
  return;
}


