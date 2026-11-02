/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166eec  Symbol: loadTGAfile */

/* cocos2d::CCTileMapAtlas::loadTGAfile(char const*) */

void __thiscall cocos2d::CCTileMapAtlas::loadTGAfile(CCTileMapAtlas *this,char *param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (char *)CCFileUtils::fullPathFromRelativePath(param_1);
  uVar2 = tgaLoad(pcVar1);
  *(undefined4 *)(this + 0x130) = uVar2;
  return;
}


