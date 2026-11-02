/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014d30e  Symbol: initWithItems */

/* cocos2d::CCMenu::initWithItems(cocos2d::CCMenuItem*, std::__va_list) */

int __thiscall cocos2d::CCMenu::initWithItems(CCMenu *this,CCMenuItem *param_1,__va_list param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = init(this);
  if ((iVar1 != 0) && (iVar1 = 1, param_1 != (CCMenuItem *)0x0)) {
    (**(code **)(*(int *)this + 200))(this,param_1,0);
    iVar2 = 0;
    iVar1 = *(int *)param_2;
    while (iVar1 != 0) {
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)this + 200))(this,iVar1,iVar2);
      iVar1 = *(int *)(param_2 + iVar2 * 4);
    }
    iVar1 = 1;
  }
  return iVar1;
}


