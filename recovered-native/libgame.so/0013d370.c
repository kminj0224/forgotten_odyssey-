/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013d370  Symbol: initWithDuration */

/* cocos2d::CCActionInterval::initWithDuration(float) */

void __thiscall cocos2d::CCActionInterval::initWithDuration(CCActionInterval *this,float param_1)

{
  int iVar1;
  undefined4 in_r1;
  
  *(undefined4 *)(this + 0x20) = in_r1;
  iVar1 = __aeabi_fcmpeq(in_r1,0);
  if (iVar1 != 0) {
    *(undefined4 *)(this + 0x20) = 0x34000000;
  }
  *(undefined4 *)(this + 0x24) = 0;
  this[0x28] = (CCActionInterval)0x1;
  return;
}


