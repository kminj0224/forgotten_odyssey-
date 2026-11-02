/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001412ea  Symbol: initWithWaves */

/* cocos2d::CCWavesTiles3D::initWithWaves(int, float, cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCWavesTiles3D::initWithWaves
          (CCWavesTiles3D *this,int param_1,float param_2,_ccGridSize *param_3,float param_4)

{
  int iVar1;
  _ccGridSize *in_r3;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,in_r3,param_2);
  if (iVar1 != 0) {
    *(int *)(this + 0x34) = param_1;
    *(_ccGridSize **)(this + 0x38) = param_3;
    *(undefined4 *)(this + 0x3c) = 0x3f800000;
    iVar1 = 1;
  }
  return iVar1;
}


