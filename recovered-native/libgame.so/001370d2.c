/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001370d2  Symbol: getEyeXYZ */

/* cocos2d::CCCamera::getEyeXYZ(float*, float*, float*) */

undefined8 __thiscall
cocos2d::CCCamera::getEyeXYZ(CCCamera *this,float *param_1,float *param_2,float *param_3)

{
  CCDirector *pCVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x14);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_1 = fVar3;
  uVar4 = *(undefined4 *)(this + 0x18);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_2 = fVar3;
  uVar4 = *(undefined4 *)(this + 0x1c);
  pCVar1 = (CCDirector *)CCDirector::sharedDirector();
  uVar2 = CCDirector::getContentScaleFactor(pCVar1);
  fVar3 = (float)__divsf3(uVar4,uVar2);
  *param_3 = fVar3;
  return CONCAT44(param_3,this);
}


