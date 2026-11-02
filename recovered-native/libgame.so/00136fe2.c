/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00136fe2  Symbol: restore */

/* cocos2d::CCCamera::restore() */

void __thiscall cocos2d::CCCamera::restore(CCCamera *this)

{
  undefined4 uVar1;
  
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x14) = 0;
  uVar1 = getZEye();
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0x3f800000;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x1c) = uVar1;
  this[0x38] = (CCCamera)0x0;
  return;
}


