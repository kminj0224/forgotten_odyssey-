/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141378  Symbol: actionWithWaves */

/* cocos2d::CCWavesTiles3D::actionWithWaves(int, float, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCWavesTiles3D::actionWithWaves
                (int param_1,float param_2,_ccGridSize *param_3,float param_4)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  
  this = (int *)operator_new(0x40);
  memset(this,0,0x40);
  uVar2 = CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_001413cc + 0x1413a4) + 8;
  iVar1 = initWithWaves((CCWavesTiles3D *)this,param_1,(float)uVar2,param_3,
                        (float)((ulonglong)uVar2 >> 0x20));
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


