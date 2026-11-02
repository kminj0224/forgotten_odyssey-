/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f820  Symbol: unztell */

/* cocos2d::unztell(void*) */

undefined4 cocos2d::unztell(void *param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == (void *)0x0) || (*(int *)((int)param_1 + 0xe0) == 0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)((int)param_1 + 0xe0) + 0x18);
  }
  return uVar1;
}


