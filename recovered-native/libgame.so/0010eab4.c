/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010eab4  Symbol: node */

/* New_UI_HERO_EXP::node() */

int * New_UI_HERO_EXP::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x11c);
  New_UI_HERO_EXP((New_UI_HERO_EXP *)this);
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


