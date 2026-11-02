/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001468d8  Symbol: initWithDelegate */

/* cocos2d::CCKeypadHandler::initWithDelegate(cocos2d::CCKeypadDelegate*) */

undefined4 cocos2d::CCKeypadHandler::initWithDelegate(CCKeypadDelegate *param_1)

{
  CCObject *in_r1;
  
  *(CCObject **)(param_1 + 0x14) = in_r1;
  if (in_r1 != (CCObject *)0x0) {
    in_r1 = (CCObject *)
            __dynamic_cast(in_r1,*(undefined4 *)(DAT_001468fc + 0x1468ea),
                           *(undefined4 *)(DAT_00146900 + 0x1468ec),0xfffffffe);
  }
  CCObject::retain(in_r1);
  return 1;
}


