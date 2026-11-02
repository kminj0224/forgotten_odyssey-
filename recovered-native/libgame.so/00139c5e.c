/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139c5e  Symbol: initWithSize */

/* cocos2d::CCGridAction::initWithSize(cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCGridAction::initWithSize(CCGridAction *this,_ccGridSize *param_1,float param_2)

{
  int iVar1;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)this,param_2);
  if (iVar1 != 0) {
    iVar1 = 1;
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)param_1;
    *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 4);
  }
  return iVar1;
}


