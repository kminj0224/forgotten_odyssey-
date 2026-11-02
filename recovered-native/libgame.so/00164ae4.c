/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164ae4  Symbol: objectNamed */

/* cocos2d::CCTMXObjectGroup::objectNamed(char const*) */

int __thiscall cocos2d::CCTMXObjectGroup::objectNamed(CCTMXObjectGroup *this,char *param_1)

{
  int **ppiVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined auStack_20 [4];
  undefined auStack_1c [8];
  
  iVar4 = *(int *)(this + 0x20);
  if (iVar4 != 0) {
    ppiVar1 = (int **)(iVar4 + 0x14);
    iVar4 = *(int *)(iVar4 + 0x18) - (int)*ppiVar1 >> 2;
    if (iVar4 != 0) {
      iVar4 = DAT_00164b54 + 0x164b02;
      piVar2 = *ppiVar1;
      do {
        piVar7 = piVar2;
        if (piVar7 == *(int **)(*(int *)(this + 0x20) + 0x18)) {
          return 0;
        }
        iVar5 = *piVar7;
        FUN_001eed40(auStack_1c,iVar4,auStack_20);
        iVar3 = std::
                _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCString*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCString*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCString*>>>
                ::find((basic_string *)(iVar5 + 0x14));
        iVar6 = 0;
        if (iVar3 != iVar5 + 0x18) {
          iVar6 = *(int *)(iVar3 + 0x14);
        }
        FUN_001ed6b8(auStack_1c);
        piVar2 = piVar7 + 1;
      } while ((iVar6 == 0) || (iVar3 = FUN_001ed39c(iVar6 + 0x14,param_1), iVar3 != 0));
      iVar4 = *piVar7;
    }
  }
  return iVar4;
}


