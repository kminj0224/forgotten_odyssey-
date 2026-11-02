/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ede20  Symbol: node */

/* Hero_HeroSkill::node() */

int * Hero_HeroSkill::node(void)

{
  int *this;
  int iVar1;
  
  this = (int *)operator_new(0x118);
  Hero_HeroSkill((Hero_HeroSkill *)this);
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


