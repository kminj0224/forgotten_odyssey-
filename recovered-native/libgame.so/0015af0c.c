/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015af0c  Symbol: setDisplayFrame */

/* cocos2d::CCSprite::setDisplayFrame(cocos2d::CCSpriteFrame*) */

void __thiscall cocos2d::CCSprite::setDisplayFrame(CCSprite *this,CCSpriteFrame *param_1)

{
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x3c);
  if (*(int *)(param_1 + 0x48) != *(int *)(this + 0x124)) {
    (**(code **)(*(int *)this + 0x114))();
  }
  this[0x14c] = *(CCSprite *)(param_1 + 0x24);
  setTextureRectInPixels
            (this,(CCRect *)(param_1 + 0x14),(bool)param_1[0x24],(CCSize *)(param_1 + 0x40));
  return;
}


