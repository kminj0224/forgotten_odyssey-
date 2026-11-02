/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139d98  Symbol: vertex */

/* cocos2d::CCGrid3DAction::vertex(cocos2d::_ccGridSize const&) */

CCGrid3DAction * __thiscall
cocos2d::CCGrid3DAction::vertex(CCGrid3DAction *this,_ccGridSize *param_1)

{
  (**(code **)(**(int **)(param_1 + 0x18) + 0x60))();
  CCGrid3D::vertex((_ccGridSize *)this);
  return this;
}


