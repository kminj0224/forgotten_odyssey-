/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eb32  Symbol: setTarget */

/* cocos2d::CCMenuItem::setTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined8 cocos2d::CCMenuItem::setTarget(CCObject *param_1,_func_void_CCObject_ptr *param_2)

{
  undefined4 in_r2;
  undefined4 in_r3;
  
  *(_func_void_CCObject_ptr **)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x104) = in_r2;
  *(undefined4 *)(param_1 + 0x108) = in_r3;
  return CONCAT44(param_2,param_1);
}


