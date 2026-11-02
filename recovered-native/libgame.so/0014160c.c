/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014160c  Symbol: actionWithCols */

/* cocos2d::CCSplitCols::actionWithCols(int, float) */

int * cocos2d::CCSplitCols::actionWithCols(int param_1,float param_2)

{
  int *this;
  int iVar1;
  float fVar2;
  
  this = (int *)operator_new(0x40);
  memset(this,0,0x40);
  CCTiledGrid3DAction::CCTiledGrid3DAction((CCTiledGrid3DAction *)this);
  *this = *(int *)(DAT_0014165c + 0x141632) + 8;
  fVar2 = (float)CCSize::CCSize((CCSize *)(this + 0xe));
  iVar1 = initWithCols((int)this,fVar2);
  if (iVar1 == 0) {
    CCObject::release((CCObject *)this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


