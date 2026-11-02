/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00155600  Symbol: ccRemoveHDSuffixFromFile */

/* cocos2d::CCFileUtils::ccRemoveHDSuffixFromFile(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> >&) */

basic_string * cocos2d::CCFileUtils::ccRemoveHDSuffixFromFile(basic_string *param_1)

{
  CCDirector *this;
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  this = (CCDirector *)CCDirector::sharedDirector();
  uVar1 = CCDirector::getContentScaleFactor(this);
  iVar2 = __aeabi_fcmpeq(uVar1,0x40000000);
  if (iVar2 != 0) {
    iVar2 = FUN_001ecf10(param_1,DAT_00155664 + 0x155622,0xffffffff);
    iVar4 = DAT_00155668 + 0x155630;
    uVar3 = FUN_001ecf10(param_1,iVar4,0xffffffff);
    if ((iVar2 + 1U < uVar3) && (uVar3 != 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
      CCLog((char *)(DAT_0015566c + 0x15564e),*param_1,iVar4);
    }
  }
  return param_1;
}


