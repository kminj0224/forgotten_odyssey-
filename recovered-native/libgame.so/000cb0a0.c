/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb0a0  Symbol: vInitScript */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* vInitScript() */

void vInitScript(void)

{
  void *__ptr;
  void **ppvVar1;
  
  ppvVar1 = *(void ***)(DAT_000cb0e8 + 0xcb0ac);
  memset((void *)((int)ppvVar1 + DAT_000cb0ec),0,400);
  __ptr = *ppvVar1;
  *(undefined4 *)((int)ppvVar1 + DAT_000cb0f0) = 0;
  *(undefined4 *)((int)ppvVar1 + DAT_000cb0f4) = 0;
  *(undefined4 *)((int)ppvVar1 + DAT_000cb0f8) = 0;
  ppvVar1[0x560] = (void *)0x0;
  *(undefined *)((int)ppvVar1 + DAT_000cb0fc) = 0;
  *(undefined *)((int)ppvVar1 + DAT_000cb100) = 0;
  *(undefined4 *)((int)ppvVar1 + DAT_000cb104) = 0xffffffff;
  if (__ptr != (void *)0x0) {
    free(__ptr);
    *ppvVar1 = (void *)0x0;
  }
  return;
}


