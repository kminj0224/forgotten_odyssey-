/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168420  Symbol: handlerWithDelegate */

/* cocos2d::CCTouchHandler::handlerWithDelegate(cocos2d::CCTouchDelegate*, int) */

int * cocos2d::CCTouchHandler::handlerWithDelegate(CCTouchDelegate *param_1,int param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x20);
  memset(this,0,0x20);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_00168468 + 0x168446) + 8;
  iVar1 = initWithDelegate((CCTouchDelegate *)this,(int)param_1);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


