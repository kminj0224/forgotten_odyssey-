/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015f850  Symbol: unzeof */

/* cocos2d::unzeof(void*) */

uint cocos2d::unzeof(void *param_1)

{
  uint uVar1;
  int iVar2;
  
  if ((param_1 == (void *)0x0) || (iVar2 = *(int *)((int)param_1 + 0xe0), iVar2 == 0)) {
    uVar1 = 0xffffff9a;
  }
  else {
    uVar1 = (uint)((*(uint *)(iVar2 + 0x80) | *(uint *)(iVar2 + 0x84)) == 0);
  }
  return uVar1;
}


