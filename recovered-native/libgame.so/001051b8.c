/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001051b8  Symbol: ~Mana */

/* Mana::~Mana() */

Mana * __thiscall Mana::~Mana(Mana *this)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_001051ec + 0x1051c2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  cocos2d::CCLayer::~CCLayer((CCLayer *)this);
  return this;
}


