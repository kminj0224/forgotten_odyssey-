/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eac4  Symbol: itemWithTarget */

/* cocos2d::CCMenuItem::itemWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined8 cocos2d::CCMenuItem::itemWithTarget(CCObject *param_1,_func_void_CCObject_ptr *param_2)

{
  CCMenuItem *this;
  
  this = (CCMenuItem *)operator_new(0x110);
  CCMenuItem(this);
  initWithTarget((CCObject *)this,(_func_void_CCObject_ptr *)param_1);
  CCObject::autorelease((CCObject *)this);
  return CONCAT44(param_2,this);
}


