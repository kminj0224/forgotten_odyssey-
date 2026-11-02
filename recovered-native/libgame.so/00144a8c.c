/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00144a8c  Symbol: calculateDeltaTime */

/* cocos2d::CCDirector::calculateDeltaTime() */

undefined8 cocos2d::CCDirector::calculateDeltaTime(void)

{
  int in_r0;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int in_r1;
  int *piVar4;
  int local_20;
  int local_1c;
  
  local_20 = in_r0;
  local_1c = in_r1;
  iVar1 = CCTime::gettimeofdayCocos2d((cc_timeval *)&local_20,(void *)0x0);
  if (iVar1 == 0) {
    if (*(char *)(in_r0 + 0x5c) == '\0') {
      piVar4 = *(int **)(in_r0 + 0x54);
      uVar2 = __floatsisf(local_20 - *piVar4);
      uVar3 = __floatsisf(local_1c - piVar4[1]);
      uVar3 = __divsf3(uVar3,DAT_00144af4);
      uVar2 = __addsf3(uVar2,uVar3);
      iVar1 = __aeabi_fcmpgt(uVar2,0);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      *(undefined4 *)(in_r0 + 0x58) = uVar2;
    }
    else {
      *(undefined4 *)(in_r0 + 0x58) = 0;
      *(char *)(in_r0 + 0x5c) = '\0';
    }
    piVar4 = *(int **)(in_r0 + 0x54);
    *piVar4 = local_20;
    piVar4[1] = local_1c;
  }
  else {
    *(undefined4 *)(in_r0 + 0x58) = 0;
  }
  return CONCAT44(local_1c,local_20);
}


