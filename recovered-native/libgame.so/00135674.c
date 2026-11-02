/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135674  Symbol: CCTimer */

/* cocos2d::CCTimer::CCTimer() */

CCTimer * __thiscall cocos2d::CCTimer::CCTimer(CCTimer *this)

{
  int iVar1;
  
  CCObject::CCObject((CCObject *)this);
  iVar1 = *(int *)(DAT_0013569c + 0x135686);
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  return this;
}


