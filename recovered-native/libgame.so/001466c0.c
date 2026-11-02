/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001466c0  Symbol: observerExisted */

/* cocos2d::CCNotificationCenter::observerExisted(cocos2d::CCObject*, char const*) */

undefined8 __thiscall
cocos2d::CCNotificationCenter::observerExisted
          (CCNotificationCenter *this,CCObject *param_1,char *param_2)

{
  CCObject *pCVar1;
  char *__s1;
  int iVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  
  iVar2 = *(int *)(this + 0x14);
  if (iVar2 != 0) {
    ppiVar3 = (int **)(iVar2 + 0x14);
    iVar2 = **ppiVar3;
    if (iVar2 != 0) {
      ppiVar5 = (int **)(*ppiVar3)[2];
      ppiVar3 = ppiVar5 + iVar2 + -1;
      do {
        if (ppiVar3 < ppiVar5) {
          iVar2 = 0;
          goto LAB_00146716;
        }
        piVar4 = *ppiVar5;
        ppiVar5 = ppiVar5 + 1;
        if (piVar4 == (int *)0x0) {
          iVar2 = 0;
          goto LAB_00146716;
        }
        __s1 = (char *)(**(code **)(*piVar4 + 0x1c))(piVar4);
        iVar2 = strcmp(__s1,param_2);
      } while ((iVar2 != 0) ||
              (pCVar1 = (CCObject *)(**(code **)(*piVar4 + 0x14))(piVar4), pCVar1 != param_1));
      iVar2 = 1;
    }
  }
LAB_00146716:
  return CONCAT44(this,iVar2);
}


