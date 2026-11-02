/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018a9a4  Symbol: FUN_0018a9a4 */

undefined4 FUN_0018a9a4(void **param_1,void *param_2,uint param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = DAT_0018aa50 + 0x18a9b0;
  if ((((param_1 == (void **)0x0) || (param_1[3] == (void *)0x2)) || (param_2 == (void *)0x0)) ||
     ((int)(param_3 + 1) < 0 != SCARRY4(param_3,1))) {
LAB_0018aa4a:
    uVar2 = 0xffffffff;
  }
  else {
    if (param_3 != 0) {
      if (param_3 == 0xffffffff) {
        param_3 = FUN_0019c49c(param_2);
      }
      if ((int)param_3 < 1) goto LAB_0018aa4a;
      if (((param_1[3] == (void *)0x3) && (param_1[4] != (void *)0x0)) &&
         (param_3 < (uint)((int)*param_1 - (int)param_1[4]))) {
        pvVar1 = (void *)((int)*param_1 - param_3);
        *param_1 = pvVar1;
        memmove(pvVar1,param_2,param_3);
        param_1[1] = (void *)((int)param_1[1] + param_3);
        param_1[2] = (void *)((int)param_1[2] + param_3);
      }
      else {
        if ((param_1[2] < (void *)((int)param_1[1] + param_3 + 2)) &&
           (iVar3 = FUN_0018a828(param_1), iVar3 == 0)) {
          FUN_001898e8(iVar4 + DAT_0018aa54);
          return 2;
        }
        memmove((void *)((int)*param_1 + param_3),*param_1,(size_t)param_1[1]);
        memmove(*param_1,param_2,param_3);
        pvVar1 = param_1[1];
        param_1[1] = (void *)(param_3 + (int)pvVar1);
        *(undefined *)((int)*param_1 + (int)(void *)(param_3 + (int)pvVar1)) = 0;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}


