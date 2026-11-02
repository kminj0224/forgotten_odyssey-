/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ecb8  Symbol: unzGetCurrentFileInfo */

/* cocos2d::unzGetCurrentFileInfo(void*, cocos2d::unz_file_info_s*, char*, unsigned long, void*,
   unsigned long, char*, unsigned long) */

void cocos2d::unzGetCurrentFileInfo
               (void *param_1,unz_file_info_s *param_2,char *param_3,ulong param_4,void *param_5,
               ulong param_6,char *param_7,ulong param_8)

{
  int iVar1;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_0015e82c(param_1,&local_68,0,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 == 0) {
    *(undefined4 *)param_2 = local_68;
    *(undefined4 *)(param_2 + 4) = local_64;
    *(undefined4 *)(param_2 + 8) = local_60;
    *(undefined4 *)(param_2 + 0xc) = local_5c;
    *(undefined4 *)(param_2 + 0x10) = local_58;
    *(undefined4 *)(param_2 + 0x14) = local_54;
    *(undefined4 *)(param_2 + 0x20) = local_40;
    *(undefined4 *)(param_2 + 0x24) = local_3c;
    *(undefined4 *)(param_2 + 0x28) = local_38;
    *(undefined4 *)(param_2 + 0x2c) = local_34;
    *(undefined4 *)(param_2 + 0x30) = local_30;
    *(undefined4 *)(param_2 + 0x34) = local_2c;
    *(undefined4 *)(param_2 + 0x38) = local_28;
    *(undefined4 *)(param_2 + 0x3c) = uStack_24;
    *(undefined4 *)(param_2 + 0x40) = uStack_20;
    *(undefined4 *)(param_2 + 0x44) = local_1c;
    *(undefined4 *)(param_2 + 0x48) = uStack_18;
    *(undefined4 *)(param_2 + 0x4c) = uStack_14;
    *(undefined4 *)(param_2 + 0x18) = local_50;
    *(undefined4 *)(param_2 + 0x1c) = local_48;
  }
  return;
}


