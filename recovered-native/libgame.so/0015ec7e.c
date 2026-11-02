/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ec7e  Symbol: unzGetGlobalInfo */

/* cocos2d::unzGetGlobalInfo(void*, cocos2d::unz_global_info_s*) */

undefined4 cocos2d::unzGetGlobalInfo(void *param_1,unz_global_info_s *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffff9a;
  }
  else {
    *(undefined4 *)param_2 = *(undefined4 *)((int)param_1 + 0x38);
    uVar1 = 0;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)((int)param_1 + 0x40);
  }
  return uVar1;
}


