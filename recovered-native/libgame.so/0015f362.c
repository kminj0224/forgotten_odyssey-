/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f362  Symbol: unzOpen2 */

/* cocos2d::unzOpen2(char const*, cocos2d::zlib_filefunc_def_s*) */

void cocos2d::unzOpen2(char *param_1,zlib_filefunc_def_s *param_2)

{
  zlib_filefunc64_32_def_s *pzVar1;
  zlib_filefunc64_32_def_s azStack_34 [44];
  
  if (param_2 == (zlib_filefunc_def_s *)0x0) {
    pzVar1 = (zlib_filefunc64_32_def_s *)0x0;
  }
  else {
    fill_zlib_filefunc64_32_def_from_filefunc32(azStack_34,param_2);
    pzVar1 = azStack_34;
  }
  FUN_0015ed70(param_1,pzVar1,0);
  return;
}


