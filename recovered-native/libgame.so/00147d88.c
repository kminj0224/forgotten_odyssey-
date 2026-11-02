/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147d88  Symbol: ~CCBMFontConfiguration */

/* cocos2d::CCBMFontConfiguration::~CCBMFontConfiguration() */

CCBMFontConfiguration * __thiscall
cocos2d::CCBMFontConfiguration::~CCBMFontConfiguration(CCBMFontConfiguration *this)

{
  _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
  *this_00;
  
  this_00 = *(_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
              **)(this + 0x14);
  *(int *)this = *(int *)(DAT_00147dd0 + 0x147d94) + 8;
  if (this_00 !=
      (_Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
       *)0x0) {
    std::
    _Rb_tree<unsigned_int,std::pair<unsigned_int_const,cocos2d::_BMFontDef>,std::_Select1st<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>,std::less<unsigned_int>,std::allocator<std::pair<unsigned_int_const,cocos2d::_BMFontDef>>>
    ::_M_erase(this_00,*(_Rb_tree_node **)(this_00 + 8));
    operator_delete(this_00);
    *(undefined4 *)(this + 0x14) = 0;
  }
  purgeKerningDictionary(this);
  FUN_001edf58(this + 0x2c);
  FUN_001ed6b8(this + 0x2c);
  CCObject::~CCObject((CCObject *)this);
  return this;
}


