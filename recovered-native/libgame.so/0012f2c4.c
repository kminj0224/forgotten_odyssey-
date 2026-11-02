/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0012f2c4  Symbol: node */

/* MainScene::node() */

int * MainScene::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  MainScene((MainScene *)this);
  if (this != (int *)0x0) {
    iVar1 = (**(code **)(*this + 0x128))(this);
    if (iVar1 == 0) {
      (**(code **)(*this + 8))(this);
      this = (int *)0x0;
    }
    else {
      cocos2d::CCObject::autorelease((CCObject *)this);
    }
  }
  return this;
}


