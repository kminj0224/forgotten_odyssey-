/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149b48  Symbol: ~CCLayerMultiplex */

/* cocos2d::CCLayerMultiplex::~CCLayerMultiplex() */

CCLayerMultiplex * __thiscall cocos2d::CCLayerMultiplex::~CCLayerMultiplex(CCLayerMultiplex *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00149b88 + 0x149b52);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  if (*(CCObject **)(this + 0x114) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x114));
  }
  CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


