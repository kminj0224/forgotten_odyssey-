/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e572  Symbol: call_ztell64 */

/* cocos2d::call_ztell64(cocos2d::zlib_filefunc64_32_def_s const*, void*) */

ulonglong cocos2d::call_ztell64(zlib_filefunc64_32_def_s *param_1,void *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar1 = (**(code **)(param_1 + 0x24))(*(undefined4 *)(param_1 + 0x1c));
    if (uVar1 == 0xffffffff) {
      uVar2 = 0xffffffffffffffff;
    }
    else {
      uVar2 = (ulonglong)uVar1;
    }
  }
  else {
    uVar2 = (**(code **)(param_1 + 0xc))();
  }
  return uVar2;
}


