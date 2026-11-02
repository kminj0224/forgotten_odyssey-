/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013a8d8  Symbol: initWithSize */

/* cocos2d::CCFlipX3D::initWithSize(cocos2d::_ccGridSize const&, float) */

undefined4 __thiscall
cocos2d::CCFlipX3D::initWithSize(CCFlipX3D *this,_ccGridSize *param_1,float param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((*(int *)param_1 == 1) && (*(int *)(param_1 + 4) == 1)) {
    uVar1 = CCGridAction::initWithSize((CCGridAction *)this,param_1,param_2);
  }
  return uVar1;
}


