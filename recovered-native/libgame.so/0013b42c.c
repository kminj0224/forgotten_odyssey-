/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b42c  Symbol: initWithPosition */

/* cocos2d::CCTwirl::initWithPosition(cocos2d::CCPoint const&, int, float, cocos2d::_ccGridSize
   const&, float) */

int __thiscall
cocos2d::CCTwirl::initWithPosition
          (CCTwirl *this,CCPoint *param_1,int param_2,float param_3,_ccGridSize *param_4,
          float param_5)

{
  int iVar1;
  _ccGridSize *in_stack_00000000;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,in_stack_00000000,param_3);
  if (iVar1 != 0) {
    setPosition(this,param_1);
    *(int *)(this + 0x3c) = param_2;
    *(_ccGridSize **)(this + 0x40) = param_4;
    *(undefined4 *)(this + 0x44) = 0x3f800000;
    iVar1 = 1;
  }
  return iVar1;
}


