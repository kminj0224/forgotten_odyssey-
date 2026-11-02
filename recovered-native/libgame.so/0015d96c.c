/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015d96c  Symbol: getStringForKey */

/* cocos2d::CCUserDefault::getStringForKey(char const*, std::basic_string<char,
   std::char_traits<char>, std::allocator<char> > const&) */

undefined8 cocos2d::CCUserDefault::getStringForKey(char *param_1,basic_string *param_2)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcStack_18;
  basic_string *pbStack_14;
  
  pcStack_18 = param_1;
  pbStack_14 = param_2;
  iVar1 = FUN_0015d864(in_r2);
  FUN_001ee80c(param_1,in_r3);
  if (iVar1 != 0) {
    FUN_001eed40(&pbStack_14,iVar1,&pcStack_18);
    FUN_001ee874(param_1,&pbStack_14);
    FUN_001ed6b8(&pbStack_14);
    (***(code ***)(DAT_0015d9b0 + 0x15d9a6))(iVar1);
  }
  return CONCAT44(pcStack_18,param_1);
}


