/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013b5d4  Symbol: execute */

/* cocos2d::CCCallFuncND::execute() */

void __thiscall cocos2d::CCCallFuncND::execute(CCCallFuncND *this)

{
  int iVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(this + 0x28);
  iVar1 = *(int *)(this + 0x2c);
  if ((pcVar2 != (code *)0x0) || (iVar1 << 0x1f < 0)) {
    if (iVar1 << 0x1f < 0) {
      pcVar2 = *(code **)(pcVar2 + *(int *)(*(int *)(this + 0x24) + (iVar1 >> 1)));
    }
    (*pcVar2)(*(int *)(this + 0x24) + (iVar1 >> 1),*(undefined4 *)(this + 0x18),
              *(undefined4 *)(this + 0x30));
  }
  return;
}


