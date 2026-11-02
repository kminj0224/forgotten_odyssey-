/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00156d20  Symbol: dictionaryWithContentsOfFileThreadSafe */

/* cocos2d::CCFileUtils::dictionaryWithContentsOfFileThreadSafe(char const*) */

int cocos2d::CCFileUtils::dictionaryWithContentsOfFileThreadSafe(char *param_1)

{
  int iVar1;
  CCSAXParser aCStack_a4 [4];
  int local_a0;
  int local_9c;
  deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
  adStack_94 [40];
  undefined auStack_6c [12];
  deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
  adStack_60 [40];
  deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>> adStack_38 [44];
  
  CCDictMaker::CCDictMaker((CCDictMaker *)&local_a0);
  CCSAXParser::CCSAXParser(aCStack_a4);
  iVar1 = CCSAXParser::init((char *)aCStack_a4);
  if (iVar1 != 0) {
    CCSAXParser::setDelegator(aCStack_a4,(CCSAXDelegator *)&local_a0);
    CCSAXParser::parse(aCStack_a4,param_1);
    iVar1 = local_9c;
  }
  CCSAXParser::~CCSAXParser(aCStack_a4);
  local_a0 = *(int *)(DAT_00156d84 + 0x156d60) + 8;
  std::deque<cocos2d::CCSAXState,std::allocator<cocos2d::CCSAXState>>::~deque(adStack_38);
  std::
  deque<cocos2d::CCMutableArray<cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableArray<cocos2d::CCObject*>*>>
  ::~deque(adStack_60);
  FUN_001ed6b8(auStack_6c);
  std::
  deque<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*,std::allocator<cocos2d::CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCObject*>*>>
  ::~deque(adStack_94);
  return iVar1;
}


