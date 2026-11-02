/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013bf70  Symbol: CCCallFuncO */

/* cocos2d::CCCallFuncO::CCCallFuncO() */

CCCallFuncO * __thiscall cocos2d::CCCallFuncO::CCCallFuncO(CCCallFuncO *this)

{
  int iVar1;
  
  CCActionInstant::CCActionInstant((CCActionInstant *)this);
  iVar1 = *(int *)(DAT_0013bf90 + 0x13bf82);
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(int *)this = iVar1 + 8;
  *(undefined4 *)(this + 0x30) = 0;
  return this;
}


