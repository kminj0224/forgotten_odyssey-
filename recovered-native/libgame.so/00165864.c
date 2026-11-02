/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165864  Symbol: initWithTMXFile */

/* cocos2d::CCTMXMapInfo::initWithTMXFile(char const*) */

void __thiscall cocos2d::CCTMXMapInfo::initWithTMXFile(CCTMXMapInfo *this,char *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  *this_00;
  int iVar3;
  int *__s;
  
  piVar1 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar1);
  iVar3 = DAT_0016593c;
  piVar1[5] = 0;
  iVar3 = *(int *)(iVar3 + 0x165880);
  piVar1[6] = 0;
  piVar1[7] = 0;
  *piVar1 = iVar3 + 8;
  *(int **)(this + 0x30) = piVar1;
  piVar1 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar1);
  iVar3 = DAT_00165940;
  piVar1[5] = 0;
  piVar1[6] = 0;
  iVar3 = *(int *)(iVar3 + 0x1658a0);
  piVar1[7] = 0;
  *piVar1 = iVar3 + 8;
  *(int **)(this + 0x2c) = piVar1;
  uVar2 = CCFileUtils::fullPathFromRelativePath(param_1);
  FUN_001ed9dc(this + 0x4c,uVar2);
  piVar1 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)piVar1);
  iVar3 = DAT_00165944;
  piVar1[5] = 0;
  piVar1[6] = 0;
  iVar3 = *(int *)(iVar3 + 0x1658ce);
  piVar1[7] = 0;
  *piVar1 = iVar3 + 8;
  *(int **)(this + 0x34) = piVar1;
  this_00 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
             *)operator_new(0x34);
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  ::CCMutableDictionary(this_00);
  *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
    **)(this + 0x48) = this_00;
  piVar1 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)piVar1);
  __s = piVar1 + 6;
  *piVar1 = *(int *)(DAT_00165948 + 0x1658fa) + 8;
  memset(__s,0,0x10);
  iVar3 = DAT_0016594c;
  piVar1[10] = 0;
  piVar1[0xc] = 0;
  piVar1[8] = (int)__s;
  piVar1[9] = (int)__s;
  *(CCObject *)(piVar1 + 0xb) = (CCObject)0x0;
  *(int **)(this + 0x54) = piVar1;
  FUN_001ed9dc(this + 0x50,iVar3 + 0x16591c);
  this[0x44] = (CCTMXMapInfo)0x0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x40) = 1;
  parseXMLFile(this,*(char **)(this + 0x4c));
  return;
}


