/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143cec  Symbol: dataWithContentsOfFile */

/* cocos2d::CCData::dataWithContentsOfFile(std::basic_string<char, std::char_traits<char>,
   std::allocator<char> > const&) */

CCData * cocos2d::CCData::dataWithContentsOfFile(basic_string *param_1)

{
  uint __n;
  CCData *__src;
  CCData *this;
  void *__dest;
  uint local_1c [2];
  
  local_1c[0] = 0;
  __src = (CCData *)
          CCFileUtils::getFileData((char *)*param_1,(char *)(DAT_00143d4c + 0x143cfe),local_1c);
  __n = local_1c[0];
  this = __src;
  if (__src != (CCData *)0x0) {
    this = (CCData *)operator_new(0x18);
    CCData(this);
    __dest = operator_new__(__n);
    *(void **)(this + 0x14) = __dest;
    memcpy(__dest,__src,__n);
    operator_delete__(__src);
  }
  return this;
}


