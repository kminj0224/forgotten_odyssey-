/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00164db8  Symbol: propertiesForGID */

/* cocos2d::CCTMXTiledMap::propertiesForGID(int) */

undefined4 __thiscall cocos2d::CCTMXTiledMap::propertiesForGID(CCTMXTiledMap *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x118) + 0x18;
  iVar1 = iVar2;
  iVar3 = *(int *)(*(int *)(this + 0x118) + 0x1c);
  while (iVar3 != 0) {
    if (*(int *)(iVar3 + 0x10) < param_1) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if (iVar1 != iVar2) {
    if (param_1 < *(int *)(iVar1 + 0x10)) {
      iVar1 = iVar2;
    }
    if (iVar1 != iVar2) {
      return *(undefined4 *)(iVar1 + 0x14);
    }
  }
  return 0;
}


