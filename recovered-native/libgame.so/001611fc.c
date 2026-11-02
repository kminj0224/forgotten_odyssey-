/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001611fc  Symbol: bitsPerPixelForFormat */

/* cocos2d::CCTexture2D::bitsPerPixelForFormat() */

uint __thiscall cocos2d::CCTexture2D::bitsPerPixelForFormat(CCTexture2D *this)

{
  uint uVar1;
  
  if (*(int *)(this + 0x14) - 1U < 10) {
    uVar1 = (uint)*(byte *)(DAT_00161218 + (*(int *)(this + 0x14) - 1U) + 0x16122a);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


