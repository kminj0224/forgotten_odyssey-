/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0013c060  Symbol: isDone */

/* cocos2d::CCActionInterval::isDone() */

bool cocos2d::CCActionInterval::isDone(void)

{
  int in_r0;
  int iVar1;
  
  iVar1 = __aeabi_fcmpge(*(undefined4 *)(in_r0 + 0x24),*(undefined4 *)(in_r0 + 0x20));
  return iVar1 != 0;
}


