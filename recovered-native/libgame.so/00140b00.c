/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140b00  Symbol: actionWithRange */

/* cocos2d::CCShatteredTiles3D::actionWithRange(int, bool, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCShatteredTiles3D::actionWithRange
                (int param_1,bool param_2,_ccGridSize *param_3,float param_4)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x3c);
  memset(this,0,0x3c);
  fVar2 = (float)CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_00140b54 + 0x140b2c) + 8;
  iVar1 = initWithRange((CCShatteredTiles3D *)this,param_1,param_2,param_3,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


