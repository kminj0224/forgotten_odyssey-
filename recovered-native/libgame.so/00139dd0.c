/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139dd0  Symbol: setVertex */

/* cocos2d::CCGrid3DAction::setVertex(cocos2d::_ccGridSize const&, cocos2d::_ccVertex3F const&) */

void __thiscall
cocos2d::CCGrid3DAction::setVertex(CCGrid3DAction *this,_ccGridSize *param_1,_ccVertex3F *param_2)

{
  CCGrid3D *this_00;
  
  this_00 = (CCGrid3D *)(**(code **)(**(int **)(this + 0x18) + 0x60))();
  CCGrid3D::setVertex(this_00,param_1,param_2);
  return;
}


