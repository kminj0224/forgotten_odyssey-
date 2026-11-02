/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001469b0  Symbol: handlerWithDelegate */

/* cocos2d::CCKeypadHandler::handlerWithDelegate(cocos2d::CCKeypadDelegate*) */

int * cocos2d::CCKeypadHandler::handlerWithDelegate(CCKeypadDelegate *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x18);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_001469ec + 0x1469ca) + 8;
  iVar1 = initWithDelegate((CCKeypadDelegate *)this);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


