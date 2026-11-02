/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144dc0  Symbol: pause */

/* cocos2d::CCDirector::pause() */

void __thiscall cocos2d::CCDirector::pause(CCDirector *this)

{
  if (this[0x38] == (CCDirector)0x0) {
    *(undefined4 *)(this + 0x20) = *(undefined4 *)(this + 0x18);
    *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x1c);
    (**(code **)(*(int *)this + 0x18))
              (this,*(code **)(*(int *)this + 0x18),DAT_00144de8,DAT_00144dec);
    this[0x38] = (CCDirector)0x1;
  }
  return;
}


