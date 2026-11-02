/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140b58  Symbol: initWithSeed */

/* cocos2d::CCShuffleTiles::initWithSeed(int, cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCShuffleTiles::initWithSeed
          (CCShuffleTiles *this,int param_1,_ccGridSize *param_2,float param_3)

{
  int iVar1;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,param_2,param_3);
  if (iVar1 != 0) {
    *(int *)(this + 0x34) = param_1;
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x40) = 0;
    iVar1 = 1;
  }
  return iVar1;
}


