/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d5a70  Symbol: node */

/* ReinforcementLayer::node() */

int * ReinforcementLayer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x114);
  memset(this,0,0x114);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000d5ad4 + 0xd5a96);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x13c;
  this[0x40] = iVar1 + 0x16c;
  this[0x41] = iVar1 + 0x178;
  iVar1 = init();
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    cocos2d::CCObject::autorelease((CCObject *)this);
  }
  return this;
}


