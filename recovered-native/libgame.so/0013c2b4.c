/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c2b4  Symbol: stop */

/* cocos2d::CCReverseTime::stop() */

void __thiscall cocos2d::CCReverseTime::stop(CCReverseTime *this)

{
  (**(code **)(**(int **)(this + 0x2c) + 0x1c))();
  CCAction::stop((CCAction *)this);
  return;
}


