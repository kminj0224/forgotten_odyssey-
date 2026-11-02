/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00158ce0  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesEnd */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeTouchesEnd
               (undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
               undefined4 param_5)

{
  CCEGLView *this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  CCObject *this_00;
  undefined4 local_40;
  undefined4 local_3c;
  CCSet aCStack_30 [28];
  
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCEGLView::getViewPort();
  this = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
  uVar1 = cocos2d::CCEGLView::getScreenScaleFactor(this);
  iVar4 = DAT_00158d74;
  cocos2d::CCSet::CCSet(aCStack_30);
  this_00 = *(CCObject **)(param_3 * 4 + iVar4 + 0x158d0a);
  if (this_00 != (CCObject *)0x0) {
    uVar2 = __subsf3(param_4,local_40);
    uVar2 = __divsf3(uVar2,uVar1);
    uVar3 = __subsf3(param_5,local_3c);
    uVar1 = __divsf3(uVar3,uVar1);
    *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(this_00 + 0x18);
    uVar3 = *(undefined4 *)(this_00 + 0x1c);
    *(undefined4 *)(this_00 + 0x14) = 0;
    *(undefined4 *)(this_00 + 0x1c) = uVar1;
    *(undefined4 *)(this_00 + 0x24) = uVar3;
    *(int *)(this_00 + 0x28) = param_3;
    *(undefined4 *)(this_00 + 0x18) = uVar2;
    cocos2d::CCSet::addObject((CCObject *)aCStack_30);
    cocos2d::CCObject::release(this_00);
    *(undefined4 *)(param_3 * 4 + iVar4 + 0x158d0a) = 0;
    iVar4 = cocos2d::CCDirector::sharedDirector();
    piVar5 = (int *)cocos2d::CCEGLView::getDelegate(*(CCEGLView **)(iVar4 + 0x14));
    (**(code **)(*piVar5 + 8))(piVar5,aCStack_30,0);
  }
  cocos2d::CCSet::~CCSet(aCStack_30);
  return;
}


