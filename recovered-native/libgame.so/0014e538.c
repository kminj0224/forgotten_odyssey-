/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e538  Symbol: setIsEnabled */

/* cocos2d::CCMenuItemLabel::setIsEnabled(bool) */

void __thiscall cocos2d::CCMenuItemLabel::setIsEnabled(CCMenuItemLabel *this,bool param_1)

{
  int *piVar1;
  CCMenuItemLabel *pCVar2;
  undefined4 *puVar3;
  code **ppcVar4;
  int iVar5;
  
  iVar5 = DAT_0014e5dc + 0x14e548;
  if (this[0xfd] != (CCMenuItemLabel)param_1) {
    if (param_1) {
      puVar3 = *(undefined4 **)(this + 0x118);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)
                 __dynamic_cast(puVar3,*(undefined4 *)(iVar5 + DAT_0014e5e0),
                                *(undefined4 *)(iVar5 + DAT_0014e5e4),0xfffffffe);
      }
      ppcVar4 = (code **)*puVar3;
      iVar5 = 0x8e;
    }
    else {
      piVar1 = (int *)0x0;
      if (*(int *)(this + 0x118) != 0) {
        piVar1 = (int *)__dynamic_cast(*(int *)(this + 0x118),*(undefined4 *)(iVar5 + DAT_0014e5e0),
                                       *(undefined4 *)(iVar5 + DAT_0014e5e4),0xfffffffe);
      }
      pCVar2 = (CCMenuItemLabel *)(**(code **)(*piVar1 + 4))();
      this[0x11c] = *pCVar2;
      this[DAT_0014e5e8] = pCVar2[1];
      this[0x11e] = pCVar2[2];
      puVar3 = *(undefined4 **)(this + 0x118);
      if (puVar3 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)
                 __dynamic_cast(puVar3,*(undefined4 *)(iVar5 + DAT_0014e5e0),
                                *(undefined4 *)(iVar5 + DAT_0014e5e4),0xfffffffe);
      }
      ppcVar4 = (code **)*puVar3;
      iVar5 = 0x8a;
    }
    (**ppcVar4)(puVar3,this + iVar5 * 2);
  }
  CCMenuItem::setIsEnabled((CCMenuItem *)this,param_1);
  return;
}


