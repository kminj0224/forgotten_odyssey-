/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000b7bd0  Symbol: applicationDidFinishLaunching */

/* AppDelegate::applicationDidFinishLaunching() */

undefined8 AppDelegate::applicationDidFinishLaunching(void)

{
  undefined4 in_r0;
  int *this;
  CCDirector *this_00;
  int iVar1;
  CCScene *pCVar2;
  undefined4 uVar3;
  undefined4 in_r1;
  undefined8 uVar4;
  
  this = (int *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCEGLView::sharedOpenGLView();
  cocos2d::CCDirector::setOpenGLView((CCEGLView *)this);
  cocos2d::CCDirector::setDepthTest((CCDirector *)this,false);
  this_00 = (CCDirector *)cocos2d::CCDirector::sharedDirector();
  cocos2d::CCDirector::setProjection(this_00,0);
  cocos2d::CCTexture2D::setDefaultAlphaPixelFormat(1);
  iVar1 = cocos2d::CCDirector::setDirectorType(3);
  if (iVar1 == 0) {
    cocos2d::CCDirector::setDirectorType(0);
  }
  *(CCEGLView *)((int)this + 0x29) = (CCEGLView)0x0;
  (**(code **)(*this + 0x18))(this,*(code **)(*this + 0x18),DAT_000b7c80,DAT_000b7c84);
  cocos2d::CCDirector::setDepthTest((CCDirector *)this,false);
  **(undefined4 **)(DAT_000b7c98 + 0xb7c2c) = 0;
  pCVar2 = (CCScene *)MainScene::scene();
  cocos2d::CCDirector::getWinSize();
  __divsf3(in_r0,DAT_000b7c9c);
  uVar4 = __extendsfdf2();
  uVar4 = __muldf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_000b7c88,DAT_000b7c8c);
  __adddf3((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_000b7c90,DAT_000b7c94);
  floor((double)CONCAT44(in_r1,in_r0));
  __divdf3();
  uVar3 = __truncdfsf2();
  **(undefined4 **)(DAT_000b7ca0 + 0xb7c70) = uVar3;
  cocos2d::CCDirector::runWithScene((CCDirector *)this,pCVar2);
  return CONCAT44(in_r0,1);
}


