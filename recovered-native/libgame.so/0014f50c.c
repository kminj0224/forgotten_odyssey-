/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f50c  Symbol: itemWithTarget */

/* cocos2d::CCMenuItemToggle::itemWithTarget(cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*), cocos2d::CCMenuItem*, ...) */

int * cocos2d::CCMenuItemToggle::itemWithTarget
                (CCObject *param_1,_func_void_CCObject_ptr *param_2,CCMenuItem *param_3,...)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014f574 + 0x14f536);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x138;
  *(CCMenuItem *)(this + 0x45) = (CCMenuItem)0x0;
  this[0x46] = 0;
  this[0x47] = 0;
  initWithTarget((CCObject *)this,(_func_void_CCObject_ptr *)param_1,(CCMenuItem *)param_2,
                 (__va_list)param_3);
  CCObject::autorelease((CCObject *)this);
  return this;
}


