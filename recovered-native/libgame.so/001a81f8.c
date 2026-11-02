/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a81f8  Symbol: FUN_001a81f8 */

void FUN_001a81f8(int *param_1,void **param_2,void *param_3,void *param_4)

{
  byte *pbVar1;
  void *__dest;
  int iVar2;
  size_t __n;
  
  __dest = *param_2;
  if (__dest == (void *)0x0) {
    __dest = (void *)jpeg_alloc_huff_table(param_1);
    *param_2 = __dest;
  }
  memcpy(__dest,param_3,0x11);
  __n = 0;
  iVar2 = 1;
  do {
    pbVar1 = (byte *)((int)param_3 + iVar2);
    iVar2 = iVar2 + 1;
    __n = __n + *pbVar1;
  } while (iVar2 != 0x11);
  if (0xff < __n - 1) {
    *(undefined4 *)(*param_1 + 0x14) = 9;
    (**(code **)*param_1)(param_1);
  }
  memcpy((void *)((int)*param_2 + 0x11),param_4,__n);
  *(undefined4 *)((int)*param_2 + 0x114) = 0;
  return;
}


