/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b90c  Symbol: initWithTarget */

/* cocos2d::CCCallFuncO::initWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCObject*) */

int cocos2d::CCCallFuncO::initWithTarget
              (CCObject *param_1,_func_void_CCObject_ptr *param_2,CCObject *param_3)

{
  int iVar1;
  undefined4 in_r3;
  CCObject *in_stack_00000000;
  
  iVar1 = CCCallFunc::initWithTarget((CCCallFunc *)param_1,(CCObject *)param_2);
  if (iVar1 != 0) {
    *(CCObject **)(param_1 + 0x30) = in_stack_00000000;
    if (in_stack_00000000 != (CCObject *)0x0) {
      CCObject::retain(in_stack_00000000);
    }
    iVar1 = 1;
    *(CCObject **)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = in_r3;
  }
  return iVar1;
}


