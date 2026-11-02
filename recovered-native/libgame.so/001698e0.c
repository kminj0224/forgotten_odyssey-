/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001698e0  Symbol: png_set_sPLT */

void png_set_sPLT(int param_1,int param_2,char **param_3,int param_4)

{
  void *__dest;
  size_t sVar1;
  void *pvVar2;
  int iVar3;
  void **ppvVar4;
  int iVar5;
  
  iVar3 = DAT_00169a08 + 0x1698f6;
  if ((param_2 != 0) && (param_1 != 0)) {
    __dest = (void *)png_malloc_warn(param_1,(*(int *)(param_2 + 0xd8) + param_4) * 0x10);
    if (__dest == (void *)0x0) {
      png_warning(param_1,iVar3 + DAT_00169a10);
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 0xd4),*(int *)(param_2 + 0xd8) << 4);
      png_free(param_1,*(undefined4 *)(param_2 + 0xd4));
      *(undefined4 *)(param_2 + 0xd4) = 0;
      if (0 < param_4) {
        iVar5 = 0;
        iVar3 = iVar3 + DAT_00169a0c;
        do {
          while( true ) {
            ppvVar4 = (void **)((int)__dest + (*(int *)(param_2 + 0xd8) + iVar5) * 0x10);
            sVar1 = strlen(*param_3);
            pvVar2 = (void *)png_malloc_warn(param_1,sVar1 + 1);
            *ppvVar4 = pvVar2;
            if (pvVar2 != (void *)0x0) break;
            png_warning(param_1,iVar3);
            iVar5 = iVar5 + 1;
            param_3 = param_3 + 4;
            if (param_4 <= iVar5) goto LAB_001699b8;
          }
          memcpy(pvVar2,*param_3,sVar1 + 1);
          pvVar2 = (void *)png_malloc_warn(param_1,(int)param_3[3] * 10);
          ppvVar4[2] = pvVar2;
          if (pvVar2 == (void *)0x0) {
            png_warning(param_1,iVar3);
            png_free(param_1,*ppvVar4);
            *ppvVar4 = (void *)0x0;
          }
          else {
            memcpy(pvVar2,param_3[2],(int)param_3[3] * 10);
            ppvVar4[3] = param_3[3];
            *(undefined *)(ppvVar4 + 1) = *(undefined *)(param_3 + 1);
          }
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 4;
        } while (iVar5 < param_4);
      }
LAB_001699b8:
      *(void **)(param_2 + 0xd4) = __dest;
      *(int *)(param_2 + 0xd8) = *(int *)(param_2 + 0xd8) + param_4;
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x20;
    }
  }
  return;
}


