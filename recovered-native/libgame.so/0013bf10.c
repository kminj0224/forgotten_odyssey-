/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bf10  Symbol: actionWithTarget */

/* cocos2d::CCCallFuncND::actionWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*) */

int * cocos2d::CCCallFuncND::actionWithTarget
                (CCObject *param_1,_func_void_CCNode_ptr_void_ptr *param_2,void *param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  this[9] = 0;
  this[10] = 0;
  this[0xb] = 0;
  *this = *(int *)(DAT_0013bf6c + 0x13bf42) + 8;
  iVar1 = initWithTarget((CCObject *)this,(_func_void_CCNode_ptr_void_ptr *)param_1,param_2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


