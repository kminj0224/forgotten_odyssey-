/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013707c  Symbol: setCenterXYZ */

/* cocos2d::CCCamera::setCenterXYZ(float, float, float) */

void __thiscall
cocos2d::CCCamera::setCenterXYZ(CCCamera *this,float param_1,float param_2,float param_3)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  undefined4 in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(in_r1,uVar2);
  *(undefined4 *)(this + 0x20) = uVar2;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(in_r2,uVar2);
  *(undefined4 *)(this + 0x24) = uVar2;
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  uVar2 = __mulsf3(in_r3,uVar2);
  *(undefined4 *)(this + 0x28) = uVar2;
  this[0x38] = (CCCamera)0x1;
  return;
}


