/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137554  Symbol: actionWithAction */

/* cocos2d::CCSpeed::actionWithAction(cocos2d::CCActionInterval*, float) */

int * cocos2d::CCSpeed::actionWithAction(CCActionInterval *param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x28);
  fVar2 = (float)CCAction::CCAction((CCAction *)this);
  *this = *(int *)(DAT_0013759c + 0x137570) + 8;
  this[8] = 0;
  this[9] = 0;
  iVar1 = initWithAction((CCSpeed *)this,param_1,fVar2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


