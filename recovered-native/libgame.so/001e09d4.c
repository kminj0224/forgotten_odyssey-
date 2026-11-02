/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001e09d4  Symbol: FUN_001e09d4 */

undefined4 *
FUN_001e09d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7,int param_8,undefined4 param_9,
            void **param_10)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  void *pvVar4;
  void *__dest;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  void *local_2c [2];
  
  local_38 = param_3;
  uStack_34 = param_4;
  piVar1 = (int *)FUN_001da5b8(param_8 + 0x6c);
  pvVar4 = *(void **)(DAT_001e0b5c + 0x1e0a0c);
  local_2c[0] = (void *)((int)pvVar4 + 0xc);
  if (param_7 == '\0') {
    FUN_001df324(&local_40,param_2,local_38,uStack_34,param_5,param_6,param_8,param_9,local_2c);
  }
  else {
    FUN_001dfe7c();
  }
  iVar3 = *(int *)((int)local_2c[0] + -0xc);
  local_38 = local_40;
  uStack_34 = uStack_3c;
  if (iVar3 != 0) {
    FUN_001ee430(param_10,iVar3,0);
    pvVar2 = local_2c[0];
    __dest = *param_10;
    if (-1 < *(int *)((int)__dest + -4)) {
      FUN_001edf6c(param_10);
      __dest = *param_10;
    }
    if (*(char *)(piVar1 + 7) == '\x01') {
      memcpy(__dest,pvVar2,((int)pvVar2 + iVar3) - (int)pvVar2);
    }
    else {
      if (*(char *)(piVar1 + 7) == '\0') {
        FUN_00204560(piVar1);
      }
      (**(code **)(*piVar1 + 0x1c))(piVar1,pvVar2,(int)pvVar2 + iVar3,__dest);
    }
  }
  pvVar2 = (void *)((int)local_2c[0] + -0xc);
  *param_1 = local_38;
  param_1[1] = uStack_34;
  if (pvVar2 != pvVar4) {
    iVar3 = FUN_0021100c((int)local_2c[0] + -4,0xffffffff);
    if (iVar3 < 1) {
      operator_delete(pvVar2);
    }
  }
  return param_1;
}


