/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00163bd0  Symbol: CCTMXLayer */

/* cocos2d::CCTMXLayer::CCTMXLayer() */

undefined8 __thiscall cocos2d::CCTMXLayer::CCTMXLayer(CCTMXLayer *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined auStack_14 [4];
  
  CCNode::CCNode((CCNode *)this);
  iVar2 = *(int *)(DAT_00163c30 + 0x163be2);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x138;
  uVar1 = *(undefined4 *)(DAT_00163c34 + 0x163bfa);
  uVar3 = *(undefined4 *)(DAT_00163c34 + 0x163bfe);
  *(undefined4 *)(this + 0x110) = uVar1;
  *(undefined4 *)(this + 0x114) = uVar3;
  *(undefined4 *)(this + 0x118) = uVar1;
  iVar2 = DAT_00163c38;
  *(undefined4 *)(this + 0x11c) = uVar3;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 300) = 0;
  FUN_001eed40(this + 0x130,iVar2 + 0x163c22,auStack_14);
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  return CONCAT44(this,this);
}


