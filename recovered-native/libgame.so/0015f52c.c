/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f52c  Symbol: unzGetFilePos */

/* cocos2d::unzGetFilePos(void*, cocos2d::unz_file_pos_s*) */

void cocos2d::unzGetFilePos(void *param_1,unz_file_pos_s *param_2)

{
  int iVar1;
  undefined4 in_r2;
  void *local_18;
  unz_file_pos_s *puStack_14;
  undefined4 local_10;
  
  local_18 = param_1;
  puStack_14 = param_2;
  local_10 = in_r2;
  iVar1 = unzGetFilePos64(param_1,(unz64_file_pos_s *)&local_18);
  if (iVar1 == 0) {
    *(void **)param_2 = local_18;
    *(undefined4 *)(param_2 + 4) = local_10;
  }
  return;
}


