/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000eac64  Symbol: onEnter */

/* Hero_HeroEquip::onEnter() */

void __thiscall Hero_HeroEquip::onEnter(Hero_HeroEquip *this)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x114))(this,1);
  piVar1 = (int *)(**(code **)(*(int *)this + 0x90))(this);
  iVar2 = (**(code **)(*piVar1 + 0x90))();
  *(undefined4 *)(this + 0x110) = *(undefined4 *)(iVar2 + 0x114);
  *(undefined4 *)(this + 0x120) = 0xffffffff;
  *(undefined4 *)(this + 0x124) = 0xffffffff;
  Lode_img();
  cocos2d::CCLayer::onEnter((CCLayer *)this);
  return;
}


