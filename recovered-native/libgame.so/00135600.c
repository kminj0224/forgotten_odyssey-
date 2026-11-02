/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00135600  Symbol: update */

/* cocos2d::CCTimer::update(float) */

void __thiscall cocos2d::CCTimer::update(CCTimer *this,float param_1)

{
  int iVar1;
  int **ppiVar2;
  undefined4 in_r1;
  code *pcVar3;
  undefined4 uVar4;
  
  uVar4 = *(undefined4 *)(this + 0x24);
  iVar1 = __aeabi_fcmpeq(uVar4,DAT_00135670);
  if (iVar1 == 0) {
    uVar4 = __addsf3(uVar4,in_r1);
    *(undefined4 *)(this + 0x24) = uVar4;
  }
  else {
    *(undefined4 *)(this + 0x24) = 0;
  }
  uVar4 = *(undefined4 *)(this + 0x24);
  iVar1 = __aeabi_fcmpge(uVar4,*(undefined4 *)(this + 0x1c));
  if (iVar1 != 0) {
    pcVar3 = *(code **)(this + 0x14);
    iVar1 = *(int *)(this + 0x18);
    if ((pcVar3 != (code *)0x0) || (iVar1 << 0x1f < 0)) {
      if (iVar1 << 0x1f < 0) {
        pcVar3 = *(code **)(pcVar3 + *(int *)(*(int *)(this + 0x20) + (iVar1 >> 1)));
      }
      (*pcVar3)(*(int *)(this + 0x20) + (iVar1 >> 1),uVar4);
    }
    if (*(int *)(this + 0x28) != 0) {
      ppiVar2 = (int **)CCScriptEngineManager::sharedManager();
      (**(code **)(**ppiVar2 + 0x48))
                (*ppiVar2,*(undefined4 *)(this + 0x28),*(undefined4 *)(this + 0x24));
    }
    *(undefined4 *)(this + 0x24) = 0;
  }
  return;
}


