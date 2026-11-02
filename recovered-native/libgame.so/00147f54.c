/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147f54  Symbol: _M_insert_unique */

/* std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const,
   cocos2d::CCBMFontConfiguration*>, std::_Select1st<std::pair<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const, cocos2d::CCBMFontConfiguration*> >,
   std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >,
   std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const, cocos2d::CCBMFontConfiguration*> > >::_M_insert_unique(std::pair<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const, cocos2d::CCBMFontConfiguration*> const&) */

undefined8
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
::_M_insert_unique(pair *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
  *in_r1;
  pair *in_r2;
  _Rb_tree_node_base *p_Var4;
  pair pVar5;
  _Rb_tree_node_base *p_Var6;
  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
  *p_Var7;
  _Rb_tree_node_base *local_1c;
  
  bVar1 = true;
  p_Var4 = *(_Rb_tree_node_base **)(in_r1 + 8);
  p_Var7 = in_r1 + 4;
  while (p_Var6 = p_Var4, p_Var6 != (_Rb_tree_node_base *)0x0) {
    iVar2 = FUN_001ed288(in_r2,p_Var6 + 0x10);
    if (-1 < iVar2) {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 0xc);
    }
    else {
      p_Var4 = *(_Rb_tree_node_base **)(p_Var6 + 8);
    }
    bVar1 = -1 >= iVar2;
    p_Var7 = (_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
              *)p_Var6;
  }
  local_1c = (_Rb_tree_node_base *)p_Var7;
  if (bVar1) {
    if (p_Var7 != (_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
                   *)*(_Rb_tree_node_base **)(in_r1 + 0xc)) {
      local_1c = (_Rb_tree_node_base *)FUN_001c7f24(p_Var7);
      goto LAB_00147f9e;
    }
  }
  else {
LAB_00147f9e:
    iVar2 = FUN_001ed288(local_1c + 0x10,in_r2);
    if (-1 < iVar2) {
      *(_Rb_tree_node_base **)param_1 = local_1c;
      pVar5 = (pair)0x0;
      goto LAB_00147fc4;
    }
  }
  uVar3 = _M_insert_(in_r1,(_Rb_tree_node_base *)0x0,(_Rb_tree_node_base *)p_Var7,in_r2);
  pVar5 = (pair)0x1;
  *(undefined4 *)param_1 = uVar3;
LAB_00147fc4:
  param_1[4] = pVar5;
  return CONCAT44(in_r2,param_1);
}


