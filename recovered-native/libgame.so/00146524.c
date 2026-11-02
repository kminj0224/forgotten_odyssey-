/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146524  Symbol: setTile */

/* cocos2d::CCTiledGrid3D::setTile(cocos2d::_ccGridSize const&, cocos2d::_ccQuad3 const&) */

void __thiscall
cocos2d::CCTiledGrid3D::setTile(CCTiledGrid3D *this,_ccGridSize *param_1,_ccQuad3 *param_2)

{
  memcpy((void *)(*(int *)(this + 0x38) +
                 (*(int *)(this + 0x1c) * *(int *)param_1 + *(int *)(param_1 + 4)) * 0x30),param_2,
         0x30);
  return;
}


