/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014e6a8  Symbol: activate */

/* cocos2d::CCMenuItem::activate() */

void cocos2d::CCMenuItem::activate(void)

{
  int *in_r0;
  int iVar1;
  int **ppiVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  
  if (*(char *)((int)in_r0 + 0xfd) != '\0') {
    iVar4 = in_r0[0x40];
    if ((iVar4 != 0) &&
       ((pcVar5 = (code *)in_r0[0x41], pcVar5 != (code *)0x0 || (in_r0[0x42] << 0x1f < 0)))) {
      iVar1 = in_r0[0x42] >> 1;
      if (in_r0[0x42] << 0x1f < 0) {
        pcVar5 = *(code **)(pcVar5 + *(int *)(iVar4 + iVar1));
      }
      (*pcVar5)(iVar4 + iVar1,in_r0);
    }
    if (in_r0[0x43] != 0) {
      ppiVar2 = (int **)CCScriptEngineManager::sharedManager();
      piVar6 = *ppiVar2;
      iVar4 = in_r0[0x43];
      pcVar5 = *(code **)(*piVar6 + 0x34);
      uVar3 = (**(code **)(*in_r0 + 0xa0))(in_r0);
      (*pcVar5)(piVar6,iVar4,uVar3);
    }
  }
  return;
}


