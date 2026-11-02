/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00169508  Symbol: png_set_unknown_chunks */

void png_set_unknown_chunks(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  void *__dest;
  void *__dest_00;
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar3 = DAT_00169618 + 0x16951e;
  if (((param_2 != 0) && (param_1 != 0)) && (param_4 != 0)) {
    __dest = (void *)png_malloc_warn(param_1,(*(int *)(param_2 + 0xc0) + param_4) * 0x14);
    if (__dest == (void *)0x0) {
      png_warning(param_1,iVar3 + DAT_0016961c);
    }
    else {
      memcpy(__dest,*(void **)(param_2 + 0xbc),*(int *)(param_2 + 0xc0) * 0x14);
      png_free(param_1,*(undefined4 *)(param_2 + 0xbc));
      *(undefined4 *)(param_2 + 0xbc) = 0;
      if (0 < param_4) {
        iVar5 = 0;
        iVar3 = iVar3 + DAT_0016961c;
LAB_00169594:
        do {
          puVar4 = (undefined4 *)((int)__dest + (iVar5 + *(int *)(param_2 + 0xc0)) * 0x14);
          uVar2 = *param_3;
          *(undefined *)(puVar4 + 1) = 0;
          *puVar4 = uVar2;
          puVar4[3] = param_3[3];
          iVar1 = param_3[3];
          *(char *)(puVar4 + 4) = (char)*(undefined4 *)(param_1 + 300);
          if (iVar1 == 0) {
            puVar4[2] = 0;
          }
          else {
            __dest_00 = (void *)png_malloc_warn(param_1);
            puVar4[2] = __dest_00;
            if (__dest_00 != (void *)0x0) {
              iVar5 = iVar5 + 1;
              memcpy(__dest_00,(void *)param_3[2],param_3[3]);
              param_3 = param_3 + 5;
              if (param_4 <= iVar5) break;
              goto LAB_00169594;
            }
            png_warning(param_1,iVar3);
            puVar4[3] = 0;
          }
          iVar5 = iVar5 + 1;
          param_3 = param_3 + 5;
        } while (iVar5 < param_4);
      }
      *(void **)(param_2 + 0xbc) = __dest;
      *(int *)(param_2 + 0xc0) = *(int *)(param_2 + 0xc0) + param_4;
      *(uint *)(param_2 + 0xb8) = *(uint *)(param_2 + 0xb8) | 0x200;
    }
  }
  return;
}


