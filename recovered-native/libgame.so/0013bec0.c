/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bec0  Symbol: actionWithTarget */

/* cocos2d::CCCallFuncN::actionWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCNode*)) */

undefined8 cocos2d::CCCallFuncN::actionWithTarget(CCObject *param_1,_func_void_CCNode_ptr *param_2)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x30);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  *this = *(int *)(DAT_0013bf0c + 0x13bee6) + 8;
  iVar1 = initWithTarget((CCObject *)this,(_func_void_CCNode_ptr *)param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return CONCAT44(param_2,this);
}


