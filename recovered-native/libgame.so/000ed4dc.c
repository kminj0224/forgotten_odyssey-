/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ed4dc  Symbol: onEnter */

/* Hero_HeroSkill::onEnter() */

void __thiscall Hero_HeroSkill::onEnter(Hero_HeroSkill *this)

{
  (**(code **)(*(int *)this + 0x114))(this,1);
  *(undefined4 *)(this + 0x114) = 0;
  Lode_img();
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


