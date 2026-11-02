/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0014749c  Symbol: purgeKerningDictionary */

/* cocos2d::CCBMFontConfiguration::purgeKerningDictionary() */

void __thiscall cocos2d::CCBMFontConfiguration::purgeKerningDictionary(CCBMFontConfiguration *this)

{
  int iVar1;
  void **ppvVar2;
  int iVar3;
  int *piVar4;
  void *__ptr;
  
  while (__ptr = *(void **)(this + 0x30), __ptr != (void *)0x0) {
    ppvVar2 = *(void ***)((int)__ptr + 8);
    if ((*(int *)((int)__ptr + 0xc) == 0) && (*(int *)((int)__ptr + 0x10) == 0)) {
      free(*ppvVar2);
      free(*(void **)(*(int *)(this + 0x30) + 8));
      *(undefined4 *)(this + 0x30) = 0;
    }
    else {
      if (__ptr == (void *)((int)ppvVar2[4] - (int)ppvVar2[5])) {
        ppvVar2[4] = (void *)(*(int *)((int)__ptr + 0xc) + (int)ppvVar2[5]);
      }
      if (*(int *)((int)__ptr + 0xc) == 0) {
        *(undefined4 *)(this + 0x30) = *(undefined4 *)((int)__ptr + 0x10);
      }
      else {
        *(undefined4 *)
         (*(int *)((int)__ptr + 0xc) + *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x14) + 8) =
             *(undefined4 *)((int)__ptr + 0x10);
      }
      if (*(int *)((int)__ptr + 0x10) != 0) {
        *(undefined4 *)
         (*(int *)((int)__ptr + 0x10) + *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0x14) + 4) =
             *(undefined4 *)((int)__ptr + 0xc);
      }
      iVar3 = ((*(int **)(*(int *)(this + 0x30) + 8))[1] - 1U & *(uint *)((int)__ptr + 0x24)) * 0xc;
      iVar1 = **(int **)(*(int *)(this + 0x30) + 8) + iVar3;
      *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + -1;
      piVar4 = (int *)(**(int **)(*(int *)(this + 0x30) + 8) + iVar3);
      if (*piVar4 == (int)__ptr + 8) {
        *piVar4 = *(int *)((int)__ptr + 0x18);
      }
      if (*(int *)((int)__ptr + 0x14) != 0) {
        *(undefined4 *)(*(int *)((int)__ptr + 0x14) + 0x10) = *(undefined4 *)((int)__ptr + 0x18);
      }
      if (*(int *)((int)__ptr + 0x18) != 0) {
        *(undefined4 *)(*(int *)((int)__ptr + 0x18) + 0xc) = *(undefined4 *)((int)__ptr + 0x14);
      }
      *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0xc) =
           *(int *)(*(int *)(*(int *)(this + 0x30) + 8) + 0xc) + -1;
    }
    free(__ptr);
  }
  return;
}


