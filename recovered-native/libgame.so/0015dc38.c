/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015dc38  Symbol: ~CCUserDefault */

/* cocos2d::CCUserDefault::~CCUserDefault() */

CCUserDefault * __thiscall cocos2d::CCUserDefault::~CCUserDefault(CCUserDefault *this)

{
  int iVar1;
  
  iVar1 = DAT_0015dc60;
  flush();
  if (*(int *)(iVar1 + 0x15dc46) != 0) {
    FUN_0018ba54();
    *(int *)(iVar1 + 0x15dc46) = 0;
  }
  **(undefined4 **)(DAT_0015dc64 + 0x15dc5c) = 0;
  return this;
}


