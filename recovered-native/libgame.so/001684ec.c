/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001684ec  Symbol: handlerWithDelegate */

/* cocos2d::CCTargetedTouchHandler::handlerWithDelegate(cocos2d::CCTouchDelegate*, int, bool) */

int * cocos2d::CCTargetedTouchHandler::handlerWithDelegate
                (CCTouchDelegate *param_1,int param_2,bool param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x28);
  memset(this,0,0x28);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_00168538 + 0x168514) + 8;
  iVar1 = initWithDelegate((CCTargetedTouchHandler *)this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


