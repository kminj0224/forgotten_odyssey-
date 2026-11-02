/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013f434  Symbol: removeAllActions */

/* cocos2d::CCActionManager::removeAllActions() */

void __thiscall cocos2d::CCActionManager::removeAllActions(CCActionManager *this)

{
  int iVar1;
  
  iVar1 = *(int *)(this + 0x14);
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x1c);
    removeAllActionsFromTarget((CCObject *)this);
  }
  return;
}


