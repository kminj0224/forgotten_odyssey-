/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013afec  Symbol: initWithPosition */

/* cocos2d::CCRipple3D::initWithPosition(cocos2d::CCPoint const&, float, int, float,
   cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCRipple3D::initWithPosition
          (CCRipple3D *this,CCPoint *param_1,float param_2,int param_3,float param_4,
          _ccGridSize *param_5,float param_6)

{
  int iVar1;
  undefined4 in_stack_00000000;
  _ccGridSize *in_stack_00000004;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,in_stack_00000004,param_2);
  if (iVar1 != 0) {
    setPosition(this,param_1);
    *(int *)(this + 0x3c) = param_3;
    *(_ccGridSize **)(this + 0x40) = param_5;
    *(undefined4 *)(this + 0x44) = in_stack_00000000;
    *(undefined4 *)(this + 0x48) = 0x3f800000;
    iVar1 = 1;
  }
  return iVar1;
}


