/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b4d8  Symbol: actionWithPosition */

/* cocos2d::CCTwirl::actionWithPosition(cocos2d::CCPoint, int, float, cocos2d::_ccGridSize const&,
   float) */

int * cocos2d::CCTwirl::actionWithPosition
                (CCPoint param_1,int param_2,float param_3,_ccGridSize *param_4,float param_5)

{
  int *this;
  int iVar1;
  _ccGridSize *in_r3;
  undefined8 uVar2;
  CCPoint local_18;
  int local_14;
  
  local_18 = param_1;
  local_14 = param_2;
  this = (int *)operator_new(0x50);
  memset(this,0,0x50);
  CCGrid3DAction::CCGrid3DAction((CCGrid3DAction *)this);
  *this = *(int *)(DAT_0013b540 + 0x13b502) + 8;
  CCPoint::CCPoint((CCPoint *)(this + 0xd));
  uVar2 = CCPoint::CCPoint((CCPoint *)(this + 0x12));
  iVar1 = initWithPosition((CCTwirl *)this,&local_18,(int)param_4,(float)uVar2,in_r3,
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


