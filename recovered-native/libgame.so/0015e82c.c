/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e82c  Symbol: FUN_0015e82c */

void * FUN_0015e82c(cocos2d *param_1,void *param_2,int *param_3,int param_4,void *param_5,
                   int param_6,uint param_7,int param_8,uint param_9)

{
  int iVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  uint in_stack_ffffff5c;
  void *local_a0;
  int local_8c;
  int local_88;
  int local_84;
  void *local_80;
  undefined auStack_7c [4];
  int local_78;
  int local_74;
  undefined auStack_70 [4];
  undefined auStack_6c [4];
  undefined auStack_68 [4];
  undefined auStack_64 [4];
  uint local_60;
  undefined auStack_5c [4];
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  void *local_48;
  uint local_44;
  uint local_40;
  int local_3c;
  undefined auStack_38 [4];
  undefined auStack_34 [4];
  int local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  int local_1c;
  
  if (param_1 == (cocos2d *)0x0) {
    return (void *)0xffffff9a;
  }
  iVar1 = cocos2d::call_zseek64
                    (param_1,*(zlib_filefunc64_32_def_s **)(param_1 + 0x30),
                     (void *)(*(uint *)(param_1 + 0x48) + *(uint *)(param_1 + 0x58)),
                     (ulonglong)in_stack_ffffff5c << 0x20,
                     *(int *)(param_1 + 0x4c) + *(int *)(param_1 + 0x5c) +
                     (uint)CARRY4(*(uint *)(param_1 + 0x48),*(uint *)(param_1 + 0x58)));
  if ((iVar1 == 0) &&
     (iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),&local_8c), iVar1 == 0)) {
    if (local_8c == DAT_0015eb58) {
      pvVar2 = (void *)0x0;
      goto LAB_0015e880;
    }
    iVar1 = 0x67;
  }
  else {
    iVar1 = 1;
  }
  pvVar2 = (void *)-iVar1;
