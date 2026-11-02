/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b1a0  Symbol: actionWithRange */

/* cocos2d::CCShaky3D::actionWithRange(int, bool, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCShaky3D::actionWithRange
                (int param_1,bool param_2,_ccGridSize *param_3,float param_4)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x3c);
  memset(this,0,0x3c);
  fVar2 = (float)CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013b1f4 + 0x13b1cc) + 8;
  iVar1 = initWithRange((CCShaky3D *)this,param_1,param_2,param_3,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


