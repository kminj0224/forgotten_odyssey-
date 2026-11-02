/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f158  Symbol: itemFromNormalImage */

/* cocos2d::CCMenuItemImage::itemFromNormalImage(char const*, char const*, char const*,
   cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

int * cocos2d::CCMenuItemImage::itemFromNormalImage
                (char *param_1,char *param_2,char *param_3,CCObject *param_4,
                _func_void_CCObject_ptr *param_5)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  this[0x45] = 0;
  this[0x46] = 0;
  this[0x47] = 0;
  iVar1 = *(int *)(DAT_0014f1c4 + 0x14f186);
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x140;
  iVar1 = initFromNormalImage((char *)this,param_1,param_2,(CCObject *)param_3,
                              (_func_void_CCObject_ptr *)param_4);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


