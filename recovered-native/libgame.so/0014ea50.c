/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ea50  Symbol: CCMenuItem */

/* cocos2d::CCMenuItem::CCMenuItem() */

CCMenuItem * __thiscall cocos2d::CCMenuItem::CCMenuItem(CCMenuItem *this)

{
  CCNode::CCNode((CCNode *)this);
  *(int *)this = *(int *)(DAT_0014ea7c + 0x14ea62) + 8;
  this[0xfc] = (CCMenuItem)0x0;
  this[0xfd] = (CCMenuItem)0x0;
  *(undefined4 *)(this + 0x100) = 0;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  return this;
}


