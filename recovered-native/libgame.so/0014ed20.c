/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ed20  Symbol: itemFromString */

/* cocos2d::CCMenuItemAtlasFont::itemFromString(char const*, char const*, int, int, char,
   cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

int * cocos2d::CCMenuItemAtlasFont::itemFromString
                (char *param_1,char *param_2,int param_3,int param_4,char param_5,CCObject *param_6,
                _func_void_CCObject_ptr *param_7)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x124);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  this[0x46] = 0;
  this[0x48] = 0;
  iVar1 = *(int *)(DAT_0014ed84 + 0x14ed52);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x138;
  initFromString((CCMenuItemAtlasFont *)this,param_1,param_2,param_3,param_4,param_5,param_6,param_7
                );
  CCObject::autorelease((CCObject *)this);
  return this;
}


