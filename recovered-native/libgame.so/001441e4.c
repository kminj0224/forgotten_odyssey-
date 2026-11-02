/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001441e4  Symbol: CCPointFromString */

/* cocos2d::CCPointFromString(char const*) */

cocos2d * __thiscall cocos2d::CCPointFromString(cocos2d *this,char *param_1)

{
  int iVar1;
  char *__nptr;
  char *__nptr_00;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_2c;
  undefined4 local_28;
  char **local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar2 = *(undefined4 *)(DAT_00144258 + 0x144204);
  *(undefined4 *)this = *(undefined4 *)(DAT_00144258 + 0x144200);
  *(undefined4 *)(this + 4) = uVar2;
  local_24 = (char **)0x0;
  local_20 = 0;
  local_1c = 0;
  iVar1 = FUN_00143f1c(param_1,&local_24);
  if (iVar1 != 0) {
    __nptr = *local_24;
    strtod(__nptr,(char **)0x0);
    __nptr_00 = local_24[1];
    strtod(__nptr_00,(char **)0x0);
    __truncdfsf2(__nptr,extraout_r1);
    uVar3 = __truncdfsf2(__nptr_00,extraout_r1_00);
    CCPoint::CCPoint((CCPoint *)&local_2c,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
    *(undefined4 *)this = local_2c;
    *(undefined4 *)(this + 4) = local_28;
  }
  std::
  vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
  ::~vector((vector<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::allocator<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>>
             *)&local_24);
  return this;
}


