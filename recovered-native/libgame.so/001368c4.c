/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001368c4  Symbol: unscheduleAllSelectors */

/* cocos2d::CCScheduler::unscheduleAllSelectors() */

void __thiscall cocos2d::CCScheduler::unscheduleAllSelectors(CCScheduler *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x28);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    unscheduleAllSelectorsForTarget((CCObject *)this);
  }
  iVar1 = *(int *)(this + 0x1c);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    unscheduleUpdateForTarget(this,*(CCObject **)(iVar1 + 8));
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(this + 0x18);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    unscheduleUpdateForTarget(this,*(CCObject **)(iVar1 + 8));
    iVar1 = iVar2;
  }
  iVar1 = *(int *)(this + 0x20);
  while (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 4);
    unscheduleUpdateForTarget(this,*(CCObject **)(iVar1 + 8));
    iVar1 = iVar2;
  }
  if (*(CCArray **)(this + 0x34) != (CCArray *)0x0) {
    CCArray::removeAllObjects(*(CCArray **)(this + 0x34));
  }
  return;
}


