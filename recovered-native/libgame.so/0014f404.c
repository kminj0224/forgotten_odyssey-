/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f404  Symbol: initWithItem */

/* cocos2d::CCMenuItemToggle::initWithItem(cocos2d::CCMenuItem*) */

undefined4 __thiscall
cocos2d::CCMenuItemToggle::initWithItem(CCMenuItemToggle *this,CCMenuItem *param_1)

{
  int *this_00;
  int iVar1;
  
  CCMenuItem::initWithTarget((CCObject *)this,(_func_void_CCObject_ptr *)0x0);
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  iVar1 = *(int *)(DAT_0014f460 + 0x14f432);
  this_00[5] = 0;
  this_00[6] = 0;
  *this_00 = iVar1 + 8;
  this_00[7] = 0;
  *(int **)(this + 0x11c) = this_00;
  CCMutableArray<cocos2d::CCMenuItem*>::addObject
            ((CCMutableArray<cocos2d::CCMenuItem*> *)this_00,param_1);
  *(undefined4 *)(this + 0x118) = 0xffffffff;
  (**(code **)(*(int *)this + 0x114))(this,0);
  return 1;
}


