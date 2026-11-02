/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ae40  Symbol: setPosition */

/* cocos2d::CCLens3D::setPosition(cocos2d::CCPoint const&) */

void cocos2d::CCLens3D::setPosition(CCPoint *param_1)

{
  int iVar1;
  CCDirector *pCVar2;
  undefined4 uVar3;
  CCPoint *in_r1;
  CCPoint *in_r2;
  CCPoint CVar4;
  
  iVar1 = CCPoint::CCPointEqualToPoint((CCPoint *)in_r1,param_1 + 0xd,in_r2);
  if (iVar1 == 0) {
    param_1[0xd] = *in_r1;
    param_1[0xe] = in_r1[1];
    CVar4 = *in_r1;
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    CVar4 = __mulsf3(CVar4,uVar3);
    param_1[0x11] = CVar4;
    CVar4 = in_r1[1];
    pCVar2 = (CCDirector *)CCDirector::sharedDirector();
    uVar3 = CCDirector::getContentScaleFactor(pCVar2);
    CVar4 = __mulsf3(CVar4,uVar3);
    param_1[0x12] = CVar4;
    *(undefined *)(param_1 + 0x13) = 1;
  }
  return;
}


