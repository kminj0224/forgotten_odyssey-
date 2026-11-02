/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001444dc  Symbol: ~CCSet */

/* cocos2d::CCSet::~CCSet() */

CCSet * __thiscall cocos2d::CCSet::~CCSet(CCSet *this)

{
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *this_00;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *p_Var1;
  
  *(int *)this = *(int *)(DAT_0014452c + 0x1444e6) + 8;
  for (p_Var1 = *(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
                  **)(*(int *)(this + 0x14) + 0xc);
      (this_00 = *(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
                   **)(this + 0x14), p_Var1 != this_00 + 4 &&
      (*(CCObject **)(p_Var1 + 0x10) != (CCObject *)0x0));
      p_Var1 = (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
                *)thunk_FUN_001c7eac(p_Var1)) {
    CCObject::release(*(CCObject **)(p_Var1 + 0x10));
  }
  if (this_00 !=
      (_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
       *)0x0) {
    std::
    _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
    ::_M_erase(this_00,*(_Rb_tree_node **)(this_00 + 8));
    operator_delete(this_00);
    *(undefined4 *)(this + 0x14) = 0;
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


