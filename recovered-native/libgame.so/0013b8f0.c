/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b8f0  Symbol: initWithTarget */

/* cocos2d::CCCallFuncN::initWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCNode*)) */

int cocos2d::CCCallFuncN::initWithTarget(CCObject *param_1,_func_void_CCNode_ptr *param_2)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  iVar1 = CCCallFunc::initWithTarget((CCCallFunc *)param_1,(CCObject *)param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
    *(undefined4 *)(param_1 + 0x28) = in_r2;
    *(undefined4 *)(param_1 + 0x2c) = in_r3;
  }
  return iVar1;
}