LAB_0015e880:
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),auStack_70);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),auStack_6c);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),auStack_68);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),auStack_64);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),&local_60);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  local_24 = local_60 >> 0x10 & 0x1f;
  local_20 = (((local_60 >> 0x10) << 0x17) >> 0x1c) - 1;
  local_1c = (local_60 >> 0x19) + DAT_0015eb5c;
  local_28 = (local_60 << 0x10) >> 0x1b;
  local_2c = (local_60 << 0x15) >> 0x1a;
  local_30 = (local_60 & 0x1f) << 1;
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),auStack_5c);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),&local_88);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  local_58 = local_88;
  local_54 = 0;
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),&local_88);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  local_50 = local_88;
  local_4c = 0;
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_48);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_44);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_40);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_3c);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),auStack_38);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),auStack_34);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),&local_88);
  if (iVar1 != 0) {
    pvVar2 = (void *)0xffffffff;
  }
  local_78 = local_88;
  local_74 = 0;
  pvVar4 = local_48;
  if ((pvVar2 == (void *)0x0) && (param_4 != 0)) {
    local_a0 = param_5;
    if (local_48 < param_5) {
      *(undefined *)(param_4 + (int)local_48) = 0;
      local_a0 = local_48;
    }
    if ((param_5 == (void *)0x0) || (local_48 == (void *)0x0)) {
      pvVar2 = (void *)0x0;
    }
    else {
      pvVar2 = (void *)(**(code **)(param_1 + 4))
                                 (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),
                                  param_4,local_a0);
      pvVar2 = (void *)-(uint)(pvVar2 != local_a0);
    }
    pvVar4 = (void *)((int)local_48 - (int)local_a0);
  }
  uVar3 = local_44;
  if ((pvVar2 == (void *)0x0) && (param_6 != 0)) {
    local_a0 = (void *)param_7;
    if (local_44 < param_7) {
      local_a0 = (void *)local_44;
    }
    pvVar2 = pvVar4;
    if (pvVar4 != (void *)0x0) {
      iVar1 = cocos2d::call_zseek64
                        (param_1,*(zlib_filefunc64_32_def_s **)(param_1 + 0x30),pvVar4,
                         CONCAT44(in_stack_ffffff5c,1),(int)pvVar4 >> 0x1f);
      if (iVar1 == 0) {
        pvVar2 = (void *)0x0;
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar2 = (void *)0xffffffff;
      }
    }
    if (((param_7 != 0) && (local_44 != 0)) &&
       (uVar3 = (**(code **)(param_1 + 4))
                          (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),param_6,
                           local_a0), (void *)uVar3 != local_a0)) {
      pvVar2 = (void *)0xffffffff;
    }
    uVar3 = local_44 - (int)local_a0;
  }
  pvVar4 = (void *)((int)pvVar4 + uVar3);
  if ((pvVar2 == (void *)0x0) && (local_44 != 0)) {
    pvVar5 = (void *)((int)pvVar4 - local_44);
    pvVar4 = pvVar5;
    if ((pvVar5 != (void *)0x0) &&
       (iVar1 = cocos2d::call_zseek64
                          (param_1,*(zlib_filefunc64_32_def_s **)(param_1 + 0x30),pvVar5,
                           CONCAT44(in_stack_ffffff5c,1),(int)pvVar5 >> 0x1f), pvVar4 = pvVar2,
       iVar1 != 0)) {
      pvVar2 = (void *)0xffffffff;
      pvVar4 = pvVar5;
    }
    for (uVar3 = 0; uVar3 < local_44; uVar3 = (int)local_80 + uVar3 + 4) {
      iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_84);
      if (iVar1 != 0) {
        pvVar2 = (void *)0xffffffff;
      }
      iVar1 = FUN_0015e6a2(param_1,*(undefined4 *)(param_1 + 0x30),&local_80);
      if (iVar1 != 0) {
        pvVar2 = (void *)0xffffffff;
      }
      if (local_84 == 1) {
        if (((local_50 == -1) && (local_4c == 0)) &&
           (iVar1 = FUN_0015e73a(param_1,*(undefined4 *)(param_1 + 0x30),&local_50), iVar1 != 0)) {
          pvVar2 = (void *)0xffffffff;
        }
        if (((local_58 == -1) && (local_54 == 0)) &&
           (iVar1 = FUN_0015e73a(param_1,*(undefined4 *)(param_1 + 0x30),&local_58), iVar1 != 0)) {
          pvVar2 = (void *)0xffffffff;
        }
        if (((local_78 == -1) && (local_74 == 0)) &&
           (iVar1 = FUN_0015e73a(param_1,*(undefined4 *)(param_1 + 0x30),&local_78), iVar1 != 0)) {
          pvVar2 = (void *)0xffffffff;
        }
        if ((local_3c == -1) &&
           (iVar1 = FUN_0015e6d4(param_1,*(undefined4 *)(param_1 + 0x30),auStack_7c), iVar1 != 0)) {
          pvVar2 = (void *)0xffffffff;
        }
      }
      else {
        iVar1 = cocos2d::call_zseek64
                          (param_1,*(zlib_filefunc64_32_def_s **)(param_1 + 0x30),local_80,
                           CONCAT44(in_stack_ffffff5c,1),0);
        if (iVar1 != 0) {
          pvVar2 = (void *)0xffffffff;
        }
      }
    }
  }
  if ((pvVar2 == (void *)0x0) && (param_8 != 0)) {
    local_a0 = (void *)local_40;
    if (local_40 < param_9) {
      *(undefined *)(param_8 + local_40) = 0;
    }
    else {
      local_a0 = (void *)param_9;
    }
    pvVar2 = pvVar4;
    if ((pvVar4 != (void *)0x0) &&
       (pvVar2 = (void *)cocos2d::call_zseek64
                                   (param_1,*(zlib_filefunc64_32_def_s **)(param_1 + 0x30),pvVar4,
                                    CONCAT44(in_stack_ffffff5c,1),(int)pvVar4 >> 0x1f),
       pvVar2 != (void *)0x0)) {
      pvVar2 = (void *)0xffffffff;
    }
    if (((param_9 != 0) && (local_40 != 0)) &&
       (uVar3 = (**(code **)(param_1 + 4))
                          (*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x30),param_8,
                           local_a0), (void *)uVar3 != local_a0)) {
      pvVar2 = (void *)0xffffffff;
    }
  }
  if (pvVar2 == (void *)0x0) {
    if (param_2 != (void *)0x0) {
      memcpy(param_2,auStack_70,0x58);
    }
    if ((pvVar2 == (void *)0x0) && (param_3 != (int *)0x0)) {
      pvVar2 = (void *)0x0;
      *param_3 = local_78;
      param_3[1] = local_74;
    }
  }
  return pvVar2;
}


