/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160bd4  Symbol: setTexParameters */

/* cocos2d::CCTexture2D::setTexParameters(cocos2d::_ccTexParams*) */

void cocos2d::CCTexture2D::setTexParameters(_ccTexParams *param_1)

{
  undefined4 uVar1;
  undefined4 *in_r1;
  
  uVar1 = DAT_00160c10;
  glBindTexture(DAT_00160c10,*(undefined4 *)(param_1 + 0x20));
  glTexParameteri(uVar1,DAT_00160c14,*in_r1);
  glTexParameteri(uVar1,0x2800,in_r1[1]);
  glTexParameteri(uVar1,DAT_00160c18,in_r1[2]);
  glTexParameteri(uVar1,DAT_00160c1c,in_r1[3]);
  return;
}


