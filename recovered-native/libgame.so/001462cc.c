/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001462cc  Symbol: afterDraw */

/* cocos2d::CCGridBase::afterDraw(cocos2d::CCNode*) */

void __thiscall cocos2d::CCGridBase::afterDraw(CCGridBase *this,CCNode *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  CCDirector *pCVar4;
  
  CCGrabber::afterRender(*(CCTexture2D **)(this + 0x2c));
  set3DProjection();
  applyLandscape();
  iVar1 = (**(code **)(*(int *)param_1 + 0x5c))(param_1);
  if (*(char *)(iVar1 + 0x38) != '\0') {
    piVar2 = (int *)(**(code **)(*(int *)param_1 + 0x78))(param_1);
    glTranslatef(*piVar2,piVar2[1],0);
    (**(code **)(*(int *)param_1 + 0x5c))(param_1);
    CCCamera::locate();
    glTranslatef(*piVar2 + -0x80000000,piVar2[1] + -0x80000000,0);
  }
  uVar3 = (**(code **)(**(int **)(this + 0x20) + 0x20))();
  glBindTexture(DAT_0014635c,uVar3);
  pCVar4 = (CCDirector *)CCDirector::sharedDirector();
  iVar1 = CCDirector::sharedDirector();
  CCDirector::setProjection(pCVar4,*(ccDirectorProjection *)(iVar1 + 0x60));
  pCVar4 = (CCDirector *)CCDirector::sharedDirector();
  CCDirector::applyOrientation(pCVar4);
  (**(code **)(*(int *)this + 0x14))(this);
  return;
}


