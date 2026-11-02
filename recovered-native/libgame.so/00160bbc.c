/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160bbc  Symbol: generateMipmap */

/* cocos2d::CCTexture2D::generateMipmap() */

void __thiscall cocos2d::CCTexture2D::generateMipmap(CCTexture2D *this)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00160bd0;
  glBindTexture(DAT_00160bd0,*(undefined4 *)(this + 0x20));
  glGenerateMipmapOES(uVar1);
  return;
}


