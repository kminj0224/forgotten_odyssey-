/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014a578  Symbol: node */

/* cocos2d::CCScene::node() */

int * cocos2d::CCScene::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0xfc);
  CCScene((CCScene *)this);
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


