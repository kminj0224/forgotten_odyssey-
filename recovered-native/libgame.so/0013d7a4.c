/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d7a4  Symbol: initWithAction */

/* cocos2d::CCRepeatForever::initWithAction(cocos2d::CCActionInterval*) */

undefined4 __thiscall
cocos2d::CCRepeatForever::initWithAction(CCRepeatForever *this,CCActionInterval *param_1)

{
  CCObject::retain((CCObject *)param_1);
  *(CCActionInterval **)(this + 0x2c) = param_1;
  return 1;
}


