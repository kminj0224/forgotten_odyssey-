/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ea0d0  Symbol: onExit */

/* Hero_HeroEquip::onExit() */

void __thiscall Hero_HeroEquip::onExit(Hero_HeroEquip *this)

{
  int *piVar1;
  Market_Hero *this_00;
  
  piVar1 = (int *)(**(code **)(*(int *)this + 0x90))();
  this_00 = (Market_Hero *)(**(code **)(*piVar1 + 0x90))();
  Market_Hero::SetHeroState(this_00);
  cocos2d::CCLayer::onExit((CCLayer *)this);
  return;
}


