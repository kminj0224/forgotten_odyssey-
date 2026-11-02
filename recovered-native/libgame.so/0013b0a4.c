/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b0a4  Symbol: actionWithPosition */

/* cocos2d::CCRipple3D::actionWithPosition(cocos2d::CCPoint const&, float, int, float,
   cocos2d::_ccGridSize const&, float) */

int * cocos2d::CCRipple3D::actionWithPosition
                (CCPoint *param_1,float param_2,int param_3,float param_4,_ccGridSize *param_5,
                float param_6)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  
  this = (int *)operator_new(0x54);
  memset(this,0,0x54);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013b110 + 0x13b0d0) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 0xd));
  uVar2 = CCPoint::CCPoint((CCPoint *)(this + 0x13));
  iVar1 = initWithPosition((CCRipple3D *)this,param_1,(float)uVar2,param_3,
                           (float)((ulonglong)uVar2 >> 0x20),param_5,extraout_s2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


