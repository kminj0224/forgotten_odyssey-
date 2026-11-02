/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165710  Symbol: CCTMXMapInfo */

/* cocos2d::CCTMXMapInfo::CCTMXMapInfo() */

CCTMXMapInfo * __thiscall cocos2d::CCTMXMapInfo::CCTMXMapInfo(CCTMXMapInfo *this)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  CCObject::CCObject((CCObject *)this);
  iVar3 = *(int *)(DAT_0016575c + 0x165720);
  *(int *)(this + 0x14) = iVar3 + 0x88;
  iVar2 = DAT_00165760;
  *(int *)this = iVar3 + 8;
  uVar1 = *(undefined4 *)(iVar2 + 0x165730);
  uVar4 = *(undefined4 *)(iVar2 + 0x165734);
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x24) = uVar1;
  *(undefined4 *)(this + 0x20) = uVar4;
  *(undefined4 *)(this + 0x28) = uVar4;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x40) = 0;
  this[0x44] = (CCTMXMapInfo)0x0;
  iVar2 = DAT_00165764;
  *(undefined4 *)(this + 0x48) = 0;
  *(undefined4 *)(this + 0x54) = 0;
  iVar2 = *(int *)(iVar2 + 0x165754) + 0xc;
  *(int *)(this + 0x4c) = iVar2;
  *(int *)(this + 0x50) = iVar2;
  return this;
}


