/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ee58  Symbol: itemFromString */

/* cocos2d::CCMenuItemFont::itemFromString(char const*) */

int * cocos2d::CCMenuItemFont::itemFromString(char *param_1)

{
  int iVar1;
  int *this;
  int iVar2;
  undefined auStack_1c [12];
  
  this = (int *)operator_new(300);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  this[0x48] = 0;
  iVar1 = DAT_0014eeb8;
  this[0x46] = 0;
  iVar2 = *(int *)(iVar1 + 0x14ee7e);
  *this = iVar2 + 8;
  iVar1 = DAT_0014eebc;
  this[0x44] = iVar2 + 0x138;
  this[0x49] = 0;
  FUN_001eed40(this + 0x4a,iVar1 + 0x14ee9a,auStack_1c);
  initFromString((char *)this,(CCObject *)param_1,(_func_void_CCObject_ptr *)0x0);
  CCObject::autorelease((CCObject *)this);
  return this;
}


