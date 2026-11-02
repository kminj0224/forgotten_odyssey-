/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014656a  Symbol: tile */

/* cocos2d::CCTiledGrid3D::tile(cocos2d::_ccGridSize const&) */

_ccGridSize * cocos2d::CCTiledGrid3D::tile(_ccGridSize *param_1)

{
  int in_r1;
  int *in_r2;
  
  memcpy(param_1,(void *)(*(int *)(in_r1 + 0x38) +
                         (*in_r2 * *(int *)(in_r1 + 0x1c) + in_r2[1]) * 0x30),0x30);
  return param_1;
}


