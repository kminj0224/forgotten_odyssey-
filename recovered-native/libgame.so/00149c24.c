/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149c24  Symbol: ~CCLayerGradient */

/* cocos2d::CCLayerGradient::~CCLayerGradient() */

CCLayerGradient * __thiscall cocos2d::CCLayerGradient::~CCLayerGradient(CCLayerGradient *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00149c6c + 0x149c2e);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x19c;
  *(int *)(this + 0x100) = iVar1 + 0x1cc;
  *(int *)(this + 0x104) = iVar1 + 0x1d8;
  *(int *)(this + 0x110) = iVar1 + 0x1e8;
  *(int *)(this + 0x114) = iVar1 + 0x208;
  CCLayerColor::~CCLayerColor((CCLayerColor *)this);
  return this;
}


