/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001373b0  Symbol: CCAction */

/* cocos2d::CCAction::CCAction() */

CCAction * __thiscall cocos2d::CCAction::CCAction(CCAction *this)

{
  CCObject::CCObject((CCObject *)this);
  *(int *)this = *(int *)(DAT_001373d4 + 0x1373c0) + 8;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  return this;
}


