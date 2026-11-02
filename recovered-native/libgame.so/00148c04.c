/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148c04  Symbol: ~CCLabelTTF */

/* cocos2d::CCLabelTTF::~CCLabelTTF() */

CCLabelTTF * __thiscall cocos2d::CCLabelTTF::~CCLabelTTF(CCLabelTTF *this)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(DAT_00148c70 + 0x148c10);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x100) = iVar1 + 0x150;
  *(int *)(this + 0x1c8) = iVar1 + 0x170;
  pvVar2 = *(void **)(this + 0x1d8);
  if (pvVar2 != (void *)0x0) {
    FUN_001ed6b8(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(this + 0x1d8) = 0;
  }
  pvVar2 = *(void **)(this + 0x1e0);
  if (pvVar2 != (void *)0x0) {
    FUN_001ed6b8(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(this + 0x1e0) = 0;
  }
  CCSprite::~CCSprite((CCSprite *)this);
  return this;
}


