/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000161d4  Symbol: __cxa_type_match */

int __cxa_type_match(char *param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *local_1c [2];
  
  iVar2 = DAT_0001636c + 0x161f0;
  if ((((*param_1 == 'G') && (param_1[1] == 'N')) && (param_1[2] == 'U')) && (param_1[3] == 'C')) {
    if (((param_1[4] == 'F') && (param_1[5] == 'O')) &&
       ((param_1[6] == 'R' && (param_1[7] == '\0')))) {
      piVar3 = *(int **)(iVar2 + DAT_0001637c);
      goto LAB_00016200;
    }
    if (((param_1[4] == 'C') && (param_1[5] == '+')) &&
       ((param_1[6] == '+' && ((byte)param_1[7] < 2)))) {
      if (param_1[7] == 1) {
        piVar3 = *(int **)(*(int *)(param_1 + -0x20) + -0x78);
      }
      else {
        piVar3 = *(int **)(param_1 + -0x20);
      }
      goto LAB_00016200;
    }
  }
  piVar3 = *(int **)(iVar2 + DAT_00016370);
LAB_00016200:
  local_1c[0] = (undefined4 *)*param_4;
  iVar1 = (**(code **)(*piVar3 + 8))(piVar3);
  if (iVar1 != 0) {
    local_1c[0] = (undefined4 *)*local_1c[0];
  }
  iVar1 = (**(code **)(*param_2 + 0x10))(param_2,piVar3,local_1c,1);
  if (iVar1 != 0) {
    *param_4 = local_1c[0];
    iVar1 = FUN_00017a84(*(undefined4 *)(*param_2 + -4),
                         *(undefined4 *)(**(int **)(iVar2 + DAT_00016374) + -4));
    if (iVar1 != 0) {
      if ((int *)param_2[3] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        __cxa_bad_typeid();
      }
      iVar2 = FUN_00017a84(*(undefined4 *)(*(int *)param_2[3] + -4),
                           *(undefined4 *)(iVar2 + DAT_00016378));
      if (iVar2 == 0) {
        iVar2 = FUN_00017a84(param_2[3],piVar3[3]);
        if (iVar2 != 0) {
          return 1;
        }
        return 2;
      }
    }
    iVar1 = 1;
  }
  return iVar1;
}


