/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f7b0  Symbol: streakWithFade */

/* cocos2d::CCMotionStreak::streakWithFade(float, float, char const*, float, float,
   cocos2d::_ccColor4B const&) */

int * cocos2d::CCMotionStreak::streakWithFade
                (float param_1,float param_2,char *param_3,float param_4,float param_5,
                _ccColor4B *param_6)

{
  int *this;
  int iVar1;
  undefined8 uVar2;
  float extraout_s2;
  float extraout_s3;
  
  this = (int *)operator_new(0x120);
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_0014f828 + 0x14f7d4);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x10c;
  this[0x40] = 0;
  this[0x41] = 0;
  this[0x44] = 0;
  this[0x45] = 0;
  uVar2 = CCPoint::CCPoint((CCPoint *)(this + 0x46));
  iVar1 = initWithFade((float)uVar2,(float)((ulonglong)uVar2 >> 0x20),(char *)this,extraout_s2,
                       extraout_s3,(_ccColor4B *)param_3);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


