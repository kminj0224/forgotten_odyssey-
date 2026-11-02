/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00147110  Symbol: labelWithString */

/* cocos2d::CCLabelAtlas::labelWithString(char const*, char const*, unsigned int, unsigned int,
   unsigned char) */

int * cocos2d::CCLabelAtlas::labelWithString
                (char *param_1,char *param_2,uint param_3,uint param_4,uchar param_5)

{
  int *this;
  int iVar1;
  int iVar2;
  undefined auStack_1c [8];
  
  this = (int *)operator_new(0x13c);
  CCAtlasNode::CCAtlasNode((CCAtlasNode *)this);
  iVar2 = *(int *)(DAT_00147190 + 0x147138);
  *this = iVar2 + 8;
  this[0x3f] = iVar2 + 0x140;
  this[0x40] = iVar2 + 0x160;
  iVar1 = DAT_00147194;
  this[0x4c] = iVar2 + 0x178;
  FUN_001eed40(this + 0x4d,iVar1 + 0x147160,auStack_1c);
  iVar1 = initWithString((CCLabelAtlas *)this,param_1,param_2,param_3,param_4,param_5);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


