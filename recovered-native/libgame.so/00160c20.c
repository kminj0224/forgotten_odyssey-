/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160c20  Symbol: setAliasTexParameters */

/* cocos2d::CCTexture2D::setAliasTexParameters() */

undefined8 __thiscall cocos2d::CCTexture2D::setAliasTexParameters(CCTexture2D *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(DAT_00160c38 + 0x160c2c);
  setTexParameters((_ccTexParams *)this);
  return uVar1;
}


