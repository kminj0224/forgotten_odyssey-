/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169a14  Symbol: png_set_text_2 */

undefined4 png_set_text_2(int param_1,int param_2,int *param_3,int param_4)

{
  size_t __n;
  char *__s;
  size_t __n_00;
  void *__dest;
  int iVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int iVar5;
  size_t __n_01;
  size_t __n_02;
  int local_3c;
  
  if (((param_2 != 0) && (param_1 != 0)) && (param_4 != 0)) {
    iVar5 = *(int *)(param_2 + 0x34);
    iVar1 = param_4 + *(int *)(param_2 + 0x30);
    if (iVar5 < iVar1) {
      pvVar4 = *(void **)(param_2 + 0x38);
      if (pvVar4 == (void *)0x0) {
        *(undefined4 *)(param_2 + 0x30) = 0;
        *(int *)(param_2 + 0x34) = param_4 + 8;
        iVar1 = png_malloc_warn(param_1,(param_4 + 8) * 0x1c);
        *(int *)(param_2 + 0x38) = iVar1;
        if (iVar1 == 0) {
          return 1;
        }
        *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x4000;
      }
      else {
        iVar1 = iVar1 + 8;
        *(int *)(param_2 + 0x34) = iVar1;
        __dest = (void *)png_malloc_warn(param_1,iVar1 * 0x1c);
        *(void **)(param_2 + 0x38) = __dest;
        if (__dest == (void *)0x0) {
          png_free(param_1,pvVar4);
          return 1;
        }
        memcpy(__dest,pvVar4,iVar5 * 0x1c);
        png_free(param_1,pvVar4);
      }
    }
    if (0 < param_4) {
      local_3c = 0;
      iVar1 = *(int *)(param_2 + 0x30);
      do {
        iVar5 = *(int *)(param_2 + 0x38);
        if ((char *)param_3[1] != (char *)0x0) {
          __n = strlen((char *)param_3[1]);
          iVar2 = *param_3;
          if (iVar2 < 1) {
            __n_01 = 0;
            __n_02 = 0;
          }
          else {
            __n_01 = 0;
            if ((char *)param_3[5] != (char *)0x0) {
              __n_01 = strlen((char *)param_3[5]);
            }
            __n_02 = 0;
            if ((char *)param_3[6] != (char *)0x0) {
              __n_02 = strlen((char *)param_3[6]);
            }
          }
          __s = (char *)param_3[2];
          piVar3 = (int *)(iVar5 + iVar1 * 0x1c);
          if ((__s == (char *)0x0) || (*__s == '\0')) {
            if (iVar2 < 1) {
              __n_00 = 0;
              *piVar3 = -1;
            }
            else {
              *piVar3 = 1;
              __n_00 = 0;
            }
          }
          else {
            __n_00 = strlen(__s);
            *piVar3 = iVar2;
          }
          pvVar4 = (void *)png_malloc_warn(param_1,__n + 4 + __n_01 + __n_02 + __n_00);
          piVar3[1] = (int)pvVar4;
          if (pvVar4 == (void *)0x0) {
            return 1;
          }
          memcpy(pvVar4,(void *)param_3[1],__n);
          *(undefined *)(piVar3[1] + __n) = 0;
          if (*param_3 < 1) {
            piVar3[5] = 0;
            piVar3[6] = 0;
            pvVar4 = (void *)(piVar3[1] + __n + 1);
            piVar3[2] = (int)pvVar4;
            if (__n_00 == 0) goto LAB_00169aa2;
LAB_00169b5a:
            memcpy(pvVar4,(void *)param_3[2],__n_00);
            *(undefined *)(piVar3[2] + __n_00) = 0;
            if (0 < *piVar3) goto LAB_00169aac;
LAB_00169b6e:
            piVar3[3] = __n_00;
            piVar3[4] = 0;
          }
          else {
            pvVar4 = (void *)(piVar3[1] + __n + 1);
            piVar3[5] = (int)pvVar4;
            memcpy(pvVar4,(void *)param_3[5],__n_01);
            *(undefined *)(piVar3[5] + __n_01) = 0;
            pvVar4 = (void *)(piVar3[5] + __n_01 + 1);
            piVar3[6] = (int)pvVar4;
            memcpy(pvVar4,(void *)param_3[6],__n_02);
            *(undefined *)(piVar3[6] + __n_02) = 0;
            pvVar4 = (void *)(piVar3[6] + __n_02 + 1);
            piVar3[2] = (int)pvVar4;
            if (__n_00 != 0) goto LAB_00169b5a;
LAB_00169aa2:
            *(undefined *)((int)pvVar4 + __n_00) = 0;
            if (*piVar3 < 1) goto LAB_00169b6e;
LAB_00169aac:
            piVar3[3] = 0;
            piVar3[4] = __n_00;
          }
          iVar1 = *(int *)(param_2 + 0x30) + 1;
          *(int *)(param_2 + 0x30) = iVar1;
        }
        param_3 = param_3 + 7;
        local_3c = local_3c + 1;
      } while (local_3c < param_4);
    }
  }
  return 0;
}


