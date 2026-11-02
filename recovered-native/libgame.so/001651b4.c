/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001651b4  Symbol: tiledMapWithTMXFile */

/* cocos2d::CCTMXTiledMap::tiledMapWithTMXFile(char const*) */

int * cocos2d::CCTMXTiledMap::tiledMapWithTMXFile(char *param_1)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x120);
  CCTMXTiledMap((CCTMXTiledMap *)this);
  iVar1 = initWithTMXFile((CCTMXTiledMap *)this,param_1);
  if (iVar1 == 0) {
    if (this != (int *)0x0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


