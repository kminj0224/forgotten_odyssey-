/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc418  Symbol: node */

/* Equip_Layer::node() */

int * Equip_Layer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x128);
  memset(this,0,0x128);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000dc47c + 0xdc43e);
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


