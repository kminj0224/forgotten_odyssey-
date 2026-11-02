/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001559ba  Symbol: _M_initialize_map */

/* std::_Deque_base<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*> >::_M_initialize_map(unsigned int) */

undefined8 __thiscall
std::
_Deque_base<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
::_M_initialize_map(_Deque_base<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
                    *this,uint param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  int iVar4;
  void **ppvVar5;
  void **ppvVar6;
  void **ppvVar7;
  
  iVar4 = (param_1 >> 7) + 1;
  uVar1 = (param_1 >> 7) + 3;
  if (uVar1 < 8) {
    uVar1 = 8;
  }
  *(uint *)(this + 4) = uVar1;
  pvVar2 = operator_new(uVar1 << 2);
  *(void **)this = pvVar2;
  ppvVar6 = (void **)((int)pvVar2 + ((uint)(*(int *)(this + 4) - iVar4) >> 1) * 4);
  ppvVar7 = ppvVar6 + iVar4;
  for (ppvVar5 = ppvVar6; ppvVar5 < ppvVar7; ppvVar5 = ppvVar5 + 1) {
    pvVar2 = operator_new(0x200);
    *ppvVar5 = pvVar2;
  }
  *(void ***)(this + 0x14) = ppvVar6;
  pvVar2 = *ppvVar6;
  *(void **)(this + 0xc) = pvVar2;
  *(void ***)(this + 0x24) = ppvVar7 + -1;
  *(int *)(this + 0x10) = (int)pvVar2 + 0x200;
  pvVar3 = ppvVar7[-1];
  *(void **)(this + 8) = pvVar2;
  *(int *)(this + 0x20) = (int)pvVar3 + 0x200;
  *(void **)(this + 0x1c) = pvVar3;
  *(void **)(this + 0x18) = (void *)((int)pvVar3 + (param_1 & 0x7f) * 4);
  return CONCAT44(param_1,this);
}


