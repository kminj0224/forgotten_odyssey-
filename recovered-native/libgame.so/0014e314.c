/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e314  Symbol: setColor */

/* cocos2d::CCMenuItemSprite::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCMenuItemSprite::setColor(CCMenuItemSprite *this,_ccColor3B *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)(this + 0x114);
  iVar2 = DAT_0014e384 + 0x14e326;
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)
             __dynamic_cast(puVar1,*(undefined4 *)(iVar2 + DAT_0014e388),
                            *(undefined4 *)(iVar2 + DAT_0014e38c),0xfffffffe);
  }
  (**(code **)*puVar1)(puVar1,param_1);
  if (*(int *)(this + 0x118) != 0) {
    puVar1 = (undefined4 *)
             __dynamic_cast(*(int *)(this + 0x118),*(undefined4 *)(iVar2 + DAT_0014e388),
                            *(undefined4 *)(iVar2 + DAT_0014e38c),0xfffffffe);
    (**(code **)*puVar1)(puVar1,param_1);
  }
  if (*(int *)(this + 0x11c) != 0) {
    puVar1 = (undefined4 *)
             __dynamic_cast(*(int *)(this + 0x11c),*(undefined4 *)(iVar2 + DAT_0014e388),
                            *(undefined4 *)(iVar2 + DAT_0014e38c),0xfffffffe);
    (**(code **)*puVar1)(puVar1,param_1);
  }
  return;
}


