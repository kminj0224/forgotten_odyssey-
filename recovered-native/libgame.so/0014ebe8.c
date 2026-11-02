/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ebe8  Symbol: itemWithLabel */

/* cocos2d::CCMenuItemLabel::itemWithLabel(cocos2d::CCNode*, cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

int * cocos2d::CCMenuItemLabel::itemWithLabel
                (CCNode *param_1,CCObject *param_2,_func_void_CCObject_ptr *param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x124);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014ec3c + 0x14ec0a);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x138;
  this[0x46] = 0;
  this[0x48] = 0;
  initWithLabel((CCMenuItemLabel *)this,param_1,param_2,param_3);
  CCObject::autorelease((CCObject *)this);
  return this;
}


