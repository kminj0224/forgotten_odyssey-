/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ec60  Symbol: unzGetGlobalInfo64 */

/* cocos2d::unzGetGlobalInfo64(void*, cocos2d::unz_global_info64_s*) */

undefined4 cocos2d::unzGetGlobalInfo64(void *param_1,unz_global_info64_s *param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffff9a;
  }
  else {
    memcpy(param_2,(void *)((int)param_1 + 0x38),0x10);
    uVar1 = 0;
  }
  return uVar1;
}


