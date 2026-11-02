/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0017dcec  Symbol: FUN_0017dcec */

void FUN_0017dcec(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 != (int *)0x0) {
    if ((param_1[0x35] != 0) && (param_1[0x2b] == -1)) {
      return;
    }
    iVar2 = *param_1;
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x6c) == DAT_0017dd58)) {
      uVar1 = *(undefined4 *)(iVar2 + 0x7c);
      goto LAB_0017dd1e;
    }
  }
  uVar1 = 0;
LAB_0017dd1e:
  uVar3 = 0;
  if (*param_1 != 0) {
    uVar3 = *(undefined4 *)(*param_1 + 0x54);
  }
  FUN_001a5374(uVar1,uVar3,param_1[1],param_1,0,1,param_2,1,0,0,param_4,0,0,0,0,param_3,param_4,0);
  return;
}


