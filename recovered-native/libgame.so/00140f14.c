/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00140f14  Symbol: turnOnTile */

/* cocos2d::CCFadeOutTRTiles::turnOnTile(cocos2d::_ccGridSize const&) */

void __thiscall cocos2d::CCFadeOutTRTiles::turnOnTile(CCFadeOutTRTiles *this,_ccGridSize *param_1)

{
  CCTiledGrid3DAction aCStack_40 [52];
  
  CCTiledGrid3DAction::originalTile(aCStack_40,(_ccGridSize *)this);
  CCTiledGrid3DAction::setTile((CCTiledGrid3DAction *)this,param_1,(_ccQuad3 *)aCStack_40);
  return;
}


