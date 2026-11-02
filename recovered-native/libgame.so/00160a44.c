/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160a44  Symbol: description */

/* cocos2d::CCTexture2D::description() */

char * __thiscall cocos2d::CCTexture2D::description(CCTexture2D *this)

{
  int iVar1;
  char *__s;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  __s = (char *)operator_new__(100);
  iVar1 = DAT_00160a88;
  uVar2 = *(undefined4 *)(this + 0x18);
  uVar3 = *(undefined4 *)(this + 0x1c);
  uVar4 = *(undefined4 *)(this + 0x20);
  __extendsfdf2(*(undefined4 *)(this + 0x2c));
  __extendsfdf2(*(undefined4 *)(this + 0x30));
  sprintf(__s,(char *)(iVar1 + 0x160a72),uVar4,uVar2,uVar3);
  return __s;
}


