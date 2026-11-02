/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016029c  Symbol: setPlaceHolder */

/* cocos2d::CCTextFieldTTF::setPlaceHolder(char const*) */

undefined8 cocos2d::CCTextFieldTTF::setPlaceHolder(char *param_1)

{
  char **ppcVar1;
  int in_r1;
  void *pvVar2;
  int aiStack_1c [2];
  
  pvVar2 = *(void **)(param_1 + 0x1f8);
  aiStack_1c[0] = in_r1;
  if (pvVar2 != (void *)0x0) {
    FUN_001ed6b8(pvVar2);
    operator_delete(pvVar2);
    *(undefined4 *)(param_1 + 0x1f8) = 0;
  }
  if (in_r1 == 0) {
    ppcVar1 = (char **)operator_new(4);
    *ppcVar1 = (char *)(*(int *)(DAT_00160300 + 0x1602de) + 0xc);
  }
  else {
    ppcVar1 = (char **)operator_new(4);
    FUN_001eed40(ppcVar1,in_r1,aiStack_1c);
  }
  *(char ***)(param_1 + 0x1f8) = ppcVar1;
  if (*(int *)(**(int **)(param_1 + 500) + -0xc) == 0) {
    CCLabelTTF::setString((CCLabelTTF *)param_1,*ppcVar1);
  }
  return CONCAT44(aiStack_1c[0],param_1);
}


