/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166e74  Symbol: CCTileMapAtlas */

/* cocos2d::CCTileMapAtlas::CCTileMapAtlas() */

CCTileMapAtlas * __thiscall cocos2d::CCTileMapAtlas::CCTileMapAtlas(CCTileMapAtlas *this)

{
  int iVar1;
  
  CCAtlasNode::CCAtlasNode((CCAtlasNode *)this);
  iVar1 = *(int *)(DAT_00166ea8 + 0x166e86);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0x100) = iVar1 + 0x15c;
  *(int *)(this + 0xfc) = iVar1 + 0x13c;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  return this;
}


