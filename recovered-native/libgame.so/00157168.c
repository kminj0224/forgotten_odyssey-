/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157168  Symbol: ~BitmapDC */

/* cocos2d::BitmapDC::~BitmapDC() */

BitmapDC * __thiscall cocos2d::BitmapDC::~BitmapDC(BitmapDC *this)

{
  if (*(void **)(this + 8) != (void *)0x0) {
    operator_delete__(*(void **)(this + 8));
  }
  return this;
}


