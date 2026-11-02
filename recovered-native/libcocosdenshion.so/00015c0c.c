/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00015c0c  Symbol: FUN_00015c0c */

int * FUN_00015c0c(int **param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *local_1c [2];
  
  local_1c[0] = (int *)0x0;
  iVar2 = (**(code **)(**(int **)(DAT_00015cbc + 0x15c1e) + 0x18))
                    (*(int **)(DAT_00015cbc + 0x15c1e),local_1c,DAT_00015cc0);
  if (iVar2 != 0) {
    __android_log_print(3,DAT_00015cc4 + 0x15c38,DAT_00015cc8 + 0x15c3a);
  }
  iVar2 = (**(code **)(**(int **)(DAT_00015ccc + 0x15c46) + 0x10))
                    (*(int **)(DAT_00015ccc + 0x15c46),local_1c,0);
  if (iVar2 < 0) {
    __android_log_print(3,DAT_00015cd0 + 0x15c5a,DAT_00015cd4 + 0x15c5c);
  }
  piVar1 = local_1c[0];
  if (local_1c[0] != (int *)0x0) {
    iVar2 = DAT_00015cd8 + 0x15c6c;
    piVar3 = (int *)(**(code **)(*local_1c[0] + 0x18))(local_1c[0],iVar2);
    if (piVar3 == (int *)0x0) {
      __android_log_print(3,DAT_00015cdc + 0x15c7e,DAT_00015ce0 + 0x15c80,iVar2);
    }
    piVar4 = (int *)(**(code **)(*piVar1 + 0x1c4))(piVar1,piVar3,param_2,param_3);
    if (piVar4 == (int *)0x0) {
      __android_log_print(3,DAT_00015ce4 + 0x15ca4,DAT_00015ce8 + 0x15ca6,param_2);
      local_1c[0] = (int *)0x0;
    }
    else {
      param_1[1] = piVar3;
      *param_1 = piVar1;
      param_1[2] = piVar4;
      local_1c[0] = (int *)0x1;
    }
  }
  return local_1c[0];
}


