/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001443ce  Symbol: isSingleRefrence */

/* cocos2d::CCObject::isSingleRefrence() */

bool __thiscall cocos2d::CCObject::isSingleRefrence(CCObject *this)

{
  return *(int *)(this + 0xc) == 1;
}


