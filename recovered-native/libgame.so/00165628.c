/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00165628  Symbol: CCTMXTilesetInfo */

/* cocos2d::CCTMXTilesetInfo::CCTMXTilesetInfo() */

CCTMXTilesetInfo * __thiscall cocos2d::CCTMXTilesetInfo::CCTMXTilesetInfo(CCTMXTilesetInfo *this)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  CCObject::CCObject((CCObject *)this);
  iVar5 = DAT_00165668;
  iVar4 = *(int *)(DAT_00165664 + 0x16563a);
  puVar2 = (undefined4 *)(DAT_00165668 + 0x16563e);
  *(undefined4 *)(this + 0x18) = 0;
  *(int *)this = iVar4 + 8;
  uVar1 = *puVar2;
  uVar3 = *(undefined4 *)(iVar5 + 0x165642);
  iVar5 = *(int *)(DAT_0016566c + 0x16564c);
  *(undefined4 *)(this + 0x1c) = uVar1;
  *(undefined4 *)(this + 0x30) = uVar1;
  iVar5 = iVar5 + 0xc;
  *(int *)(this + 0x14) = iVar5;
  *(undefined4 *)(this + 0x20) = uVar3;
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(int *)(this + 0x2c) = iVar5;
  *(undefined4 *)(this + 0x34) = uVar3;
  return this;
}


