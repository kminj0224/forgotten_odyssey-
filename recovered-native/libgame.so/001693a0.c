/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001693a0  Symbol: png_set_keep_unknown_chunks */

void png_set_keep_unknown_chunks(int param_1,int param_2,void *param_3,int param_4)

{
  void *__dest;
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  if (param_1 != 0) {
    if (param_4 == 0) {
      if (param_2 - 2U < 2) {
        uVar1 = *(uint *)(param_1 + 0x130);
        uVar2 = uVar1 | 0x8000;
        *(uint *)(param_1 + 0x130) = uVar2;
        if (param_2 == 3) {
          *(uint *)(param_1 + 0x130) = uVar1 | 0x18000;
          return;
        }
      }
      else {
        uVar2 = *(uint *)(param_1 + 0x130) & DAT_00169490;
        *(uint *)(param_1 + 0x130) = uVar2;
      }
      *(uint *)(param_1 + 0x130) = uVar2 & DAT_00169494;
    }
    else if (param_3 != (void *)0x0) {
      iVar3 = *(int *)(param_1 + 0x2e4);
      __dest = (void *)png_malloc(param_1,(param_4 + iVar3) * 5);
      if (*(void **)(param_1 + 0x2e8) != (void *)0x0) {
        memcpy(__dest,*(void **)(param_1 + 0x2e8),iVar3 * 5);
        png_free(param_1,*(undefined4 *)(param_1 + 0x2e8));
        *(undefined4 *)(param_1 + 0x2e8) = 0;
      }
      memcpy((void *)((int)__dest + iVar3 * 5),param_3,param_4 * 5);
      if (0 < param_4) {
        puVar4 = (undefined *)(iVar3 * 5 + 4 + (int)__dest);
        puVar5 = puVar4 + param_4 * 5;
        do {
          *puVar4 = (char)param_2;
          puVar4 = puVar4 + 5;
        } while (puVar4 != puVar5);
      }
      *(int *)(param_1 + 0x2e4) = param_4 + iVar3;
      *(void **)(param_1 + 0x2e8) = __dest;
      *(uint *)(param_1 + 0x2d8) = *(uint *)(param_1 + 0x2d8) | 0x400;
    }
  }
  return;
}


