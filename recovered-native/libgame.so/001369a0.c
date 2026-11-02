/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001369a0  Symbol: unscheduleScriptEntry */

/* cocos2d::CCScheduler::unscheduleScriptEntry(unsigned int) */

void __thiscall cocos2d::CCScheduler::unscheduleScriptEntry(CCScheduler *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = CCArray::count(*(CCArray **)(this + 0x34));
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      return;
    }
    iVar2 = CCArray::objectAtIndex(*(CCArray **)(this + 0x34),uVar1);
  } while (*(uint *)(iVar2 + 0x20) != param_1);
  *(undefined *)(iVar2 + 0x19) = 1;
  return;
}


