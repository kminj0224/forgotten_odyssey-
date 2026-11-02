/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001443b0  Symbol: retain */

/* cocos2d::CCObject::retain() */

void __thiscall cocos2d::CCObject::retain(CCObject *this)

{
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  return;
}


