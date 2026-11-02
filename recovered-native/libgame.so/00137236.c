/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00137236  Symbol: step */

/* cocos2d::CCFollow::step(float) */

float cocos2d::CCFollow::step(float param_1)

{
  int in_r0;
  undefined4 *puVar1;
  int *piVar2;
  code *pcVar3;
  undefined8 uVar4;
  float extraout_s2;
  float extraout_s2_00;
  CCPoint local_30 [8];
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  if (*(char *)(in_r0 + 0x24) == '\0') {
    piVar2 = *(int **)(in_r0 + 0x18);
    pcVar3 = *(code **)(*piVar2 + 0x3c);
    puVar1 = (undefined4 *)(**(code **)(**(int **)(in_r0 + 0x20) + 0x38))();
    __subsf3(*(undefined4 *)(in_r0 + 0x28),*puVar1);
    uVar4 = __subsf3(*(undefined4 *)(in_r0 + 0x2c),puVar1[1]);
    CCPoint::CCPoint(aCStack_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    param_1 = (float)(*pcVar3)(piVar2,aCStack_20);
  }
  else if (*(char *)(in_r0 + 0x25) == '\0') {
    puVar1 = (undefined4 *)(**(code **)(**(int **)(in_r0 + 0x20) + 0x38))();
    __subsf3(*(undefined4 *)(in_r0 + 0x28),*puVar1);
    uVar4 = __subsf3(*(undefined4 *)(in_r0 + 0x2c),puVar1[1]);
    uVar4 = CCPoint::CCPoint(local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    piVar2 = *(int **)(in_r0 + 0x18);
    pcVar3 = *(code **)(*piVar2 + 0x3c);
    uVar4 = clampf((float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2);
    uVar4 = clampf((float)uVar4,(float)((ulonglong)uVar4 >> 0x20),extraout_s2_00);
    CCPoint::CCPoint(aCStack_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
    param_1 = (float)(*pcVar3)(piVar2,aCStack_28);
  }
  return param_1;
}


