/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001594a0  Symbol: initWithFrames */

/* cocos2d::CCAnimation::initWithFrames(cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>*, float) */

undefined4 __thiscall
cocos2d::CCAnimation::initWithFrames(CCAnimation *this,CCMutableArray *param_1,float param_2)

{
  int *this_00;
  undefined4 in_r2;
  int iVar1;
  
  *(undefined4 *)(this + 0x18) = in_r2;
  if (param_1 == (CCMutableArray *)0x0) {
    this_00 = (int *)operator_new(0x20);
    CCObject::CCObject((CCObject *)this_00);
    iVar1 = DAT_001594e4;
    this_00[5] = 0;
    this_00[6] = 0;
    iVar1 = *(int *)(iVar1 + 0x1594c2);
    this_00[7] = 0;
    *this_00 = iVar1 + 8;
  }
  else {
    this_00 = (int *)CCMutableArray<cocos2d::CCSpriteFrame*>::copy
                               ((CCMutableArray<cocos2d::CCSpriteFrame*> *)param_1);
  }
  CCObject::autorelease((CCObject *)this_00);
  *(int **)(this + 0x1c) = this_00;
  CCObject::retain((CCObject *)this_00);
  return 1;
}


