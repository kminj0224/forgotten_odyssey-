/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a0ec  Symbol: CCLayerMultiplex */

/* cocos2d::CCLayerMultiplex::CCLayerMultiplex() */

CCLayerMultiplex * __thiscall cocos2d::CCLayerMultiplex::CCLayerMultiplex(CCLayerMultiplex *this)

{
  int iVar1;
  
  CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0014a124 + 0x14a0fe);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  return this;
}


