/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015ed2a  Symbol: unzGoToFirstFile */

/* cocos2d::unzGoToFirstFile(void*) */

int cocos2d::unzGoToFirstFile(void *param_1)

{
  int iVar1;
  
  if (param_1 == (void *)0x0) {
    iVar1 = -0x66;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x58) = *(undefined4 *)((int)param_1 + 0x78);
    *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_1 + 0x7c);
    *(undefined4 *)((int)param_1 + 0x50) = 0;
    *(undefined4 *)((int)param_1 + 0x54) = 0;
    iVar1 = FUN_0015e82c(param_1,(int)param_1 + 0x80,(int)param_1 + 0xd8,0,0,0,0,0,0);
    *(uint *)((int)param_1 + 0x60) = (uint)(iVar1 == 0);
    *(undefined4 *)((int)param_1 + 100) = 0;
  }
  return iVar1;
}


