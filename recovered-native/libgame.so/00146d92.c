/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146d92  Symbol: dispatchKeypadMSG */

/* cocos2d::CCKeypadDispatcher::dispatchKeypadMSG(cocos2d::ccKeypadMSGType) */

undefined4 __thiscall
cocos2d::CCKeypadDispatcher::dispatchKeypadMSG(CCKeypadDispatcher *this,ccKeypadMSGType param_1)

{
  CCKeypadHandler *this_00;
  int *piVar1;
  code *pcVar2;
  uint *puVar3;
  CCKeypadHandler **ppCVar4;
  uint uVar5;
  
  this[0x18] = (CCKeypadDispatcher)0x1;
  ppCVar4 = *(CCKeypadHandler ***)(*(int *)(this + 0x14) + 0x14);
  if (*(int *)(*(int *)(this + 0x14) + 0x18) - (int)ppCVar4 >> 2 == 0) {
LAB_00146dd2:
    uVar5 = 0;
    this[0x18] = (CCKeypadDispatcher)0x0;
    if (this[0x1a] != (CCKeypadDispatcher)0x0) {
      this[0x1a] = (CCKeypadDispatcher)0x0;
      for (; puVar3 = *(uint **)(this + 0x20), uVar5 < *puVar3; uVar5 = uVar5 + 1) {
        forceRemoveDelegate(this,*(CCKeypadDelegate **)(uVar5 * 4 + puVar3[2]));
      }
      *puVar3 = 0;
    }
    if (this[0x19] != (CCKeypadDispatcher)0x0) {
      this[0x19] = (CCKeypadDispatcher)0x0;
      for (uVar5 = 0; puVar3 = *(uint **)(this + 0x1c), uVar5 < *puVar3; uVar5 = uVar5 + 1) {
        forceAddDelegate(this,*(CCKeypadDelegate **)(uVar5 * 4 + puVar3[2]));
      }
      *puVar3 = 0;
    }
    return 1;
  }
LAB_00146dca:
  if (ppCVar4 != *(CCKeypadHandler ***)(*(int *)(this + 0x14) + 0x18)) {
    this_00 = *ppCVar4;
    ppCVar4 = ppCVar4 + 1;
    if (this_00 != (CCKeypadHandler *)0x0) {
      piVar1 = (int *)CCKeypadHandler::getDelegate(this_00);
      if (param_1 != 1) goto code_r0x00146db8;
      pcVar2 = *(code **)*piVar1;
      goto LAB_00146dc8;
    }
  }
  goto LAB_00146dd2;
code_r0x00146db8:
  if (param_1 == 2) {
    pcVar2 = *(code **)(*piVar1 + 4);
LAB_00146dc8:
    (*pcVar2)();
  }
  goto LAB_00146dca;
}


