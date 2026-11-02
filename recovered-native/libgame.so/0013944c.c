/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013944c  Symbol: actionWithAction */

/* cocos2d::CCEaseElasticOut::actionWithAction(cocos2d::CCActionInterval*, float) */

int * cocos2d::CCEaseElasticOut::actionWithAction(CCActionInterval *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_00139494 + 0x139472) + 8;
  iVar1 = CCEaseElastic::initWithAction((CCEaseElastic *)this,param_1,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


