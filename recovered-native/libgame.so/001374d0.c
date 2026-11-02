/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001374d0  Symbol: initWithAction */

/* cocos2d::CCSpeed::initWithAction(cocos2d::CCActionInterval*, float) */

undefined4 __thiscall
cocos2d::CCSpeed::initWithAction(CCSpeed *this,CCActionInterval *param_1,float param_2)

{
  undefined4 in_r2;
  
  CCObject::retain((CCObject *)param_1);
  *(CCActionInterval **)(this + 0x24) = param_1;
  *(undefined4 *)(this + 0x20) = in_r2;
  return 1;
}


