/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001535c8  Symbol: CCParticleSystem */

/* cocos2d::CCParticleSystem::CCParticleSystem() */

undefined8 __thiscall cocos2d::CCParticleSystem::CCParticleSystem(CCParticleSystem *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_1c [8];
  
  CCNode::CCNode((CCNode *)this);
  iVar1 = DAT_001536d0;
  iVar4 = *(int *)(DAT_001536cc + 0x1535da);
  *(int *)this = iVar4 + 8;
  *(int *)(this + 0xfc) = iVar4 + 0x24c;
  FUN_001eed40(this + 0x100,iVar1 + 0x1535ee,auStack_1c);
  *(undefined4 *)(this + 0x104) = 0;
  CCPoint::CCPoint((CCPoint *)(this + 0x108));
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  this[0x14c] = (CCParticleSystem)0x1;
  uVar2 = *(undefined4 *)(DAT_001536d4 + 0x153620);
  uVar3 = *(undefined4 *)(DAT_001536d4 + 0x153624);
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = uVar2;
  *(undefined4 *)(this + 0x15c) = uVar3;
  *(undefined4 *)(this + 0x160) = uVar2;
  *(undefined4 *)(this + 0x164) = uVar3;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  this[0x1ec] = (CCParticleSystem)0x0;
  *(undefined4 *)(this + 0x1f0) = 0;
  this[500] = (CCParticleSystem)0x0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x108) = uVar2;
  *(undefined4 *)(this + 0x10c) = uVar3;
  uVar2 = DAT_001536d8;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x1e4) = 1;
  *(undefined4 *)(this + 0x1e8) = uVar2;
  return CONCAT44(this,this);
}


