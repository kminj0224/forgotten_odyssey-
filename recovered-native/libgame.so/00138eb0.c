/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00138eb0  Symbol: actionWithAction */

/* cocos2d::CCEaseInOut::actionWithAction(cocos2d::CCActionInterval*, float) */

int * cocos2d::CCEaseInOut::actionWithAction(CCActionInterval *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_00138ef8 + 0x138ed6) + 8;
  iVar1 = CCEaseRateAction::initWithAction((CCEaseRateAction *)this,param_1,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


