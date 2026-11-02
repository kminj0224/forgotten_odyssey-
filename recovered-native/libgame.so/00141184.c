/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141184  Symbol: actionWithSeed */

/* cocos2d::CCTurnOffTiles::actionWithSeed(int, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCTurnOffTiles::actionWithSeed(int param_1,_ccGridSize *param_2,float param_3)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x40);
  memset(this,0,0x40);
  fVar2 = (float)CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_001411d0 + 0x1411ac) + 8;
  iVar1 = initWithSeed((CCTurnOffTiles *)this,param_1,param_2,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


