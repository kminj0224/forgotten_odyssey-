/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146546  Symbol: originalTile */

/* cocos2d::CCTiledGrid3D::originalTile(cocos2d::_ccGridSize const&) */

_ccGridSize * cocos2d::CCTiledGrid3D::originalTile(_ccGridSize *param_1)

{
  int in_r1;
  int *in_r2;
  
  memcpy(param_1,(void *)(*(int *)(in_r1 + 0x3c) +
                         (*in_r2 * *(int *)(in_r1 + 0x1c) + in_r2[1]) * 0x30),0x30);
  return param_1;
}


