/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001475c8  Symbol: parseInfoArguments */

/* cocos2d::CCBMFontConfiguration::parseInfoArguments(std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >) */

undefined8 cocos2d::CCBMFontConfiguration::parseInfoArguments(basic_string param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_r1;
  char *in_r3;
  char *local_14;
  
  local_14 = in_r3;
  iVar1 = FUN_001ece40(in_r1,DAT_00147618 + 0x1475d8,0,in_r3,param_1);
  iVar2 = FUN_001ece70(in_r1,0x20,iVar1);
  FUN_001eebe0(&local_14,in_r1,iVar1,iVar2 - iVar1);
  iVar1 = param_1 + 0x28;
  sscanf(local_14,(char *)(DAT_0014761c + 0x147600),param_1 + 0x20,param_1 + 0x24);
  FUN_001ed6b8(&local_14);
  return CONCAT44(param_1 + 0x1c,iVar1);
}


