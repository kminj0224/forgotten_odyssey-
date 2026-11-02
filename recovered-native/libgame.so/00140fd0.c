/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140fd0  Symbol: actionWithSize */

/* cocos2d::CCFadeOutBLTiles::actionWithSize(cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCFadeOutBLTiles::actionWithSize(_ccGridSize *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_00141018 + 0x140ff6) + 8;
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


