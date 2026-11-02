/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e538  Symbol: call_zopen64 */

/* cocos2d::call_zopen64(cocos2d::zlib_filefunc64_32_def_s const*, void const*, int) */

void cocos2d::call_zopen64(zlib_filefunc64_32_def_s *param_1,void *param_2,int param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)param_1;
  if (pcVar1 == (code *)0x0) {
    pcVar1 = *(code **)(param_1 + 0x20);
  }
  (*pcVar1)(*(undefined4 *)(param_1 + 0x1c));
  return;
}


