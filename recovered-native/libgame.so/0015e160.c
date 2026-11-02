/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015e160  Symbol: tgaDestroy */

/* cocos2d::tgaDestroy(cocos2d::sImageTGA*) */

void cocos2d::tgaDestroy(sImageTGA *param_1)

{
  if (param_1 != (sImageTGA *)0x0) {
    if (*(void **)(param_1 + 0xc) != (void *)0x0) {
      free(*(void **)(param_1 + 0xc));
    }
    free(param_1);
  }
  return;
}


