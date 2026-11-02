/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c2e4  Symbol: stop */

/* cocos2d::CCRepeat::stop() */

void __thiscall cocos2d::CCRepeat::stop(CCRepeat *this)

{
  (**(code **)(**(int **)(this + 0x34) + 0x1c))();
  CCAction::stop((CCAction *)this);
  return;
}


