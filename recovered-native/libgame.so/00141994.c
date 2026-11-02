/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141994  Symbol: CCAtlasNode */

/* cocos2d::CCAtlasNode::CCAtlasNode() */

CCAtlasNode * __thiscall cocos2d::CCAtlasNode::CCAtlasNode(CCAtlasNode *this)

{
  int iVar1;
  
  CCNode::CCNode((CCNode *)this);
  iVar1 = *(int *)(DAT_001419d8 + 0x1419a6);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x134;
  *(int *)(this + 0x100) = iVar1 + 0x154;
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  this[0x11c] = (CCAtlasNode)0x0;
  this[0x128] = (CCAtlasNode)0x0;
  *(undefined4 *)(this + 300) = 0;
  return this;
}


