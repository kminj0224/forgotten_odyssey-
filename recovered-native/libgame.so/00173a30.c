/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00173a30  Symbol: png_decompress_chunk */

void png_decompress_chunk(int param_1,int param_2,uint param_3,size_t param_4,size_t *param_5)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  char acStack_60 [52];
  int local_2c;
  
  iVar1 = DAT_00173ba0;
  iVar6 = DAT_00173b9c + 0x173a46;
  local_2c = **(int **)(iVar6 + DAT_00173ba0);
  if (param_3 < param_4) {
    param_4 = 0;
    png_warning(param_1,iVar6 + DAT_00173bb0);
    iVar5 = 1;
  }
  else if (param_2 == 0) {
    iVar3 = FUN_001738f8(param_1,*(int *)(param_1 + 0x348) + param_4,param_3 - param_4,0,0);
    if (*(int *)(param_1 + 0x1a0) != 0) {
      if (*(int *)(param_1 + 0x1a0) - 1U <= iVar3 + param_4) {
        png_warning(param_1,iVar6 + DAT_00173ba8);
        iVar5 = param_4 + 1;
        goto LAB_00173a7c;
      }
    }
    iVar5 = param_4 + 1;
    if (iVar3 != 0) {
      sVar4 = iVar3 + param_4;
      pvVar2 = (void *)png_malloc_warn(param_1,sVar4 + 1);
      if (pvVar2 == (void *)0x0) {
        png_warning(param_1,iVar6 + DAT_00173bb4);
        iVar5 = param_4 + 1;
      }
      else {
        memcpy(pvVar2,*(void **)(param_1 + 0x348),param_4);
        iVar5 = FUN_001738f8(param_1,*(int *)(param_1 + 0x348) + param_4,param_3 - param_4,
                             (int)pvVar2 + param_4,iVar3);
        *(undefined *)((int)pvVar2 + sVar4) = 0;
        if (iVar3 == iVar5) {
          png_free(param_1,*(undefined4 *)(param_1 + 0x348));
          *(void **)(param_1 + 0x348) = pvVar2;
          *param_5 = sVar4;
          goto LAB_00173aa6;
        }
        png_warning(param_1,iVar6 + DAT_00173bac);
        png_free(param_1,pvVar2);
        iVar5 = param_4 + 1;
      }
    }
  }
  else {
    snprintf(acStack_60,0x32,(char *)(iVar6 + DAT_00173ba4),param_2);
    png_warning(param_1,acStack_60);
    iVar5 = param_4 + 1;
  }
LAB_00173a7c:
  pvVar2 = (void *)png_malloc_warn(param_1,iVar5);
  if (pvVar2 != (void *)0x0) {
    if (param_4 != 0) {
      memcpy(pvVar2,*(void **)(param_1 + 0x348),param_4);
    }
    png_free(param_1,*(undefined4 *)(param_1 + 0x348));
    *(void **)(param_1 + 0x348) = pvVar2;
    *(undefined *)((int)pvVar2 + param_4) = 0;
  }
  *param_5 = param_4;
LAB_00173aa6:
  if (local_2c != **(int **)(iVar6 + iVar1)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


