/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b114  Symbol: initWithRange */

/* cocos2d::CCShaky3D::initWithRange(int, bool, cocos2d::_ccGridSize const&, float) */

int __thiscall
cocos2d::CCShaky3D::initWithRange
          (CCShaky3D *this,int param_1,bool param_2,_ccGridSize *param_3,float param_4)

{
  int iVar1;
  
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,param_3,param_4);
  if (iVar1 != 0) {
    *(int *)(this + 0x34) = param_1;
    this[0x38] = (CCShaky3D)param_2;
    iVar1 = 1;
  }
  return iVar1;
}


