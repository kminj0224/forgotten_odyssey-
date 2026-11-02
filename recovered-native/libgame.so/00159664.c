/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00159664  Symbol: init */

/* cocos2d::CCAnimationCache::init() */

undefined4 __thiscall cocos2d::CCAnimationCache::init(CCAnimationCache *this)

{
  int *this_00;
  int *__s;
  
  this_00 = (int *)operator_new(0x34);
  CCObject::CCObject((CCObject *)this_00);
  __s = this_00 + 6;
  *this_00 = *(int *)(DAT_001596a4 + 0x15967e) + 8;
  memset(__s,0,0x10);
  this_00[10] = 0;
  this_00[8] = (int)__s;
  this_00[9] = (int)__s;
  this_00[0xc] = 0;
  *(CCObject *)(this_00 + 0xb) = (CCObject)0x0;
  *(int **)(this + 0x14) = this_00;
  return 1;
}


