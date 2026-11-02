/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013af4c  Symbol: actionWithPosition */

/* cocos2d::CCLens3D::actionWithPosition(cocos2d::CCPoint const&, float, cocos2d::_ccGridSize
   const&, float) */

int * cocos2d::CCLens3D::actionWithPosition
                (CCPoint *param_1,float param_2,_ccGridSize *param_3,float param_4)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  
  this = (int *)operator_new(0x50);
  memset(this,0,0x50);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013afb0 + 0x13af78) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 0xd));
  uVar2 = CCPoint::CCPoint((CCPoint *)(this + 0x11));
  iVar1 = initWithPosition((CCLens3D *)this,param_1,(float)uVar2,param_3,
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


