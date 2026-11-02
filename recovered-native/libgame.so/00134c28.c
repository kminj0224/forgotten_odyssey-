/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00134c28  Symbol: checkForGLExtension */

/* cocos2d::CCConfiguration::checkForGLExtension(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

char * __thiscall
cocos2d::CCConfiguration::checkForGLExtension(CCConfiguration *this,basic_string *param_1)

{
  char *pcVar1;
  
  pcVar1 = *(char **)(this + 0x2c);
  if (pcVar1 != (char *)0x0) {
    pcVar1 = strstr(pcVar1,(char *)*param_1);
    pcVar1 = (char *)(uint)(pcVar1 != (char *)0x0);
  }
  return pcVar1;
}


