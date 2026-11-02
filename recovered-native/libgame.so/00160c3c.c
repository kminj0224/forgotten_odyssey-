/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160c3c  Symbol: setAntiAliasTexParameters */

/* cocos2d::CCTexture2D::setAntiAliasTexParameters() */

undefined8 __thiscall cocos2d::CCTexture2D::setAntiAliasTexParameters(CCTexture2D *this)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((int)&DAT_00160c58 + DAT_00160c58);
  setTexParameters((_ccTexParams *)this);
  return uVar1;
}


