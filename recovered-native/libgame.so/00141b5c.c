/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00141b5c  Symbol: atlasWithTileFile */

/* cocos2d::CCAtlasNode::atlasWithTileFile(char const*, unsigned int, unsigned int, unsigned int) */

int * cocos2d::CCAtlasNode::atlasWithTileFile(char *param_1,uint param_2,uint param_3,uint param_4)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x130);
  CCAtlasNode((CCAtlasNode *)this);
  iVar1 = initWithTileFile((CCAtlasNode *)this,param_1,param_2,param_3,param_4);
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


