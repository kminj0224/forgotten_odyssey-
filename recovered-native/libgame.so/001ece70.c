/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001ece70  Symbol: FUN_001ece70 */

int FUN_001ece70(int *param_1,int param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  
  iVar2 = *param_1;
  if (param_3 < *(uint *)(iVar2 + -0xc)) {
    pvVar1 = memchr((void *)(iVar2 + param_3),param_2,*(uint *)(iVar2 + -0xc) - param_3);
    if (pvVar1 == (void *)0x0) {
      iVar2 = -1;
    }
    else {
      iVar2 = (int)pvVar1 - iVar2;
    }
    return iVar2;
  }
  return -1;
}


