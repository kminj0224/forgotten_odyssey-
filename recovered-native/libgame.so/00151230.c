/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00151230  Symbol: ~CCRibbon */

/* cocos2d::CCRibbon::~CCRibbon() */

CCRibbon * __thiscall cocos2d::CCRibbon::~CCRibbon(CCRibbon *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_00151278 + 0x15123c);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x118;
  if (*(CCObject **)(this + 0x114) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x114));
  }
  if (*(CCObject **)(this + 0x118) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x118));
  }
  if (*(CCObject **)(this + 0x100) != (CCObject *)0x0) {
    CCObject::release(*(CCObject **)(this + 0x100));
  }
  CCNode::~CCNode((CCNode *)this);
  return this;
}


