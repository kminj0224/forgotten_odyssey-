/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146018  Symbol: ~CCTiledGrid3D */

/* cocos2d::CCTiledGrid3D::~CCTiledGrid3D() */

CCTiledGrid3D * __thiscall cocos2d::CCTiledGrid3D::~CCTiledGrid3D(CCTiledGrid3D *this)

{
  *(int *)this = *(int *)(DAT_00146068 + 0x146022) + 8;
  if (*(void **)(this + 0x34) != (void *)0x0) {
    free(*(void **)(this + 0x34));
    *(undefined4 *)(this + 0x34) = 0;
  }
  if (*(void **)(this + 0x38) != (void *)0x0) {
    free(*(void **)(this + 0x38));
    *(undefined4 *)(this + 0x38) = 0;
  }
  if (*(void **)(this + 0x3c) != (void *)0x0) {
    free(*(void **)(this + 0x3c));
    *(undefined4 *)(this + 0x3c) = 0;
  }
  if (*(void **)(this + 0x40) != (void *)0x0) {
    free(*(void **)(this + 0x40));
    *(undefined4 *)(this + 0x40) = 0;
  }
  CCGridBase::~CCGridBase((CCGridBase *)this);
  return this;
}


