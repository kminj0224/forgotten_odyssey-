/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140a6c  Symbol: initWithRange */

/* cocos2d::CCShatteredTiles3D::initWithRange(int, bool, cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCShatteredTiles3D::initWithRange
          (CCShatteredTiles3D *this,int param_1,bool param_2,_ccGridSize *param_3,float param_4)

{
  int iVar1;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,param_3,param_4);
  if (iVar1 != 0) {
    this[0x38] = (CCShatteredTiles3D)0x0;
    *(int *)(this + 0x34) = param_1;
    this[0x39] = (CCShatteredTiles3D)param_2;
    iVar1 = 1;
  }
  return iVar1;
}


