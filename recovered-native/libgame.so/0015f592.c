/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f592  Symbol: unzGoToFilePos */

/* cocos2d::unzGoToFilePos(void*, cocos2d::unz_file_pos_s*) */

undefined4 cocos2d::unzGoToFilePos(void *param_1,unz_file_pos_s *param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_2 == (unz_file_pos_s *)0x0) {
    uVar1 = 0xffffff9a;
  }
  else {
    local_18 = *(undefined4 *)param_2;
    local_10 = *(undefined4 *)(param_2 + 4);
    local_14 = 0;
    local_c = 0;
    uVar1 = unzGoToFilePos64(param_1,(unz64_file_pos_s *)&local_18);
  }
  return uVar1;
}


