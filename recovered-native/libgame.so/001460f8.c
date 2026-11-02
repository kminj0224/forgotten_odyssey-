/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001460f8  Symbol: setIsTextureFlipped */

/* cocos2d::CCGridBase::setIsTextureFlipped(bool) */

void __thiscall cocos2d::CCGridBase::setIsTextureFlipped(CCGridBase *this,bool param_1)

{
  if (this[0x30] != (CCGridBase)param_1) {
    this[0x30] = (CCGridBase)param_1;
    (**(code **)(*(int *)this + 0x1c))();
  }
  return;
}


