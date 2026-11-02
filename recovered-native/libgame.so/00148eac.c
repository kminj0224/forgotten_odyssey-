/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00148eac  Symbol: description */

/* cocos2d::CCLabelTTF::description() */

undefined8 __thiscall cocos2d::CCLabelTTF::description(CCLabelTTF *this)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  
  __s = (char *)operator_new__(100);
  iVar1 = DAT_00148ee0;
  uVar3 = **(undefined4 **)(this + 0x1d8);
  uVar2 = __extendsfdf2(*(undefined4 *)(this + 0x1dc));
  sprintf(__s,(char *)(iVar1 + 0x148ed0),uVar3);
  return CONCAT44(uVar2,__s);
}


