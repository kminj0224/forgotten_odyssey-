/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164c68  Symbol: CCTMXTiledMap */

/* cocos2d::CCTMXTiledMap::CCTMXTiledMap() */

CCTMXTiledMap * __thiscall cocos2d::CCTMXTiledMap::CCTMXTiledMap(CCTMXTiledMap *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  
  CCNode::CCNode((CCNode *)this);
  iVar1 = DAT_00164ca8;
  puVar3 = (undefined4 *)(DAT_00164ca8 + 0x164c7e);
  *(int *)this = *(int *)(DAT_00164ca4 + 0x164c7a) + 8;
  uVar2 = *puVar3;
  uVar4 = *(undefined4 *)(iVar1 + 0x164c82);
  *(undefined4 *)(this + 0xfc) = uVar2;
  *(undefined4 *)(this + 0x100) = uVar4;
  *(undefined4 *)(this + 0x104) = uVar2;
  *(undefined4 *)(this + 0x108) = uVar4;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  return this;
}


