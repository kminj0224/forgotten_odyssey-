/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014684c  Symbol: postNotification */

/* cocos2d::CCNotificationCenter::postNotification(char const*, cocos2d::CCObject*) */

undefined8 cocos2d::CCNotificationCenter::postNotification(char *param_1,CCObject *param_2)

{
  char *__s2;
  int *piVar1;
  int iVar2;
  int **ppiVar3;
  int **local_1c;
  
  local_1c = (int **)param_2;
  if (*(int *)(param_1 + 0x14) != 0) {
    piVar1 = *(int **)(*(int *)(param_1 + 0x14) + 0x14);
    iVar2 = *piVar1;
    if (iVar2 != 0) {
      ppiVar3 = (int **)piVar1[2];
      local_1c = ppiVar3 + iVar2 + -1;
      while (ppiVar3 <= local_1c) {
        piVar1 = *ppiVar3;
        ppiVar3 = ppiVar3 + 1;
        if (piVar1 == (int *)0x0) break;
        __s2 = (char *)(**(code **)(*piVar1 + 0x1c))(piVar1);
        iVar2 = strcmp((char *)param_2,__s2);
        if (iVar2 == 0) {
          CCNotificationObserver::performSelector((CCObject *)piVar1);
        }
      }
    }
  }
  return CONCAT44(local_1c,param_1);
}


