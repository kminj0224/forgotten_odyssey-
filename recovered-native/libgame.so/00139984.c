/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00139984  Symbol: ~CCTiledGrid3DAction */

/* cocos2d::CCTiledGrid3DAction::~CCTiledGrid3DAction() */

CCTiledGrid3DAction * __thiscall
cocos2d::CCTiledGrid3DAction::~CCTiledGrid3DAction(CCTiledGrid3DAction *this)

{
  *(int *)this = *(int *)(DAT_0013999c + 0x13998e) + 8;
  CCGridAction::~CCGridAction((CCGridAction *)this);
  return this;
}


