/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00146718  Symbol: removeObserver */

/* cocos2d::CCNotificationCenter::removeObserver(cocos2d::CCObject*, char const*) */

undefined8 __thiscall
cocos2d::CCNotificationCenter::removeObserver
          (CCNotificationCenter *this,CCObject *param_1,char *param_2)

{
  CCObject *pCVar1;
  char *__s1;
  int *piVar2;
  int iVar3;
  int **ppiVar4;
  int **local_20;
  
  local_20 = (int **)this;
  if (*(int *)(this + 0x14) != 0) {
    piVar2 = *(int **)(*(int *)(this + 0x14) + 0x14);
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      ppiVar4 = (int **)piVar2[2];
      local_20 = ppiVar4 + iVar3 + -1;
      do {
        if (local_20 < ppiVar4) goto LAB_00146772;
        piVar2 = *ppiVar4;
        ppiVar4 = ppiVar4 + 1;
        if (piVar2 == (int *)0x0) goto LAB_00146772;
        __s1 = (char *)(**(code **)(*piVar2 + 0x1c))(piVar2);
        iVar3 = strcmp(__s1,param_2);
      } while ((iVar3 != 0) ||
              (pCVar1 = (CCObject *)(**(code **)(*piVar2 + 0x14))(piVar2), pCVar1 != param_1));
      CCArray::removeObject(*(CCObject **)(this + 0x14));
    }
  }
LAB_00146772:
  return CONCAT44(param_1,local_20);
}


