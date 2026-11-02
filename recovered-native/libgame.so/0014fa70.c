/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fa70  Symbol: progressWithFile */

/* cocos2d::CCProgressTimer::progressWithFile(char const*) */

int * cocos2d::CCProgressTimer::progressWithFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  memset(this,0,0x110);
  CCNode::CCNode((CCNode *)this);
  *this = *(int *)(DAT_0014fabc + 0x14fa98) + 8;
  iVar1 = initWithFile((CCProgressTimer *)this,param_1);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


