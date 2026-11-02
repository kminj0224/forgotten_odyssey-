/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000e65f8  Symbol: node */

/* Market_Equip::node() */

int * Market_Equip::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x17c);
  memset(this,0,0x17c);
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_000e6674 + 0xe661e);
  *this = iVar1 + 8;
  this[0x3f] = iVar1 + 0x13c;
  this[0x41] = iVar1 + 0x178;
  this[0x40] = iVar1 + 0x16c;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x47));
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x49));
  iVar1 = (**(code **)(*this + 0x128))(this);
  if (iVar1 == 0) {
    (**(code **)(*this + 8))(this);
    this = (int *)0x0;
  }
  else {
    cocos2d::CCObject::autorelease((CCObject *)this);
  }
  return this;
}


