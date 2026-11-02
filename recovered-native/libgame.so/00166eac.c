/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166eac  Symbol: calculateItemsToRender */

/* cocos2d::CCTileMapAtlas::calculateItemsToRender() */

void __thiscall cocos2d::CCTileMapAtlas::calculateItemsToRender(CCTileMapAtlas *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)(this + 0x138) = 0;
  iVar2 = *(int *)(this + 0x130);
  for (iVar3 = 0; iVar3 < *(short *)(iVar2 + 6); iVar3 = iVar3 + 1) {
    for (iVar1 = 0; iVar1 < *(short *)(iVar2 + 8); iVar1 = iVar1 + 1) {
      if (*(char *)((iVar3 + iVar1 * *(short *)(iVar2 + 6)) * 3 + *(int *)(iVar2 + 0xc)) != '\0') {
        *(int *)(this + 0x138) = *(int *)(this + 0x138) + 1;
      }
    }
  }
  return;
}


