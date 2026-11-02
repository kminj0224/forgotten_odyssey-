/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001375d6  Symbol: initWithTarget */

/* cocos2d::CCFollow::initWithTarget(cocos2d::CCNode*) */

undefined4 __thiscall cocos2d::CCFollow::initWithTarget(CCFollow *this,CCNode *param_1)

{
  undefined8 uVar1;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  CCObject::retain((CCObject *)param_1);
  *(CCNode **)(this + 0x20) = param_1;
  this[0x24] = (CCFollow)0x0;
  this[0x25] = (CCFollow)0x0;
  CCDirector::sharedDirector();
  uVar1 = CCDirector::getWinSize();
  CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  *(undefined4 *)(this + 0x30) = local_20;
  *(undefined4 *)(this + 0x34) = local_1c;
  __mulsf3(*(undefined4 *)(this + 0x30),0x3f000000);
  uVar1 = __mulsf3(*(undefined4 *)(this + 0x34),0x3f000000);
  CCPoint::CCPoint((CCPoint *)&local_18,(float)uVar1,(float)((ulonglong)uVar1 >> 0x20));
  *(undefined4 *)(this + 0x28) = local_18;
  *(undefined4 *)(this + 0x2c) = local_14;
  return 1;
}


