/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015cd74  Symbol: ~CCArray */

/* cocos2d::CCArray::~CCArray() */

CCArray * __thiscall cocos2d::CCArray::~CCArray(CCArray *this)

{
  int iVar1;
  int *__ptr;
  
  __ptr = *(int **)(this + 0x14);
  *(int *)this = *(int *)(DAT_0015cdb4 + 0x15cd80) + 8;
  if (__ptr != (int *)0x0) {
    while( true ) {
      if (*__ptr == 0) break;
      iVar1 = *__ptr + -1;
      *__ptr = iVar1;
      CCObject::release(*(CCObject **)((int)(void *)__ptr[2] + iVar1 * 4));
    }
    free((void *)__ptr[2]);
    free(__ptr);
  }
  CCObject::~CCObject((CCObject *)this);
  return this;
}


