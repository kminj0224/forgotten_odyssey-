/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000dc3e0  Symbol: node */

/* Hero_Main_Layer::node() */

int * Hero_Main_Layer::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x110);
  Hero_Main_Layer((Hero_Main_Layer *)this);
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


