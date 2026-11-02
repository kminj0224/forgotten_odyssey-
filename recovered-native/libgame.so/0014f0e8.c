/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f0e8  Symbol: itemFromNormalImage */

/* cocos2d::CCMenuItemImage::itemFromNormalImage(char const*, char const*, char const*) */

int * cocos2d::CCMenuItemImage::itemFromNormalImage(char *param_1,char *param_2,char *param_3)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCMenuItem::CCMenuItem((CCMenuItem *)this);
  iVar1 = *(int *)(DAT_0014f154 + 0x14f10a);
  this[0x45] = 0;
  this[0x46] = 0;
  this[0x47] = 0;
  *this = iVar1 + 8;
  this[0x44] = iVar1 + 0x140;
  iVar1 = initFromNormalImage((char *)this,param_1,param_2,(CCObject *)param_3,
                              (_func_void_CCObject_ptr *)0x0);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


