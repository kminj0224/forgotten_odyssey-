/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e5a2  Symbol: fill_zlib_filefunc64_32_def_from_filefunc32 */

/* cocos2d::fill_zlib_filefunc64_32_def_from_filefunc32(cocos2d::zlib_filefunc64_32_def_s*,
   cocos2d::zlib_filefunc_def_s const*) */

void cocos2d::fill_zlib_filefunc64_32_def_from_filefunc32
               (zlib_filefunc64_32_def_s *param_1,zlib_filefunc_def_s *param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)param_2;
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_2 + 0xc);
  return;
}


