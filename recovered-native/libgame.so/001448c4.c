/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001448c4  Symbol: startAnimation */

/* cocos2d::CCDisplayLinkDirector::startAnimation() */

void __thiscall cocos2d::CCDisplayLinkDirector::startAnimation(CCDisplayLinkDirector *this)

{
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  CCTime::gettimeofdayCocos2d(*(cc_timeval **)(this + 0x54),(void *)0x0);
  this[0x8a] = (CCDisplayLinkDirector)0x0;
  CCApplication::sharedApplication();
  CCApplication::setAnimationInterval((double)CONCAT44(in_lr,unaff_r4));
  return;
}


