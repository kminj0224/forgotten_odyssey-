/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001462b8  Symbol: beforeDraw */

/* cocos2d::CCGridBase::beforeDraw() */

void __thiscall cocos2d::CCGridBase::beforeDraw(CCGridBase *this)

{
  set2DProjection();
  CCGrabber::beforeRender(*(CCTexture2D **)(this + 0x2c));
  return;
}


