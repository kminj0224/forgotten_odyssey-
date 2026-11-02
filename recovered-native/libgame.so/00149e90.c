/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149e90  Symbol: CCLayerColor */

/* cocos2d::CCLayerColor::CCLayerColor() */

CCLayerColor * __thiscall cocos2d::CCLayerColor::CCLayerColor(CCLayerColor *this)

{
  int iVar1;
  
  CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_00149eec + 0x149ea2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x164;
  *(int *)(this + 0x100) = iVar1 + 0x194;
  *(int *)(this + 0x104) = iVar1 + 0x1a0;
  *(int *)(this + 0x110) = iVar1 + 0x1b0;
  *(int *)(this + 0x114) = iVar1 + 0x1d0;
  this[0x148] = (CCLayerColor)0x0;
  iVar1 = DAT_00149ef0;
  this[DAT_00149ef0] = (CCLayerColor)0x0;
  this[iVar1 + 1] = (CCLayerColor)0x0;
  this[iVar1 + 2] = (CCLayerColor)0x0;
  *(undefined4 *)(this + 0x14c) = 1;
  *(undefined4 *)(this + 0x150) = DAT_00149ef4;
  return this;
}


