/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f464  Symbol: itemWithItem */

/* cocos2d::CCMenuItemToggle::itemWithItem(cocos2d::CCMenuItem*) */

int * cocos2d::CCMenuItemToggle::itemWithItem(CCMenuItem *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014f4ac + 0x14f480);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x138;
  *(CCMenuItem *)(this + 0x45) = (CCMenuItem)0x0;
  this[0x46] = 0;
  this[0x47] = 0;
  initWithItem((CCMenuItemToggle *)this,param_1);
  CCObject::autorelease((CCObject *)this);
  return this;
}


