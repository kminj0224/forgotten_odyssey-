/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001450a8  Symbol: setOpenGLView */

/* cocos2d::CCDirector::setOpenGLView(cocos2d::CCEGLView*) */

undefined8 cocos2d::CCDirector::setOpenGLView(CCEGLView *param_1)

{
  int *piVar1;
  int iVar2;
  CCTouchDispatcher *this;
  int *in_r1;
  CCTouchDispatcher *pCVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 local_18;
  undefined4 local_14;
  
  piVar1 = *(int **)(param_1 + 0x14);
  if (piVar1 != in_r1) {
    local_18 = in_r2;
    local_14 = in_r3;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 4))();
    }
    *(int **)(param_1 + 0x14) = in_r1;
    CCEGLView::getSize();
    uVar4 = *(undefined4 *)(param_1 + 0x74);
    *(CCEGLView **)(param_1 + 100) = param_1;
    *(int **)(param_1 + 0x68) = in_r1;
    __mulsf3(uVar4,*(undefined4 *)(param_1 + 100));
    uVar5 = __mulsf3(uVar4,*(undefined4 *)(param_1 + 0x68));
    CCSize::CCSize((CCSize *)&local_18,(float)uVar5,(float)((ulonglong)uVar5 >> 0x20));
    *(undefined4 *)(param_1 + 0x6c) = local_18;
    *(undefined4 *)(param_1 + 0x70) = local_14;
    setGLDefaultValues((CCDirector *)param_1);
    iVar2 = __aeabi_fcmpeq(*(undefined4 *)(param_1 + 0x74),0x3f800000);
    if (iVar2 == 0) {
      updateContentScaleFactor((CCDirector *)param_1);
    }
    this = (CCTouchDispatcher *)CCTouchDispatcher::sharedDispatcher();
    pCVar3 = this;
    if (this != (CCTouchDispatcher *)0x0) {
      pCVar3 = this + 0x14;
    }
    CCEGLView::setTouchDelegate(*(CCEGLView **)(param_1 + 0x14),(EGLTouchDelegate *)pCVar3);
    CCTouchDispatcher::setDispatchEvents(this,true);
  }
  return CONCAT44(in_r1,param_1);
}


