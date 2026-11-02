/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b2e0  Symbol: initWithWaves */

/* cocos2d::CCWaves::initWithWaves(int, float, bool, bool, cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCWaves::initWithWaves
          (CCWaves *this,int param_1,float param_2,bool param_3,bool param_4,_ccGridSize *param_5,
          float param_6)

{
  int iVar1;
  _ccGridSize *in_stack_00000004;
  CCWaves local_1c;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,in_stack_00000004,param_2);
  if (iVar1 != 0) {
    local_1c = SUB41(param_5,0);
    *(undefined4 *)(this + 0x3c) = 0x3f800000;
    *(int *)(this + 0x34) = param_1;
    *(uint *)(this + 0x38) = (uint)param_3;
    this[0x41] = (CCWaves)param_4;
    iVar1 = 1;
    this[0x40] = local_1c;
  }
  return iVar1;
}


