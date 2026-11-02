/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015bf10  Symbol: sharedSpriteFrameCache */

/* cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache() */

undefined4 cocos2d::CCSpriteFrameCache::sharedSpriteFrameCache(void)

{
  int *this;
  int iVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)(DAT_0015bf48 + 0x15bf18);
  if (*ppiVar2 == (int *)0x0) {
    this = (int *)operator_new(0x1c);
    CCObject::CCObject((CCObject *)this);
    iVar1 = DAT_0015bf4c;
    this[5] = 0;
    this[6] = 0;
    iVar1 = *(int *)(iVar1 + 0x15bf32);
    *ppiVar2 = this;
    *this = iVar1 + 8;
    init((CCSpriteFrameCache *)this);
  }
  return *(undefined4 *)(DAT_0015bf50 + 0x15bf44);
}


