/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00149a10  Symbol: node */

/* cocos2d::CCLayer::node() */

int * cocos2d::CCLayer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  CCLayer((CCLayer *)this);
  if (this != (int *)0x0) {
    iVar1 = init();
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


