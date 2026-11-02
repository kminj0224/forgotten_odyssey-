/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001447e8  Symbol: removeObject */

/* cocos2d::CCSet::removeObject(cocos2d::CCObject*) */

undefined8 cocos2d::CCSet::removeObject(CCObject *param_1)

{
  CCObject *in_r1;
  CCObject *in_r2;
  _Rb_tree_const_iterator in_r3;
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  *this;
  CCObject *local_10;
  _Rb_tree_const_iterator local_c;
  
  this = *(_Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
           **)(param_1 + 0x14);
  local_10 = in_r2;
  local_c = in_r3;
  std::
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  ::equal_range(&local_10);
  std::
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  ::_M_erase_aux(this,(_Rb_tree_const_iterator)local_10,local_c);
  if (in_r1 != (CCObject *)0x0) {
    CCObject::release(in_r1);
  }
  return CONCAT44(in_r1,param_1);
}


