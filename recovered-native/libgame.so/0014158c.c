/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014158c  Symbol: initWithCols */

/* cocos2d::CCSplitCols::initWithCols(int, float) */

void cocos2d::CCSplitCols::initWithCols(int param_1,float param_2)

{
  undefined4 in_r1;
  _ccGridSize local_10 [4];
  undefined4 local_c;
  
  *(undefined4 *)(param_1 + 0x34) = in_r1;
  local_c = 1;
  CCGridAction::initWithSize((CCGridAction *)param_1,local_10,param_2);
  return;
}


