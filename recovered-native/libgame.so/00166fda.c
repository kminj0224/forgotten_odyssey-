/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166fda  Symbol: tileAt */

/* cocos2d::CCTileMapAtlas::tileAt(cocos2d::_ccGridSize const&) */

uint __thiscall cocos2d::CCTileMapAtlas::tileAt(CCTileMapAtlas *this,_ccGridSize *param_1)

{
  return (uint)*(uint3 *)(*(int *)(*(int *)(this + 0x130) + 0xc) +
                         (*(int *)(param_1 + 4) * (int)*(short *)(*(int *)(this + 0x130) + 6) +
                         *(int *)param_1) * 3);
}


