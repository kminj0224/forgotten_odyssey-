/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fcf4  Symbol: unzClose */

/* cocos2d::unzClose(void*) */

undefined4 cocos2d::unzClose(void *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (void *)0x0) {
    uVar1 = 0xffffff9a;
  }
  else {
    if (*(int *)((int)param_1 + 0xe0) != 0) {
      unzCloseCurrentFile(param_1);
    }
    (**(code **)((int)param_1 + 0x14))
              (*(undefined4 *)((int)param_1 + 0x1c),*(undefined4 *)((int)param_1 + 0x30));
    free(param_1);
    uVar1 = 0;
  }
  return uVar1;
}


