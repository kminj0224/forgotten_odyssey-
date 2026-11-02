/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00160318  Symbol: setString */

/* cocos2d::CCTextFieldTTF::setString(char const*) */

undefined8 cocos2d::CCTextFieldTTF::setString(char *param_1)

{
  int *piVar1;
  int in_r1;
  char *pcVar2;
  byte *pbVar3;
  int iVar4;
  void *pvVar5;
  int aiStack_1c [2];
  
  pvVar5 = *(void **)(param_1 + 500);
  aiStack_1c[0] = in_r1;
  if (pvVar5 != (void *)0x0) {
    FUN_001ed6b8(pvVar5);
    operator_delete(pvVar5);
    *(undefined4 *)(param_1 + 500) = 0;
  }
  if (in_r1 == 0) {
    piVar1 = (int *)operator_new(4);
    *piVar1 = *(int *)(DAT_001603a0 + 0x16035a) + 0xc;
    *(int **)(param_1 + 500) = piVar1;
  }
  else {
    pvVar5 = operator_new(4);
    FUN_001eed40(pvVar5,in_r1,aiStack_1c);
    *(void **)(param_1 + 500) = pvVar5;
  }
  pcVar2 = **(char ***)(param_1 + 500);
  if (*(int *)(pcVar2 + -0xc) == 0) {
    pcVar2 = **(char ***)(param_1 + 0x1f8);
  }
  CCLabelTTF::setString((CCLabelTTF *)param_1,pcVar2);
  iVar4 = 0;
  for (pbVar3 = **(byte ***)(param_1 + 500); *pbVar3 != 0; pbVar3 = pbVar3 + 1) {
    iVar4 = iVar4 + (uint)((*pbVar3 & 0xc0) != 0x80);
  }
  *(int *)(param_1 + 0x1ec) = iVar4;
  return CONCAT44(aiStack_1c[0],param_1);
}


