/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f338  Symbol: unzOpen2_64 */

/* cocos2d::unzOpen2_64(void const*, cocos2d::zlib_filefunc64_def_s*) */

void cocos2d::unzOpen2_64(void *param_1,zlib_filefunc64_def_s *param_2)

{
  undefined4 *puVar1;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar1 = (undefined4 *)param_2;
  if (param_2 != (zlib_filefunc64_def_s *)0x0) {
    puVar1 = &local_3c;
    local_3c = *(undefined4 *)param_2;
    uStack_38 = *(undefined4 *)(param_2 + 4);
    uStack_34 = *(undefined4 *)(param_2 + 8);
    local_30 = *(undefined4 *)(param_2 + 0xc);
    uStack_2c = *(undefined4 *)(param_2 + 0x10);
    uStack_28 = *(undefined4 *)(param_2 + 0x14);
    local_24 = *(undefined4 *)(param_2 + 0x18);
    uStack_20 = *(undefined4 *)(param_2 + 0x1c);
    local_18 = 0;
    local_14 = 0;
  }
  FUN_0015ed70(param_1,puVar1,1);
  return;
}


