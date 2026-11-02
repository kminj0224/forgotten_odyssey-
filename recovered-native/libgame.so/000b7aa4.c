/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7aa4  Symbol: Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit */

void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit
               (undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  CCTextureCache *this;
  CCEGLView *pCVar1;
  AppDelegate *this_00;
  CCApplication *this_01;
  CCDirector *this_02;
  
  this = (CCTextureCache *)cocos2d::CCDirector::sharedDirector();
  if (*(int *)(this + 0x14) == 0) {
    pCVar1 = (CCEGLView *)cocos2d::CCEGLView::sharedOpenGLView();
    cocos2d::CCEGLView::setFrameWidthAndHeight(pCVar1,param_3,param_4);
    pCVar1 = (CCEGLView *)cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::setOpenGLView(pCVar1);
    this_00 = (AppDelegate *)operator_new(4);
    AppDelegate::AppDelegate(this_00);
    this_01 = (CCApplication *)cocos2d::CCApplication::sharedApplication();
    cocos2d::CCApplication::run(this_01);
  }
  else {
    cocos2d::CCTextureCache::reloadAllTextures(this);
    this_02 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
    cocos2d::CCDirector::setGLDefaultValues(this_02);
  }
  return;
}


