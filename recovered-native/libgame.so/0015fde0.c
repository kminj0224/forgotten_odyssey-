/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0015fde0  Symbol: unzSetOffset64 */

/* cocos2d::unzSetOffset64(void*, unsigned long long) */

int cocos2d::unzSetOffset64(void *param_1,ulonglong param_2)

{
  int iVar1;
  undefined4 in_r2;
  undefined4 in_r3;
  
  if (param_1 == (void *)0x0) {
    iVar1 = -0x66;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x58) = in_r2;
    *(undefined4 *)((int)param_1 + 0x5c) = in_r3;
    *(undefined4 *)((int)param_1 + 0x50) = *(undefined4 *)((int)param_1 + 0x38);
    *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)param_1 + 0x3c);
    iVar1 = FUN_0015e82c(param_1,(int)param_1 + 0x80,(int)param_1 + 0xd8,0,0,0,0,0,0);
    *(uint *)((int)param_1 + 0x60) = (uint)(iVar1 == 0);
    *(undefined4 *)((int)param_1 + 100) = 0;
  }
  return iVar1;
}


