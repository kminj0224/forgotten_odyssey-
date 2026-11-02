/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016721e  Symbol: find */

/* std::_Rb_tree<std::basic_string<char, std::char_traits<char>, std::allocator<char> >,
   std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> > const, int>,
   std::_Select1st<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const, int> >, std::less<std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   >, std::allocator<std::pair<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   > const, int> > >::find(std::basic_string<char, std::char_traits<char>, std::allocator<char> >
   const&) */

basic_string *
std::
_Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,int>>>
::find(basic_string *param_1)

{
  basic_string *pbVar1;
  int iVar2;
  undefined4 in_r1;
  basic_string *pbVar3;
  basic_string *pbVar4;
  basic_string *pbVar5;
  
  pbVar5 = param_1 + 1;
  pbVar1 = (basic_string *)param_1[2];
  pbVar4 = pbVar5;
  while (pbVar3 = pbVar1, pbVar3 != (basic_string *)0x0) {
    iVar2 = FUN_001ed288(pbVar3 + 4,in_r1);
    if (iVar2 < 0) {
      pbVar1 = (basic_string *)pbVar3[3];
    }
    else {
      pbVar1 = (basic_string *)pbVar3[2];
      pbVar4 = pbVar3;
    }
  }
  if ((pbVar4 != pbVar5) && (iVar2 = FUN_001ed288(in_r1,pbVar4 + 4), iVar2 < 0)) {
    pbVar4 = pbVar5;
  }
  return pbVar4;
}


