/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001410b4  Symbol: actionWithSize */

/* cocos2d::CCTurnOffTiles::actionWithSize(cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCTurnOffTiles::actionWithSize(_ccGridSize *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x40);
  memset(this,0,0x40);
  fVar2 = (float)CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_001410fc + 0x1410da) + 8;
  iVar1 = CCGridAction::initWithSize((CCGridAction *)this,param_1,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


