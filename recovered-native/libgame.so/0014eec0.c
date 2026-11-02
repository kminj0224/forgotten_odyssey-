/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014eec0  Symbol: itemFromString */

/* cocos2d::CCMenuItemFont::itemFromString(char const*, cocos2d::CCObject*, void
   (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

int * cocos2d::CCMenuItemFont::itemFromString
                (char *param_1,CCObject *param_2,_func_void_CCObject_ptr *param_3)

{
  int iVar1;
  int *this;
  int iVar2;
  undefined auStack_14 [4];
  
  this = (int *)operator_new(300);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  this[0x48] = 0;
  iVar1 = DAT_0014ef28;
  this[0x46] = 0;
  iVar2 = *(int *)(iVar1 + 0x14eeec);
  *this = iVar2 + 8;
  this[0x49] = 0;
  iVar1 = DAT_0014ef2c;
  this[0x44] = iVar2 + 0x138;
  FUN_001eed40(this + 0x4a,iVar1 + 0x14ef08,auStack_14);
  initFromString((char *)this,(CCObject *)param_1,(_func_void_CCObject_ptr *)param_2);
  CCObject::autorelease((CCObject *)this);
  return this;
}


