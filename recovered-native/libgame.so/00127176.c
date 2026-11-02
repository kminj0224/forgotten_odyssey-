/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00127176  Symbol: FUN_00127176 */

void FUN_00127176(void)

{
  int *piVar1;
  int *piVar2;
  CCNode **unaff_r5;
  int param_11;
  
  piVar2 = *(int **)(param_11 + DAT_00127280);
  if (*piVar2 != 0) {
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(*unaff_r5,0x2c);
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
    piVar1 = (int *)cocos2d::CCNode::getChildByTag(*unaff_r5,0x2d);
    (**(code **)(*piVar1 + 0x6c))(piVar1,0);
    *piVar2 = 0;
  }
  return;
}


