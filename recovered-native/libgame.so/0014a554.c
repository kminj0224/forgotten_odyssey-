/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a554  Symbol: init */

/* cocos2d::CCScene::init() */

undefined8 cocos2d::CCScene::init(void)

{
  int *in_r0;
  int iVar1;
  code *pcVar2;
  int *apiStack_18 [3];
  
  apiStack_18[0] = in_r0;
  iVar1 = CCDirector::sharedDirector();
  if (iVar1 != 0) {
    pcVar2 = *(code **)(*in_r0 + 0x80);
    CCDirector::getWinSize();
    (*pcVar2)(in_r0,apiStack_18);
    iVar1 = 1;
  }
  return CONCAT44(apiStack_18[0],iVar1);
}


