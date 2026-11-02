/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd5c0  Symbol: ~Hero2 */

/* Hero2::~Hero2() */

Hero2 * __thiscall Hero2::~Hero2(Hero2 *this)

{
  CCNode *pCVar1;
  int iVar2;
  
  iVar2 = *(int *)(DAT_000fd604 + 0xfd5ca);
  *(int *)this = iVar2 + 8;
  *(int *)(this + 0xfc) = iVar2 + 0x140;
  *(int *)(this + 0x100) = iVar2 + 0x170;
  *(int *)(this + 0x104) = iVar2 + 0x17c;
  pCVar1 = (CCNode *)cocos2d::CCNode::getChildByTag((CCNode *)this,1);
  KG_removeChild(pCVar1,true);
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


