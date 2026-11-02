/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160720  Symbol: CCTextFieldTTF */

/* cocos2d::CCTextFieldTTF::CCTextFieldTTF() */

CCTextFieldTTF * __thiscall cocos2d::CCTextFieldTTF::CCTextFieldTTF(CCTextFieldTTF *this)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  CCLabelTTF::CCLabelTTF((CCLabelTTF *)this);
  CCIMEDelegate::CCIMEDelegate((CCIMEDelegate *)(this + 0x1e4));
  iVar3 = DAT_001607b4;
  iVar2 = *(int *)(DAT_001607b0 + 0x16073c);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x170;
  *(int *)(this + 0x100) = iVar2 + 0x188;
  *(int *)(this + 0x1c8) = iVar2 + 0x1a8;
  *(int *)(this + 0x1e4) = iVar2 + 0x1b8;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  piVar1 = (int *)operator_new(4);
  iVar3 = *(int *)(iVar3 + 0x160782) + 0xc;
  *piVar1 = iVar3;
  *(int **)(this + 500) = piVar1;
  piVar1 = (int *)operator_new(4);
  *piVar1 = iVar3;
  *(int **)(this + 0x1f8) = piVar1;
  this[0x1f2] = (CCTextFieldTTF)0x7f;
  this[DAT_001607b8] = (CCTextFieldTTF)0x7f;
  this[0x1f0] = (CCTextFieldTTF)0x7f;
  return this;
}


