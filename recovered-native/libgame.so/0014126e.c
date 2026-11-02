/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014126e  Symbol: turnOffTile */

/* cocos2d::CCTurnOffTiles::turnOffTile(cocos2d::_ccGridSize const&) */

void __thiscall cocos2d::CCTurnOffTiles::turnOffTile(CCTurnOffTiles *this,_ccGridSize *param_1)

{
  _ccQuad3 a_Stack_40 [52];
  
  memset(a_Stack_40,0,0x30);
  CCTiledGrid3DAction::setTile((CCTiledGrid3DAction *)this,param_1,a_Stack_40);
  return;
}


