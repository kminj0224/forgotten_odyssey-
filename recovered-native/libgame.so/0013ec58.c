/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ec58  Symbol: sharedManager */

/* cocos2d::CCActionManager::sharedManager() */

int * cocos2d::CCActionManager::sharedManager(void)

{
  int *this;
  int iVar1;
  int **ppiVar2;
  int *piVar3;
  
  ppiVar2 = (int **)(DAT_0013ec98 + 0x13ec60);
  piVar3 = *ppiVar2;
  this = piVar3;
  if (piVar3 == (int *)0x0) {
    this = (int *)operator_new(0x20);
    CCActionManager((CCActionManager *)this);
    *ppiVar2 = this;
    iVar1 = init((CCActionManager *)this);
    if (iVar1 == 0) {
      if (*ppiVar2 != (int *)0x0) {
        (**(code **)(**ppiVar2 + 8))();
      }
      *(undefined4 *)(DAT_0013ec9c + 0x13ec90) = 0;
      this = piVar3;
    }
  }
  return this;
}


