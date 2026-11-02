/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00167958  Symbol: sharedDispatcher */

/* cocos2d::CCTouchDispatcher::sharedDispatcher() */

undefined4 cocos2d::CCTouchDispatcher::sharedDispatcher(void)

{
  int *this;
  int iVar1;
  int **ppiVar2;
  
  ppiVar2 = (int **)(DAT_00167998 + 0x167960);
  if (*ppiVar2 == (int *)0x0) {
    this = (int *)operator_new(0x40);
    CCObject::CCObject((CCObject *)this);
    iVar1 = DAT_0016799c;
    this[6] = 0;
    this[7] = 0;
    iVar1 = *(int *)(iVar1 + 0x16797a);
    this[9] = 0;
    this[10] = 0;
    *this = iVar1 + 8;
    this[5] = iVar1 + 0x34;
    *ppiVar2 = this;
    init((CCTouchDispatcher *)this);
  }
  return *(undefined4 *)(DAT_001679a0 + 0x167996);
}


