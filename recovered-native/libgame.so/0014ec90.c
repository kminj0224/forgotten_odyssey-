/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014ec90  Symbol: initFromString */

/* cocos2d::CCMenuItemAtlasFont::initFromString(char const*, char const*, int, int, char,
   cocos2d::CCObject*, void (cocos2d::CCObject::*)(cocos2d::CCObject*)) */

undefined4 __thiscall
cocos2d::CCMenuItemAtlasFont::initFromString
          (CCMenuItemAtlasFont *this,char *param_1,char *param_2,int param_3,int param_4,
          char param_5,CCObject *param_6,_func_void_CCObject_ptr *param_7)

{
  int iVar1;
  int *this_00;
  int iVar2;
  undefined auStack_1c [8];
  
  this_00 = (int *)operator_new(0x13c);
  CCAtlasNode::CCAtlasNode((CCAtlasNode *)this_00);
  iVar2 = *(int *)(DAT_0014ed18 + 0x14ecbc);
  *this_00 = iVar2 + 8;
  this_00[0x3f] = iVar2 + 0x140;
  this_00[0x40] = iVar2 + 0x160;
  iVar1 = DAT_0014ed1c;
  this_00[0x4c] = iVar2 + 0x178;
  FUN_001eed40(this_00 + 0x4d,iVar1 + 0x14ece4,auStack_1c);
  CCLabelAtlas::initWithString((CCLabelAtlas *)this_00,param_1,param_2,param_3,param_4,param_5);
  CCObject::autorelease((CCObject *)this_00);
  CCMenuItemLabel::initWithLabel((CCMenuItemLabel *)this,(CCNode *)this_00,param_6,param_7);
  return 1;
}


