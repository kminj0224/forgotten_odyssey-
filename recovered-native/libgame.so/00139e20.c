/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139e20  Symbol: setTile */

/* cocos2d::CCTiledGrid3DAction::setTile(cocos2d::_ccGridSize const&, cocos2d::_ccQuad3 const&) */

void __thiscall
cocos2d::CCTiledGrid3DAction::setTile
          (CCTiledGrid3DAction *this,_ccGridSize *param_1,_ccQuad3 *param_2)

{
  CCTiledGrid3D *this_00;
  
  this_00 = (CCTiledGrid3D *)(**(code **)(**(int **)(this + 0x18) + 0x60))();
  CCTiledGrid3D::setTile(this_00,param_1,param_2);
  return;
}


