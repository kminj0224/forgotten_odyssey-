/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149984  Symbol: CCLayer */

/* cocos2d::CCLayer::CCLayer() */

undefined8 __thiscall cocos2d::CCLayer::CCLayer(CCLayer *this)

{
  int iVar1;
  undefined8 uVar2;
  CCLayer *apCStack_18 [3];
  
  apCStack_18[0] = this;
  uVar2 = CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_001499e0 + 0x149996);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x138;
  *(int *)(this + 0x104) = iVar1 + 0x174;
  *(int *)(this + 0x100) = iVar1 + 0x168;
  this[0x108] = (CCLayer)0x0;
  this[0x109] = (CCLayer)0x0;
  this[0x10a] = (CCLayer)0x0;
  *(undefined4 *)(this + 0x10c) = 0;
  CCPoint::CCPoint((CCPoint *)apCStack_18,(float)uVar2,(float)((ulonglong)uVar2 >> 0x20));
  CCNode::setAnchorPoint((CCPoint *)this);
  this[0x78] = (CCLayer)0x0;
  return CONCAT44(apCStack_18[0],this);
}


