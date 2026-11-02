/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000d59c8  Symbol: node */

/* InventoryLayer::node() */

int * InventoryLayer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x138);
  memset(this,0,0x138);
  InventoryLayer((InventoryLayer *)this);
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


