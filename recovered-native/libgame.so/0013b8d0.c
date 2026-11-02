/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b8d0  Symbol: initWithTarget */

/* cocos2d::CCCallFuncND::initWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCNode*, void*), void*) */

int cocos2d::CCCallFuncND::initWithTarget
              (CCObject *param_1,_func_void_CCNode_ptr_void_ptr *param_2,void *param_3)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  
  iVar1 = CCCallFunc::initWithTarget((CCCallFunc *)param_1,(CCObject *)param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
    *(undefined4 *)(param_1 + 0x30) = in_stack_00000000;
    *(void **)(param_1 + 0x28) = param_3;
    *(undefined4 *)(param_1 + 0x2c) = in_r3;
  }
  return iVar1;
}


