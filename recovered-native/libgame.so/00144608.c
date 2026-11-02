/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144608  Symbol: CCSet */

/* cocos2d::CCSet::CCSet(cocos2d::CCSet const&) */

CCSet * __thiscall cocos2d::CCSet::CCSet(CCSet *this,CCSet *param_1)

{
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *this_00;
  int iVar1;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00144650 + 0x14461a) + 8;
  this_00 = (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
             *)operator_new(0x18);
  std::
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  ::_Rb_tree(this_00,*(_Rb_tree **)(param_1 + 0x14));
  *(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
    **)(this + 0x14) = this_00;
  for (iVar1 = *(int *)(this_00 + 0xc);
      (iVar1 != *(int *)(this + 0x14) + 4 && (*(CCObject **)(iVar1 + 0x10) != (CCObject *)0x0));
      iVar1 = thunk_FUN_001c7eac(iVar1)) {
    CCObject::retain(*(CCObject **)(iVar1 + 0x10));
  }
  return this;
}


