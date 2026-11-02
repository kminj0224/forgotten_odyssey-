/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165b40  Symbol: FUN_00165b40 */

undefined8 FUN_00165b40(undefined4 param_1,basic_string *param_2,undefined4 param_3)

{
  basic_string *pbVar1;
  basic_string bVar2;
  undefined4 uStack_18;
  basic_string *pbStack_14;
  undefined4 uStack_10;
  
  uStack_18 = param_1;
  if (param_2 == (basic_string *)0x0) {
    bVar2 = DAT_00165b78 + 0x165b72;
  }
  else {
    pbStack_14 = param_2;
    uStack_10 = param_3;
    FUN_001eed40(&pbStack_14,param_1,&uStack_18);
    pbVar1 = (basic_string *)
             std::
             _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>>
             ::find(param_2);
    FUN_001ed6b8(&pbStack_14);
    if (pbVar1 == param_2 + 1) {
      bVar2 = (int)&DAT_00165b78 + DAT_00165b7c;
    }
    else {
      bVar2 = pbVar1[5];
    }
  }
  return CONCAT44(uStack_18,bVar2);
}


