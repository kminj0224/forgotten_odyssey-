/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f96c  Symbol: unzOpenCurrentFile3 */

/* cocos2d::unzOpenCurrentFile3(void*, int*, int*, int, char const*) */

int cocos2d::unzOpenCurrentFile3(void *param_1,int *param_2,int *param_3,int param_4,char *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  void **__ptr;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  uint in_stack_ffffffac;
  int local_2c;
  int local_28;
  int local_24;
  uint local_20;
  void *local_1c [2];
  
  if (((param_5 != (char *)0x0) || (param_1 == (void *)0x0)) ||
     ((*(uint *)((int)param_1 + 0x60) | *(uint *)((int)param_1 + 100)) == 0)) {
    iVar6 = 0x66;
    goto LAB_0015fcae;
  }
  if (*(int *)((int)param_1 + 0xe0) != 0) {
    unzCloseCurrentFile(param_1);
  }
  iVar6 = call_zseek64((cocos2d *)param_1,*(zlib_filefunc64_32_def_s **)((int)param_1 + 0x30),
                       (void *)(*(uint *)((int)param_1 + 0xd8) + *(uint *)((int)param_1 + 0x48)),
                       (ulonglong)in_stack_ffffffac << 0x20,
                       *(int *)((int)param_1 + 0xdc) + *(int *)((int)param_1 + 0x4c) +
                       (uint)CARRY4(*(uint *)((int)param_1 + 0xd8),*(uint *)((int)param_1 + 0x48)));
  if (iVar6 == 0) {
    iVar2 = FUN_0015e6d4(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_2c);
    iVar6 = 1;
    if (iVar2 == 0) {
      iVar6 = 0;
      if (local_2c != DAT_0015fcc0) {
        iVar6 = 0x67;
        goto LAB_0015f9de;
      }
    }
    else {
LAB_0015f9de:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6a2(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 != 0) {
      iVar6 = -1;
    }
    iVar2 = FUN_0015e6a2(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_24);
    if (iVar2 != 0) {
      iVar6 = -1;
    }
    iVar2 = FUN_0015e6a2(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 == 0) {
      if ((iVar6 == 0) &&
         ((local_28 != *(int *)((int)param_1 + 0x8c) ||
          (((local_28 != 0 && (local_28 != 0xc)) && (local_28 != 8)))))) {
        iVar6 = 0x67;
        goto LAB_0015fa32;
      }
    }
    else {
      iVar6 = 1;
LAB_0015fa32:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6d4(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 != 0) {
      iVar6 = -1;
    }
    iVar2 = FUN_0015e6d4(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 == 0) {
      if (((iVar6 == 0) && (local_28 != *(int *)((int)param_1 + 0x94))) && (-1 < local_24 << 0x1c))
      {
        iVar6 = 0x67;
        goto LAB_0015fa72;
      }
    }
    else {
      iVar6 = 1;
LAB_0015fa72:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6d4(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 == 0) {
      if (((iVar6 == 0) && (local_28 != -1)) &&
         ((*(int *)((int)param_1 + 0x98) != local_28 ||
          (iVar6 = *(int *)((int)param_1 + 0x9c), iVar6 != 0)))) {
        if (-1 < local_24 << 0x1c) {
          iVar6 = 0x67;
          goto LAB_0015faac;
        }
        iVar6 = 0;
      }
    }
    else {
      iVar6 = 1;
LAB_0015faac:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6d4(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_28);
    if (iVar2 == 0) {
      if ((((iVar6 == 0) && (local_28 != -1)) &&
          ((*(int *)((int)param_1 + 0xa0) != local_28 ||
           (iVar6 = *(int *)((int)param_1 + 0xa4), iVar6 != 0)))) &&
         (iVar6 = 0, -1 < local_24 << 0x1c)) {
        iVar6 = 0x67;
        goto LAB_0015fae6;
      }
    }
    else {
      iVar6 = 1;
LAB_0015fae6:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6a2(param_1,*(undefined4 *)((int)param_1 + 0x30),&local_20);
    uVar1 = local_20;
    if (iVar2 == 0) {
      if ((iVar6 == 0) && (local_20 != *(uint *)((int)param_1 + 0xa8))) {
        iVar6 = 0x67;
        goto LAB_0015fb10;
      }
    }
    else {
      iVar6 = 1;
LAB_0015fb10:
      iVar6 = -iVar6;
    }
    iVar2 = FUN_0015e6a2(param_1,*(undefined4 *)((int)param_1 + 0x30),local_1c);
    if (iVar2 != 0) {
      iVar6 = -1;
    }
    uVar3 = *(uint *)((int)param_1 + 0xd8);
    iVar2 = *(int *)((int)param_1 + 0xdc);
    if (iVar6 == 0) {
      __ptr = (void **)malloc(0xd0);
      if (__ptr != (void **)0x0) {
        pvVar4 = malloc(0x4000);
        *__ptr = pvVar4;
        uVar5 = uVar3 + 0x1e;
        __ptr[0x14] = (void *)(local_20 + uVar5);
        __ptr[0x15] = (void *)(iVar2 + (uint)(0xffffffe1 < uVar3) + (uint)CARRY4(local_20,uVar5));
        __ptr[0x16] = local_1c[0];
        __ptr[0x18] = (void *)0x0;
        __ptr[0x19] = (void *)0x0;
        __ptr[0x32] = (void *)param_4;
        if (pvVar4 != (void *)0x0) {
          __ptr[0x12] = (void *)0x0;
          if (param_2 != (int *)0x0) {
            *param_2 = *(int *)((int)param_1 + 0x8c);
          }
          if (param_3 != (int *)0x0) {
            *param_3 = 6;
            uVar3 = *(uint *)((int)param_1 + 0x88) & 6;
            if (uVar3 == 4) {
              iVar6 = 2;
            }
            else if (uVar3 == 6) {
              iVar6 = 1;
            }
            else {
              if (uVar3 != 2) goto LAB_0015fbca;
              iVar6 = 9;
            }
            *param_3 = iVar6;
          }
LAB_0015fbca:
          __ptr[0x1d] = *(void **)((int)param_1 + 0x94);
          __ptr[0x1a] = (void *)0x0;
          __ptr[0x1b] = (void *)0x0;
          __ptr[0x1c] = (void *)0x0;
          __ptr[0x2e] = *(void **)((int)param_1 + 0x8c);
          __ptr[0x2d] = *(void **)((int)param_1 + 0x30);
          memcpy(__ptr + 0x22,param_1,0x2c);
          pvVar4 = *(void **)((int)param_1 + 0x4c);
          __ptr[0x30] = *(void **)((int)param_1 + 0x48);
          __ptr[0x31] = pvVar4;
          __ptr[6] = (void *)0x0;
          iVar6 = DAT_0015fcc4;
          pvVar4 = *(void **)((int)param_1 + 0x8c);
          if (param_4 == 0) {
            if (pvVar4 == (void *)0xc) {
              __ptr[0x32] = (void *)0x1;
            }
            else if (pvVar4 == (void *)0x8) {
              __ptr[9] = (void *)0x0;
              __ptr[10] = (void *)0x0;
              __ptr[0xb] = (void *)0x0;
              __ptr[1] = (void *)0x0;
              __ptr[2] = (void *)0x0;
              iVar6 = inflateInit2_(__ptr + 1,0xfffffff1,iVar6 + 0x15fc40,0x38);
              if (iVar6 != 0) {
                free(__ptr);
                return iVar6;
              }
              __ptr[0x12] = (void *)0x8;
            }
          }
          pvVar4 = *(void **)((int)param_1 + 0x9c);
          __ptr[0x1e] = *(void **)((int)param_1 + 0x98);
          __ptr[0x1f] = pvVar4;
          pvVar4 = *(void **)((int)param_1 + 0xa4);
          __ptr[0x20] = *(void **)((int)param_1 + 0xa0);
          __ptr[0x21] = pvVar4;
          uVar5 = *(uint *)((int)param_1 + 0xd8);
          iVar6 = *(int *)((int)param_1 + 0xdc);
          uVar3 = uVar5 + 0x1e;
          __ptr[0x10] = (void *)((int)local_1c[0] + uVar1 + uVar3);
          __ptr[0x11] = (void *)(iVar6 + (uint)(0xffffffe1 < uVar5) +
                                (uint)CARRY4((int)local_1c[0] + uVar1,uVar3));
          __ptr[2] = (void *)0x0;
          *(void ***)((int)param_1 + 0xe0) = __ptr;
          *(undefined4 *)((int)param_1 + 0xe4) = 0;
          return 0;
        }
        free(__ptr);
      }
      iVar6 = 0x68;
      goto LAB_0015fcae;
    }
  }
  iVar6 = 0x67;
LAB_0015fcae:
  return -iVar6;
}


