/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001391e4  Symbol: actionWithAction */

/* cocos2d::CCEaseElastic::actionWithAction(cocos2d::CCActionInterval*, float) */

int * cocos2d::CCEaseElastic::actionWithAction(CCActionInterval *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x34);
  memset(this,0,0x34);
  fVar2 = (float)CCActionEase::CCActionEase((CCActionEase *)this);
  *this = *(int *)(DAT_0013922c + 0x13920a) + 8;
  iVar1 = initWithAction((CCEaseElastic *)this,param_1,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


