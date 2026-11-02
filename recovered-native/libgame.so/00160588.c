/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160588  Symbol: ~CCTextFieldTTF */

/* cocos2d::CCTextFieldTTF::~CCTextFieldTTF() */

CCTextFieldTTF * __thiscall cocos2d::CCTextFieldTTF::~CCTextFieldTTF(CCTextFieldTTF *this)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = *(int *)(DAT_0016060c + 0x160594);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x170;
  *(int *)(this + 0x100) = iVar1 + 0x188;
  *(int *)(this + 0x1c8) = iVar1 + 0x1a8;
  *(int *)(this + 0x1e4) = iVar1 + 0x1b8;
  pvVar2 = *(void **)(this + 500);
  if (pvVar2 != (void *)0x0) {
    FUN_001ed6b8(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(this + 500) = 0;
  }
  pvVar2 = *(void **)(this + 0x1f8);
  if (pvVar2 != (void *)0x0) {
    FUN_001ed6b8(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(this + 0x1f8) = 0;
  }
  CCIMEDelegate::~CCIMEDelegate((CCIMEDelegate *)(this + 0x1e4));
  CCLabelTTF::~CCLabelTTF((CCLabelTTF *)this);
  return this;
}


