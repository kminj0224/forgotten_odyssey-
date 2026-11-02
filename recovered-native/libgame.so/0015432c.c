/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015432c  Symbol: FUN_0015432c */

undefined8 FUN_0015432c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uStack_10;
  int iStack_c;
  
  uStack_10 = param_1;
  if (param_2 == 0) {
    puVar2 = (undefined *)(DAT_00154370 + 0x154368);
  }
  else {
    iStack_c = param_2;
    FUN_001eed40(&iStack_c,param_1,&uStack_10);
    iVar1 = std::
            _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCObject*>>>
            ::find((basic_string *)(param_2 + 0x14));
    iVar3 = 0;
    if (iVar1 != param_2 + 0x18) {
      iVar3 = *(int *)(iVar1 + 0x14);
    }
    FUN_001ed6b8(&iStack_c);
    if (iVar3 == 0) {
      puVar2 = &UNK_0015436e + DAT_00154374;
    }
    else {
      puVar2 = *(undefined **)(iVar3 + 0x14);
    }
  }
  return CONCAT44(uStack_10,puVar2);
}


