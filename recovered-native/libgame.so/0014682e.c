/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014682e  Symbol: performSelector */

/* cocos2d::CCNotificationObserver::performSelector(cocos2d::CCObject*) */

void cocos2d::CCNotificationObserver::performSelector(CCObject *param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 0) {
    pcVar3 = *(code **)(param_1 + 0x18);
    iVar1 = *(int *)(param_1 + 0x1c) >> 1;
    if (*(int *)(param_1 + 0x1c) << 0x1f < 0) {
      pcVar3 = *(code **)(pcVar3 + *(int *)(iVar2 + iVar1));
    }
    (*pcVar3)(iVar2 + iVar1);
  }
  return;
}


