/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00194f6c  Symbol: FUN_00194f6c */

uint * FUN_00194f6c(int param_1,int param_2,uint param_3)

{
  uint *__s;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 local_1c [2];
  
  iVar3 = DAT_00195040 + 0x194f78;
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 0x50);
  }
  if (param_3 == 2) {
    iVar2 = DAT_00195044;
    if (param_2 == 0) goto LAB_00194fa6;
  }
  else {
    if (param_3 < 3) {
      if (param_3 != 1) {
LAB_00194fb0:
        FUN_00194f00(0,iVar3 + DAT_0019504c);
        return (uint *)0x0;
      }
    }
    else if (4 < param_3) goto LAB_00194fb0;
    iVar2 = DAT_00195048;
    if (param_2 != 0) {
LAB_00194fa6:
      FUN_00194f00(0,iVar3 + iVar2);
    }
  }
  __s = (uint *)(***(code ***)(iVar3 + DAT_00195050))(0x1c);
  if (__s == (uint *)0x0) {
    FUN_00194208(0,iVar3 + DAT_00195054);
    return (uint *)0x0;
  }
  memset(__s,0,0x1c);
  __s[1] = 1;
  *__s = param_3;
  if (param_2 == 0) {
    return __s;
  }
  iVar3 = FUN_001894b4(param_2,local_1c);
  if (iVar3 == 0) {
    iVar3 = param_2;
    if (iVar4 == 0) {
LAB_0019501a:
      uVar1 = FUN_0019c904(iVar3);
      goto LAB_00195036;
    }
  }
  else {
    if (iVar4 == 0) {
      uVar1 = FUN_0019c88c(param_2,local_1c[0]);
      __s[6] = uVar1;
      goto LAB_0019501a;
    }
    uVar1 = FUN_0019d178(iVar4,param_2);
    __s[6] = uVar1;
    param_2 = iVar3;
  }
  uVar1 = FUN_0019d178(iVar4,param_2,0xffffffff);
LAB_00195036:
  __s[2] = uVar1;
  return __s;
}


