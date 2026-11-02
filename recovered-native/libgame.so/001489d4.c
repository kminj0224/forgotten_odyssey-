/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001489d4  Symbol: labelWithString */

/* cocos2d::CCLabelBMFont::labelWithString(char const*, char const*) */

int * cocos2d::CCLabelBMFont::labelWithString(char *param_1,char *param_2)

{
  int *this;
  int iVar1;
  int iVar2;
  undefined auStack_1c [8];
  
  this = (int *)operator_new(0x128);
  iVar1 = DAT_00148a58;
  CCNode::CCNode((CCNode *)this);
  iVar2 = *(int *)(iVar1 + 0x1489f2 + DAT_00148a5c);
  *this = iVar2 + 8;
  this[0x3f] = iVar2 + 300;
  this[0x45] = iVar2 + 0x154;
  iVar1 = DAT_00148a60;
  this[0x44] = iVar2 + 0x144;
  *(CCNode *)(this + 0x46) = (CCNode)0x0;
  *(CCNode *)(this + 0x47) = (CCNode)0x0;
  FUN_001eed40(this + 0x48,iVar1 + 0x148a28,auStack_1c);
  this[0x49] = 0;
  iVar1 = initWithString((CCLabelBMFont *)this,param_1,param_2);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    CCObject::autorelease((CCObject *)this);
  }
  return this;
}


