/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001655f4  Symbol: CCString */

/* cocos2d::CCString::CCString(char const*) */

CCString * __thiscall cocos2d::CCString::CCString(CCString *this,char *param_1)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_00165620 + 0x165608) + 8;
  *(int *)(this + 0x14) = *(int *)(DAT_00165624 + 0x165614) + 0xc;
  FUN_001ed9dc(this + 0x14,param_1);
  return this;
}


