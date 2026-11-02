/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eb98  Symbol: itemWithLabel */

/* cocos2d::CCMenuItemLabel::itemWithLabel(cocos2d::CCNode*) */

int * cocos2d::CCMenuItemLabel::itemWithLabel(CCNode *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x124);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014ebe4 + 0x14ebb6);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x138;
  this[0x46] = 0;
  this[0x48] = 0;
  initWithLabel((CCMenuItemLabel *)this,param_1,(CCObject *)0x0,(_func_void_CCObject_ptr *)0x0);
  CCObject::autorelease((CCObject *)this);
  return this;
}


