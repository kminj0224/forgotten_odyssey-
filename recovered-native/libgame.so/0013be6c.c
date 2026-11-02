/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013be6c  Symbol: actionWithTarget */

/* cocos2d::CCCallFunc::actionWithTarget(cocos2d::CCObject*, void (cocos2d::CCObject::*)()) */

undefined8 __thiscall
cocos2d::CCCallFunc::actionWithTarget(CCCallFunc *this,CCObject *param_1,_func_void *param_2)

{
  int *this_00;
  int iVar1;
  
  this_00 = (int *)operator_new(0x30);
  CCActionInstant::CCActionInstant((CCActionInstant *)this_00);
  *this_00 = *(int *)(DAT_0013bebc + 0x13be8a) + 8;
  this_00[9] = 0;
  this_00[10] = 0;
  this_00[0xb] = 0;
  iVar1 = initWithTarget((CCCallFunc *)this_00,(CCObject *)this);
  if (iVar1 == 0) {
    (**(code **)(*this_00 + 8))(this_00);
    this_00 = (int *)0x0;
  }
  else {
    this_00[10] = (int)param_1;
    this_00[0xb] = (int)param_2;
    CCObject::autorelease((CCObject *)this_00);
  }
  return CONCAT44(param_1,this_00);
}


