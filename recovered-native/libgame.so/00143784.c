/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00143784  Symbol: CCAutoreleasePool */

/* cocos2d::CCAutoreleasePool::CCAutoreleasePool() */

CCAutoreleasePool * __thiscall
cocos2d::CCAutoreleasePool::CCAutoreleasePool(CCAutoreleasePool *this)

{
  int *this_00;
  
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_001437bc + 0x143794) + 8;
  this_00 = (int *)operator_new(0x20);
  CCObject::CCObject((CCObject *)this_00);
  *this_00 = *(int *)(DAT_001437c0 + 0x1437aa) + 8;
  this_00[5] = 0;
  this_00[6] = 0;
  this_00[7] = 0;
  *(int **)(this + 0x14) = this_00;
  return this;
}


