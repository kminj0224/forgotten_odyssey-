/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b394  Symbol: actionWithWaves */

/* cocos2d::CCWaves::actionWithWaves(int, float, bool, bool, cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCWaves::actionWithWaves
                (int param_1,float param_2,bool param_3,bool param_4,_ccGridSize *param_5,
                float param_6)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  
  this = (int *)operator_new(0x44);
  memset(this,0,0x44);
  uVar2 = CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013b3f0 + 0x13b3c0) + 8;
  iVar1 = initWithWaves((CCWaves *)this,param_1,(float)uVar2,param_3,param_4,param_5,
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


