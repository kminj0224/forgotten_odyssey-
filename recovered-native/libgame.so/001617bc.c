/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001617bc  Symbol: ~list */

/* std::list<cocos2d::VolatileTexture*, std::allocator<cocos2d::VolatileTexture*> >::~list() */

void __thiscall
std::list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>>::~list
          (list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> *this)

{
  list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> **pplVar1;
  list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> **pplVar2;
  
  pplVar1 = *(list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> ***)this;
  while (pplVar1 !=
         (list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> **)this) {
    pplVar2 = (list<cocos2d::VolatileTexture*,std::allocator<cocos2d::VolatileTexture*>> **)*pplVar1
    ;
    operator_delete(pplVar1);
    pplVar1 = pplVar2;
  }
  return;
}


