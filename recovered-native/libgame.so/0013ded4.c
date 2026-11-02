/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013ded4  Symbol: initWithDuration */

/* cocos2d::CCBezierBy::initWithDuration(float, cocos2d::_ccBezierConfig const&) */

int cocos2d::CCBezierBy::initWithDuration(float param_1,_ccBezierConfig *param_2)

{
  int iVar1;
  undefined4 *in_r2;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = CCActionInterval::initWithDuration((CCActionInterval *)param_2,param_1);
  if (iVar1 != 0) {
    uVar2 = in_r2[1];
    uVar3 = in_r2[2];
    *(undefined4 *)(param_2 + 0x2c) = *in_r2;
    *(undefined4 *)(param_2 + 0x30) = uVar2;
    *(undefined4 *)(param_2 + 0x34) = uVar3;
    uVar2 = in_r2[4];
    uVar3 = in_r2[5];
    *(undefined4 *)(param_2 + 0x38) = in_r2[3];
    *(undefined4 *)(param_2 + 0x3c) = uVar2;
    *(undefined4 *)(param_2 + 0x40) = uVar3;
    iVar1 = 1;
  }
  return iVar1;
}


