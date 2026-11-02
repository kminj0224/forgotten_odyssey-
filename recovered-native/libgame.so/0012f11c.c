/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f11c  Symbol: node */

/* Ending_Layer::node() */

int * Ending_Layer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x150);
  memset(this,0,0x150);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_0012f180 + 0x12f142);
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


