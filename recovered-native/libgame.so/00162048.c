/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00162048  Symbol: addUIImage */

/* cocos2d::CCTextureCache::addUIImage(cocos2d::CCImage*, char const*) */

undefined8 __thiscall
cocos2d::CCTextureCache::addUIImage(CCTextureCache *this,CCImage *param_1,char *param_2)

{
  undefined4 uVar1;
  CCTexture2D *this_00;
  basic_string local_1c;
  char *pcStack_18;
  
  local_1c = *(int *)(DAT_001620b4 + 0x162054) + 0xc;
  pcStack_18 = param_2;
  if (param_2 != (char *)0x0) {
    uVar1 = CCFileUtils::fullPathFromRelativePath(param_2);
    FUN_001ed9dc(&local_1c,uVar1);
    this_00 = (CCTexture2D *)
              CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
              ::objectForKey(*(basic_string **)(this + 0x14));
    if (this_00 != (CCTexture2D *)0x0) goto LAB_0016208a;
  }
  this_00 = (CCTexture2D *)operator_new(0x38);
  CCTexture2D::CCTexture2D(this_00);
  CCTexture2D::initWithImage(this_00,param_1);
  if ((this_00 != (CCTexture2D *)0x0) && (param_2 != (char *)0x0)) {
    CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
    ::setObject(*(CCMutableDictionary<std::basic_string<char,std::char_traits<char>,std::allocator<char>>,cocos2d::CCTexture2D*>
                  **)(this + 0x14),this_00,&local_1c);
    CCObject::autorelease((CCObject *)this_00);
  }
LAB_0016208a:
  FUN_001ed6b8(&local_1c);
  return CONCAT44(this,this_00);
}


