/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143ef4  Symbol: push_back */

/* std::vector<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::allocator<std::basic_string<char, std::char_traits<char>, std::allocator<char> > >
   >::push_back(std::basic_string<char, std::char_traits<char>, std::allocator<char> > const&) */

void __thiscall
std::
vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
::push_back(vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
            *this,basic_string *param_1)

{
  __normal_iterator _Var1;
  
  _Var1 = *(__normal_iterator *)(this + 4);
  if (_Var1 == *(__normal_iterator *)(this + 8)) {
    _M_insert_aux(this,_Var1,param_1);
  }
  else {
    if (_Var1 != 0) {
      FUN_001ee80c(_Var1,param_1);
    }
    *(int *)(this + 4) = *(int *)(this + 4) + 4;
  }
  return;
}


