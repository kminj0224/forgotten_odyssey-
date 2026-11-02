/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00157228  Symbol: ~CCImage */

/* cocos2d::CCImage::~CCImage() */

CCImage * __thiscall cocos2d::CCImage::~CCImage(CCImage *this)

{
  *(int *)this = *(int *)(DAT_00157248 + 0x157232) + 8;
  if (*(void **)(this + 0xc) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  return this;
}


