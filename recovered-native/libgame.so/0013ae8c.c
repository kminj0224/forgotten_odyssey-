/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ae8c  Symbol: initWithPosition */

/* cocos2d::CCLens3D::initWithPosition(cocos2d::CCPoint const&, float, cocos2d::_ccGridSize const&,
   float) */

void __thiscall
cocos2d::CCLens3D::initWithPosition
          (CCLens3D *this,CCPoint *param_1,float param_2,_ccGridSize *param_3,float param_4)

{
  undefined4 uVar1;
  int iVar2;
  _ccGridSize *in_r3;
  float extraout_s0;
  float extraout_s1;
  CCLens3D *local_18;
  CCPoint *local_14;
  
  local_18 = this;
  local_14 = param_1;
  iVar2 = CCGridAction::initWithSize((CCGridAction *)this,in_r3,param_2);
  if (iVar2 != 0) {
    CCPoint::CCPoint((CCPoint *)&local_18,extraout_s0,extraout_s1);
    *(CCLens3D **)(this + 0x34) = local_18;
    *(CCPoint **)(this + 0x38) = local_14;
    setPosition((CCPoint *)this);
    uVar1 = DAT_0013aecc;
    *(_ccGridSize **)(this + 0x3c) = param_3;
    *(undefined4 *)(this + 0x40) = uVar1;
    this[0x4c] = (CCLens3D)0x1;
  }
  return;
}


