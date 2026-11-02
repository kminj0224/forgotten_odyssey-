/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137214  Symbol: isDone */

/* cocos2d::CCFollow::isDone() */

byte __thiscall cocos2d::CCFollow::isDone(CCFollow *this)

{
  byte bVar1;
  
  bVar1 = (**(code **)(**(int **)(this + 0x20) + 0x8c))();
  return bVar1 ^ 1;
}


