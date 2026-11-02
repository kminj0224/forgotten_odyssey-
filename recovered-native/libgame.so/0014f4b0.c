/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f4b0  Symbol: initWithTarget */

/* cocos2d::CCMenuItemToggle::initWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenuItem*, std::__va_list) */

undefined8
cocos2d::CCMenuItemToggle::initWithTarget
          (CCObject *param_1,_func_void_CCObject_ptr *param_2,CCMenuItem *param_3,__va_list param_4)

{
  int *this;
  CCMenuItem *in_stack_00000000;
  CCMenuItem **in_stack_00000004;
  
  CCMenuItem::initWithTarget(param_1,param_2);
  this = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this);
  *this = *(int *)(DAT_0014f508 + 0x14f4d2) + 8;
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  *(int **)(param_1 + 0x11c) = this;
  while (in_stack_00000000 != (CCMenuItem *)0x0) {
    CCMutableArray<cocos2d::CCMenuItem*>::addObject
              (*(CCMutableArray<cocos2d::CCMenuItem*> **)(param_1 + 0x11c),in_stack_00000000);
    in_stack_00000000 = *in_stack_00000004;
    in_stack_00000004 = in_stack_00000004 + 1;
  }
  *(undefined4 *)(param_1 + 0x118) = 0xffffffff;
  (**(code **)(*(int *)param_1 + 0x114))(param_1);
  return CONCAT44(param_3,1);
}


