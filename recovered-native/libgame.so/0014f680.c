/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014f680  Symbol: ~CCMotionStreak */

/* cocos2d::CCMotionStreak::~CCMotionStreak() */

CCMotionStreak * __thiscall cocos2d::CCMotionStreak::~CCMotionStreak(CCMotionStreak *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014f6a4 + 0x14f68a);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x10c;
  CCNode::~CCNode((CCNode *)this);
  return this;
}


