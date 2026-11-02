/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ea80  Symbol: initWithTarget */

/* cocos2d::CCMenuItem::initWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

void cocos2d::CCMenuItem::initWithTarget(CCObject *param_1,_func_void_CCObject_ptr *param_2)

{
  undefined4 in_r2;
  undefined4 in_r3;
  code *pcVar1;
  float in_s0;
  float in_s1;
  CCPoint aCStack_18 [8];
  
  pcVar1 = *(code **)(*(int *)param_1 + 0x74);
  CCPoint::CCPoint(aCStack_18,in_s0,in_s1);
  (*pcVar1)(param_1,aCStack_18);
  *(_func_void_CCObject_ptr **)(param_1 + 0x100) = param_2;
  *(undefined4 *)(param_1 + 0x104) = in_r2;
  *(undefined4 *)(param_1 + 0x108) = in_r3;
  param_1[0xfd] = (CCObject)0x1;
  param_1[0xfc] = (CCObject)0x0;
  return;
}


