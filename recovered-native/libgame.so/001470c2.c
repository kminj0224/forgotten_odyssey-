/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001470c2  Symbol: initWithString */

/* cocos2d::CCLabelAtlas::initWithString(char const*, char const*, unsigned int, unsigned int,
   unsigned char) */

int __thiscall
cocos2d::CCLabelAtlas::initWithString
          (CCLabelAtlas *this,char *param_1,char *param_2,uint param_3,uint param_4,uchar param_5)

{
  size_t sVar1;
  int iVar2;
  
  sVar1 = strlen(param_1);
  iVar2 = CCAtlasNode::initWithTileFile((CCAtlasNode *)this,param_2,param_3,param_4,sVar1);
  if (iVar2 != 0) {
    this[0x138] = (CCLabelAtlas)param_5;
    (**(code **)(*(int *)this + 0x124))(this,param_1);
    iVar2 = 1;
  }
  return iVar2;
}


