/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015da6a  Symbol: setStringForKey */

/* cocos2d::CCUserDefault::setStringForKey(char const*, std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const&) */

char * cocos2d::CCUserDefault::setStringForKey(char *param_1,basic_string *param_2)

{
  int *in_r2;
  
  if ((param_2 != (basic_string *)0x0) && (*in_r2 != 0)) {
    param_1 = (char *)FUN_0015d876(param_2,*in_r2);
  }
  return param_1;
}


