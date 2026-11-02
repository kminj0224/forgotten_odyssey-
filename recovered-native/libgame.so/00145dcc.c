/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00145dcc  Symbol: reuse */

/* cocos2d::CCTiledGrid3D::reuse() */

void __thiscall cocos2d::CCTiledGrid3D::reuse(CCTiledGrid3D *this)

{
  if (0 < *(int *)(this + 0x14)) {
    memcpy(*(void **)(this + 0x3c),*(void **)(this + 0x38),
           *(int *)(this + 0x18) * *(int *)(this + 0x1c) * 0x30);
    *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  }
  return;
}


