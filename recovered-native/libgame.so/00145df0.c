/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145df0  Symbol: reuse */

/* cocos2d::CCGrid3D::reuse() */

void __thiscall cocos2d::CCGrid3D::reuse(CCGrid3D *this)

{
  if (0 < *(int *)(this + 0x14)) {
    memcpy(*(void **)(this + 0x3c),*(void **)(this + 0x38),
           (*(int *)(this + 0x18) + 1) * (*(int *)(this + 0x1c) + 1) * 0xc);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  }
  return;
}


