/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013711c  Symbol: getCenterXYZ */

/* cocos2d::CCCamera::getCenterXYZ(float*, float*, float*) */

undefined8 __thiscall
cocos2d::CCCamera::getCenterXYZ(CCCamera *this,float *param_1,float *param_2,float *param_3)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x20);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_1 = fVar3;
  uVar4 = *(undefined4 *)(this + 0x24);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_2 = fVar3;
  uVar4 = *(undefined4 *)(this + 0x28);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_3 = fVar3;
  return CONCAT44(param_3,this);
}


