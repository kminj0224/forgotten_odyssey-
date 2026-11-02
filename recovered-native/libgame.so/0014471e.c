/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014471e  Symbol: addObject */

/* cocos2d::CCSet::addObject(cocos2d::CCObject*) */

undefined8 cocos2d::CCSet::addObject(CCObject *param_1)

{
  CCObject *in_r1;
  CCObject *apCStack_10 [2];
  
  if (in_r1 != (CCObject *)0x0) {
    CCObject::retain(in_r1);
  }
  std::
  _Rb_tree<cocos2d::CCObject*,cocos2d::CCObject*,std::_Identity<cocos2d::CCObject*>,std::less<cocos2d::CCObject*>,std::allocator<cocos2d::CCObject*>>
  ::_M_insert_unique(apCStack_10);
  return CONCAT44(in_r1,param_1);
}


