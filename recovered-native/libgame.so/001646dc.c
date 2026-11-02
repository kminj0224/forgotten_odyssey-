/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001646dc  Symbol: dictionaryWithDictionary */

/* cocos2d::CCMutableDictionary<std::basic_string<char, std::char_traits<char>, std::allocator<char>
   >, 
   cocos2d::CCString*>::dictionaryWithDictionary(cocos2d::CCMutableDictionary<std::basic_string<char,
   std::char_traits<char>, std::allocator<char> >, cocos2d::CCString*>*) */

undefined8 __thiscall
cocos2d::
CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
::dictionaryWithDictionary
          (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
           *this,CCMutableDictionary *param_1)

{
  int *this_00;
  CCString *pCVar1;
  int *__s;
  CCMutableDictionary *local_14;
  
  local_14 = param_1;
  this_00 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)this_00);
  __s = this_00 + 6;
  *this_00 = *(int *)(DAT_00164754 + 0x1646f6) + 8;
  memset(__s,0,0x10);
  this_00[10] = 0;
  this_00[8] = (int)__s;
  this_00[9] = (int)__s;
  this_00[0xc] = 0;
  *(CCObject *)(this_00 + 0xb) = (CCObject)0x0;
  if (*(int *)(this + 0x28) != 0) {
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(this + 0x20);
    this[0x2c] = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                  )0x1;
  }
  local_14 = (CCMutableDictionary *)(*(int *)(DAT_00164758 + 0x16472c) + 0xc);
  while (pCVar1 = (CCString *)next(this,(basic_string *)&local_14), pCVar1 != (CCString *)0x0) {
    setObject((CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
               *)this_00,pCVar1,(basic_string *)&local_14);
  }
  this[0x2c] = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
                )0x0;
  FUN_001ed6b8(&local_14);
  return CONCAT44(this,this_00);
}


