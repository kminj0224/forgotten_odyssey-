/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001414b8  Symbol: initWithRows */

/* cocos2d::CCSplitRows::initWithRows(int, float) */

void cocos2d::CCSplitRows::initWithRows(int param_1,float param_2)

{
  undefined4 in_r1;
  undefined4 local_10 [4];
  
  *(undefined4 *)(param_1 + 0x34) = in_r1;
  local_10[0] = 1;
  CCGridAction::initWithSize((CCGridAction *)param_1,(_ccGridSize *)local_10,param_2);
  return;
}


