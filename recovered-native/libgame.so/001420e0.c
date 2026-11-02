/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001420e0  Symbol: CCNode */

/* cocos2d::CCNode::CCNode() */

CCNode * __thiscall cocos2d::CCNode::CCNode(CCNode *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  CCObject::CCObject((CCObject *)this);
  iVar4 = *(int *)(DAT_0014215c + 0x1420f2);
  *(undefined4 *)(this + 0x20) = 0x3f800000;
  *(undefined4 *)(this + 0x24) = 0x3f800000;
  iVar1 = DAT_00142160;
  *(int *)this = iVar4 + 8;
  uVar5 = *(undefined4 *)(iVar1 + 0x142100);
  uVar2 = *(undefined4 *)(iVar1 + 0x142104);
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined4 *)(this + 0x3c) = 0;
  *(undefined4 *)(this + 0x28) = uVar5;
  *(undefined4 *)(this + 0x2c) = uVar2;
  *(undefined4 *)(this + 0x30) = uVar5;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x44) = 0;
  *(undefined4 *)(this + 0x48) = 0;
  this[0x4c] = (CCNode)0x1;
  *(undefined4 *)(this + 0x54) = uVar2;
  *(undefined4 *)(this + 0x5c) = uVar2;
  uVar2 = *(undefined4 *)(iVar1 + 0x142108);
  uVar3 = *(undefined4 *)(iVar1 + 0x14210c);
  *(undefined4 *)(this + 0x50) = uVar5;
  *(undefined4 *)(this + 0x58) = uVar5;
  *(undefined4 *)(this + 100) = uVar3;
  *(undefined4 *)(this + 0x6c) = uVar3;
  *(undefined4 *)(this + 0x60) = uVar2;
  *(undefined4 *)(this + 0x68) = uVar2;
  this[0x70] = (CCNode)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (CCNode)0x1;
  *(undefined4 *)(this + 0x7c) = 0xffffffff;
  *(undefined4 *)(this + 0x80) = 0;
  this[0xf4] = (CCNode)0x1;
  this[0xf5] = (CCNode)0x1;
  this[0xf6] = (CCNode)0x1;
  *(undefined4 *)(this + 0xf8) = 0;
  return this;
}


