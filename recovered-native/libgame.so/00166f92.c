/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00166f92  Symbol: tileMapAtlasWithTileFile */

/* cocos2d::CCTileMapAtlas::tileMapAtlasWithTileFile(char const*, char const*, int, int) */

int * cocos2d::CCTileMapAtlas::tileMapAtlasWithTileFile
                (char *param_1,char *param_2,int param_3,int param_4)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x13c);
  CCTileMapAtlas((CCTileMapAtlas *)this);
  iVar1 = initWithTileFile((CCTileMapAtlas *)this,param_1,param_2,param_3,param_4);
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


