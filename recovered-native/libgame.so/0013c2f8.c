/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c2f8  Symbol: stop */

/* cocos2d::CCSequence::stop() */

void __thiscall cocos2d::CCSequence::stop(CCSequence *this)

{
  (**(code **)(**(int **)(this + 0x2c) + 0x1c))();
  (**(code **)(**(int **)(this + 0x30) + 0x1c))();
  CCAction::stop((CCAction *)this);
  return;
}


