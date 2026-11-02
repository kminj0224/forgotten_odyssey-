/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014538e  Symbol: setDeviceOrientation */

/* cocos2d::CCDirector::setDeviceOrientation(cocos2d::ccDeviceOrientation) */

undefined8 cocos2d::CCDirector::setDeviceOrientation(ccDeviceOrientation param_1)

{
  CCApplication *this;
  int iVar1;
  Orientation in_r1;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_18;
  undefined4 local_14;
  
  local_18 = in_r2;
  local_14 = in_r3;
  this = (CCApplication *)CCApplication::sharedApplication();
  iVar1 = CCApplication::setOrientation(this,in_r1);
  if (*(int *)(param_1 + 0x84) == iVar1) {
    CCEGLView::getSize();
    uVar2 = *(undefined4 *)(param_1 + 0x74);
    *(ccDeviceOrientation *)(param_1 + 100) = param_1;
    *(Orientation *)(param_1 + 0x68) = in_r1;
    __mulsf3(uVar2,*(undefined4 *)(param_1 + 100));
    uVar3 = __mulsf3(uVar2,*(undefined4 *)(param_1 + 0x68));
    CCSize::CCSize((CCSize *)&local_18,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    *(undefined4 *)(param_1 + 0x6c) = local_18;
    *(undefined4 *)(param_1 + 0x70) = local_14;
    setProjection((CCDirector *)param_1,*(ccDirectorProjection *)(param_1 + 0x60));
  }
  else {
    *(int *)(param_1 + 0x84) = iVar1;
  }
  return CONCAT44(in_r1,param_1);
}


