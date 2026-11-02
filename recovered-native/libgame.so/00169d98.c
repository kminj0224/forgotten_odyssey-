/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169d98  Symbol: png_set_pCAL */

void png_set_pCAL(int param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined param_6,int param_7,char *param_8,int param_9)

{
  size_t sVar1;
  void *pvVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_00169ed8 + 0x169dae;
  if ((param_2 != 0) && (param_1 != 0)) {
    sVar1 = strlen(param_3);
    pvVar2 = (void *)png_malloc_warn(param_1,sVar1 + 1);
    *(void **)(param_2 + 0xa0) = pvVar2;
    if (pvVar2 == (void *)0x0) {
      png_warning(param_1,iVar5 + DAT_00169ee0);
    }
    else {
      memcpy(pvVar2,param_3,sVar1 + 1);
      *(undefined4 *)(param_2 + 0xa4) = param_4;
      *(undefined4 *)(param_2 + 0xa8) = param_5;
      *(undefined *)(param_2 + 0xb4) = param_6;
      *(undefined *)(param_2 + 0xb5) = (undefined)param_7;
      sVar1 = strlen(param_8);
      pvVar2 = (void *)png_malloc_warn(param_1,sVar1 + 1);
      *(void **)(param_2 + 0xac) = pvVar2;
      if (pvVar2 == (void *)0x0) {
        png_warning(param_1,iVar5 + DAT_00169ee4);
      }
      else {
        memcpy(pvVar2,param_8,sVar1 + 1);
        sVar1 = (param_7 + 1) * 4;
        pvVar2 = (void *)png_malloc_warn(param_1,sVar1);
        *(void **)(param_2 + 0xb0) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          png_warning(param_1,iVar5 + DAT_00169ee8);
        }
        else {
          memset(pvVar2,0,sVar1);
          if (0 < param_7) {
            iVar6 = 0;
            iVar7 = 0;
            do {
              sVar1 = strlen(*(char **)(param_9 + iVar6));
              iVar4 = *(int *)(param_2 + 0xb0);
              uVar3 = png_malloc_warn(param_1,sVar1 + 1);
              *(undefined4 *)(iVar4 + iVar6) = uVar3;
              pvVar2 = *(void **)(*(int *)(param_2 + 0xb0) + iVar6);
              if (pvVar2 == (void *)0x0) {
                png_warning(param_1,iVar5 + DAT_00169edc);
                return;
              }
              memcpy(pvVar2,*(void **)(param_9 + iVar6),sVar1 + 1);
              iVar7 = iVar7 + 1;
              iVar6 = iVar6 + 4;
            } while (iVar7 < param_7);
          }
          *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x400;
          *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x80;
        }
      }
    }
  }
  return;
}


