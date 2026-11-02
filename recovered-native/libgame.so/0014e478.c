/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e478  Symbol: setColor */

/* cocos2d::CCMenuItemLabel::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCMenuItemLabel::setColor(CCMenuItemLabel *this,_ccColor3B *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(this + 0x118);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)
             __dynamic_cast(puVar1,*(undefined4 *)(DAT_0014e4a4 + 0x14e48e),
                            *(undefined4 *)(DAT_0014e4a8 + 0x14e490),0xfffffffe);
  }
  (**(code **)*puVar1)(puVar1,param_1);
  return;
}


