/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001657fc  Symbol: CCTMXLayerInfo */

/* cocos2d::CCTMXLayerInfo::CCTMXLayerInfo() */

undefined8 __thiscall cocos2d::CCTMXLayerInfo::CCTMXLayerInfo(CCTMXLayerInfo *this)

{
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  *this_00;
  int iVar1;
  undefined4 uVar2;
  undefined auStack_14 [8];
  
  CCObject::CCObject((CCObject *)this);
  iVar1 = DAT_00165858 + 0x165814;
  *(int *)this = *(int *)(DAT_00165854 + 0x16580e) + 8;
  FUN_001eed40(this + 0x18,iVar1,auStack_14);
  CCSize::CCSize((CCSize *)(this + 0x1c));
  *(undefined4 *)(this + 0x24) = 0;
  this[0x2a] = (CCTMXLayerInfo)0x1;
  *(undefined4 *)(this + 0x30) = 0;
  iVar1 = DAT_0016585c;
  *(undefined4 *)(this + 0x2c) = DAT_00165860;
  uVar2 = *(undefined4 *)(iVar1 + 0x165848);
  *(undefined4 *)(this + 0x34) = *(undefined4 *)(iVar1 + 0x165844);
  *(undefined4 *)(this + 0x38) = uVar2;
  this_00 = (CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
             *)operator_new(0x34);
  CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
  ::CCMutableDictionary(this_00);
  *(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCString*>
    **)(this + 0x14) = this_00;
  return CONCAT44(this,this);
}


