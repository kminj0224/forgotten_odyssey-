/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001488b4  Symbol: FNTConfigLoadFile */

/* cocos2d::FNTConfigLoadFile(char const*) */

CCBMFontConfiguration * cocos2d::FNTConfigLoadFile(char *param_1)

{
  int *piVar1;
  int *piVar2;
  CCBMFontConfiguration *pCVar3;
  int **ppiVar4;
  undefined auStack_20 [4];
  basic_string abStack_1c [2];
  
  ppiVar4 = *(int ***)(DAT_0014893c + 0x1488c0);
  if (*ppiVar4 == (int *)0x0) {
    piVar1 = (int *)operator_new(0x34);
    CCObject::CCObject((CCObject *)piVar1);
    piVar2 = piVar1 + 6;
    *piVar1 = *(int *)(DAT_00148940 + 0x1488dc) + 8;
    memset(piVar2,0,0x10);
    piVar1[10] = 0;
    piVar1[8] = (int)piVar2;
    piVar1[9] = (int)piVar2;
    piVar1[0xc] = 0;
    *ppiVar4 = piVar1;
    *(CCObject *)(piVar1 + 0xb) = (CCObject)0x0;
  }
  FUN_001eed40(abStack_1c,param_1,auStack_20);
  piVar2 = *ppiVar4;
  piVar1 = (int *)std::
                  _Rb_tree<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>,std::_Select1st<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>,std::less<std::basic_string<char,std::char_traits<char>,std::allocator<char>>>,std::allocator<std::pair<std::basic_string<char,std::char_traits<char>,std::allocator<char>>const,cocos2d::CCBMFontConfiguration*>>>
                  ::find((basic_string *)(piVar2 + 5));
  if ((piVar1 == piVar2 + 6) ||
     (pCVar3 = (CCBMFontConfiguration *)piVar1[5], pCVar3 == (CCBMFontConfiguration *)0x0)) {
    pCVar3 = (CCBMFontConfiguration *)CCBMFontConfiguration::configurationWithFNTFile(param_1);
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
    ::setObject((CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCBMFontConfiguration*>
                 *)*ppiVar4,pCVar3,abStack_1c);
  }
  FUN_001ed6b8(abStack_1c);
  return pCVar3;
}


