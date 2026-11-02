/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e944  Symbol: setColor */

/* cocos2d::CCMenuItemToggle::setColor(cocos2d::_ccColor3B const&) */

void __thiscall cocos2d::CCMenuItemToggle::setColor(CCMenuItemToggle *this,_ccColor3B *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  
  this[DAT_0014e9a4] = *(CCMenuItemToggle *)param_1;
  this[0x116] = *(CCMenuItemToggle *)((int)param_1 + 1);
  this[DAT_0014e9a8] = *(CCMenuItemToggle *)((int)param_1 + 2);
  iVar2 = *(int *)(this + 0x11c);
  if ((iVar2 != 0) &&
     (piVar3 = *(int **)(iVar2 + 0x14), *(int *)(iVar2 + 0x18) - (int)piVar3 >> 2 != 0)) {
    while (piVar3 != *(int **)(*(int *)(this + 0x11c) + 0x18)) {
      puVar1 = (undefined4 *)*piVar3;
      piVar3 = piVar3 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)
                 __dynamic_cast(puVar1,*(undefined4 *)(DAT_0014e9ac + 0x14e988),
                                *(undefined4 *)(DAT_0014e9b0 + 0x14e98a),0xfffffffe);
      }
      (**(code **)*puVar1)(puVar1,param_1);
    }
  }
  return;
}


