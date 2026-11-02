/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156504  Symbol: __copy_m<std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*const&,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*const*>,std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*&,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>**>> */

/* std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>*&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>**> std::__copy_move<false,
   false, 
   std::random_access_iterator_tag>::__copy_m<std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>* const&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>* const*>,
   std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>*&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>**>
   >(std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>* const&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>* const*>,
   std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>* const&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>* const*>,
   std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >, cocos2d::CCObject*>*,
   cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, cocos2d::CCObject*>*&, cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCObject*>**>) */

_Deque_iterator
std::__copy_move<false,false,std::random_access_iterator_tag>::
__copy_m<std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*const&,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*const*>,std::_Deque_iterator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*&,cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>**>>
          (_Deque_iterator param_1,_Deque_iterator param_2,_Deque_iterator param_3)

{
  undefined4 *in_r3;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int in_stack_00000000;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  int *in_stack_00000014;
  
  for (iVar1 = ((in_stack_00000010 - in_stack_00000000 >> 2) + -1) * 0x80 +
               (in_stack_00000004 - in_stack_00000008 >> 2) + ((int)((int)in_r3 - param_2) >> 2);
      0 < iVar1; iVar1 = iVar1 + -1) {
    uVar3 = *(undefined4 *)param_2;
    param_2 = param_2 + 4;
    *(undefined4 *)*in_stack_00000014 = uVar3;
    if ((undefined4 *)param_2 == in_r3) {
      param_2 = *(_Deque_iterator *)(in_stack_00000000 + 4);
      in_r3 = (undefined4 *)(param_2 + 0x200);
      in_stack_00000000 = in_stack_00000000 + 4;
    }
    iVar2 = *in_stack_00000014;
    *in_stack_00000014 = iVar2 + 4;
    if (iVar2 + 4 == in_stack_00000014[2]) {
      iVar2 = in_stack_00000014[3];
      in_stack_00000014[3] = iVar2 + 4;
      iVar2 = *(int *)(iVar2 + 4);
      in_stack_00000014[1] = iVar2;
      in_stack_00000014[2] = iVar2 + 0x200;
      *in_stack_00000014 = iVar2;
    }
  }
  *(int *)param_1 = *in_stack_00000014;
  *(int *)(param_1 + 4) = in_stack_00000014[1];
  *(int *)(param_1 + 8) = in_stack_00000014[2];
  *(int *)(param_1 + 0xc) = in_stack_00000014[3];
  return param_1;
}


