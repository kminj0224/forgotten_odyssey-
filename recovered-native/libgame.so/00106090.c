/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00106090  Symbol: Mana */

/* Mana::Mana() */

Mana * __thiscall Mana::Mana(Mana *this)

{
  int iVar1;
  
  cocos2d::CCLayer::CCLayer((CCLayer *)this);
  iVar1 = *(int *)(DAT_001060cc + 0x1060a2);
  *(int *)this = iVar1 + 8;
  *(int *)(this + 0xfc) = iVar1 + 0x144;
  *(int *)(this + 0x104) = iVar1 + 0x180;
  *(int *)(this + 0x100) = iVar1 + 0x174;
  cocos2d::CCPoint::CCPoint((CCPoint *)(this + 0x118));
  return this;
}


