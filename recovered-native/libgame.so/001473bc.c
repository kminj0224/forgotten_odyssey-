/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001473bc  Symbol: ~CCLabelBMFont */

/* cocos2d::CCLabelBMFont::~CCLabelBMFont() */

CCLabelBMFont * __thiscall cocos2d::CCLabelBMFont::~CCLabelBMFont(CCLabelBMFont *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0014740c + 0x1473c8);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 300;
  *(int *)(this + 0x114) = iVar1 + 0x154;
  *(int *)(this + 0x110) = iVar1 + 0x144;
  FUN_001edf58(this + 0x120);
  if (*(CCObject **)(this + 0x124) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x124));
  }
  FUN_001ed6b8(this + 0x120);
  CCSpriteBatchNode::~CCSpriteBatchNode((CCSpriteBatchNode *)this);
  return this;
}


