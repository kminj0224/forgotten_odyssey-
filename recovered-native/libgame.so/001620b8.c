/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001620b8  Symbol: addPVRImage */

/* cocos2d::CCTextureCache::addPVRImage(char const*) */

CCTexture2D * __thiscall cocos2d::CCTextureCache::addPVRImage(CCTextureCache *this,char *param_1)

{
  CCTexture2D *this_00;
  undefined4 uVar1;
  int iVar2;
  undefined auStack_20 [4];
  undefined auStack_1c [4];
  char *local_18;
  char *local_14 [2];
  
  FUN_001eed40(&local_18,param_1,auStack_20);
  CCFileUtils::ccRemoveHDSuffixFromFile((basic_string *)&local_18);
  this_00 = (CCTexture2D *)
            CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
            ::objectForKey(*(basic_string **)(this + 0x14));
  if (this_00 == (CCTexture2D *)0x0) {
    uVar1 = CCFileUtils::fullPathFromRelativePath(local_18);
    FUN_001eed40(local_14,uVar1,auStack_1c);
    this_00 = (CCTexture2D *)operator_new(0x38);
    CCTexture2D::CCTexture2D(this_00);
    iVar2 = CCTexture2D::initWithPVRFile(this_00,local_14[0]);
    if (iVar2 != 0) {
      VolatileTexture::addImageTexture(this_00,local_14[0],2);
      CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
      ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                    **)(this + 0x14),this_00,(basic_string *)&local_18);
      CCObject::autorelease((CCObject *)this_00);
    }
    FUN_001ed6b8(local_14);
  }
  FUN_001ed6b8(&local_18);
  return this_00;
}


