/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168368  Symbol: initWithDelegate */

/* cocos2d::CCTouchHandler::initWithDelegate(cocos2d::CCTouchDelegate*, int) */

undefined4 cocos2d::CCTouchHandler::initWithDelegate(CCTouchDelegate *param_1,int param_2)

{
  undefined4 in_r2;
  
  *(int *)(param_1 + 0x14) = param_2;
  if (param_2 != 0) {
    param_2 = __dynamic_cast(param_2,*(undefined4 *)(DAT_00168398 + 0x16837e),
                             *(undefined4 *)(DAT_0016839c + 0x168380),0xfffffffe);
  }
  CCObject::retain((CCObject *)param_2);
  *(undefined4 *)(param_1 + 0x18) = in_r2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return 1;
}


