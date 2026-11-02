/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194c40  Symbol: FUN_00194c40 */

void * FUN_00194c40(void *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_1c [2];
  
  iVar4 = DAT_00194d0c + 0x194c4c;
  if (param_1 != (void *)0x0) {
    local_1c[0] = 0;
    if (*(int *)((int)param_1 + 0x28) == 0) {
      uVar3 = 0;
      if (*(int *)((int)param_1 + 0x20) != 0) {
        uVar3 = *(undefined4 *)(*(int *)((int)param_1 + 0x20) + 0x50);
      }
      iVar1 = FUN_0018f404(0,uVar3);
      *(int *)((int)param_1 + 0x28) = iVar1;
      if (iVar1 == 0) {
        FUN_00194208(0,iVar4 + DAT_00194d10);
        return (void *)0x0;
      }
    }
    uVar3 = *(undefined4 *)((int)param_1 + 0x28);
    iVar1 = FUN_0018b188(param_2,local_1c);
    if (iVar1 != 0) {
      param_2 = iVar1;
    }
    param_1 = (void *)FUN_0018eb6c(uVar3,param_2,local_1c[0]);
    if (param_1 == (void *)0x0) {
      param_1 = (void *)(***(code ***)(iVar4 + DAT_00194d14))(0x38);
      if (param_1 == (void *)0x0) {
        FUN_00194208(0,iVar4 + DAT_00194d18);
        return (void *)0x0;
      }
      memset(param_1,0,0x38);
      *(undefined4 *)((int)param_1 + 4) = 0xf;
      uVar2 = FUN_0019c904(param_2);
      *(undefined4 *)((int)param_1 + 8) = uVar2;
      uVar2 = FUN_0019c904(local_1c[0]);
      *(undefined4 *)((int)param_1 + 0x30) = uVar2;
      *(undefined4 *)((int)param_1 + 0x24) = 0;
      FUN_0018f230(uVar3,param_2,local_1c[0],param_1);
    }
    if (local_1c[0] != 0) {
      (***(code ***)(iVar4 + DAT_00194d1c))();
    }
    if (iVar1 != 0) {
      (***(code ***)(iVar4 + DAT_00194d1c))(iVar1);
    }
  }
  return param_1;
}


