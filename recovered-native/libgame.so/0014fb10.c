/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014fb10  Symbol: setType */

/* cocos2d::CCProgressTimer::setType(cocos2d::CCProgressTimerType) */

void __thiscall cocos2d::CCProgressTimer::setType(CCProgressTimer *this,CCProgressTimerType param_1)

{
  if (param_1 != *(CCProgressTimerType *)(this + 0xfc)) {
    if (*(void **)(this + 0x10c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x10c));
      *(undefined4 *)(this + 0x10c) = 0;
      *(undefined4 *)(this + 0x108) = 0;
    }
    *(CCProgressTimerType *)(this + 0xfc) = param_1;
  }
  return;
}


