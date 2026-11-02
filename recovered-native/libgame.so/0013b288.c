/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b288  Symbol: actionWithWaves */

/* cocos2d::CCLiquid::actionWithWaves(int, float, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCLiquid::actionWithWaves
                (int param_1,float param_2,_ccGridSize *param_3,float param_4)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  
  this = (int *)operator_new(0x40);
  memset(this,0,0x40);
  uVar2 = CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013b2dc + 0x13b2b4) + 8;
  iVar1 = initWithWaves((CCLiquid *)this,param_1,(float)uVar2,param_3,
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


