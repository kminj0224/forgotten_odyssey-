/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001943cc  Symbol: FUN_001943cc */

void FUN_001943cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  char *__s1;
  char *__s1_00;
  int iVar2;
  bool bVar3;
  undefined *local_94;
  undefined *local_90;
  int local_8c;
  undefined auStack_84 [52];
  undefined auStack_50 [52];
  int local_1c;
  
  iVar2 = DAT_00194530 + 0x1943d8;
  local_1c = **(int **)(iVar2 + DAT_00194534);
  if ((param_3 != 0) && (__s1 = *(char **)(param_3 + 8), __s1 != (char *)0x0)) {
    if ((*(int *)(param_3 + 0x24) != 0) &&
       (((__s1_00 = *(char **)(*(int *)(param_3 + 0x24) + 0xc), __s1_00 != (char *)0x0 &&
         (iVar1 = strcmp(__s1,(char *)(iVar2 + DAT_00194538)), iVar1 == 0)) &&
        (iVar1 = strcmp(__s1_00,(char *)(iVar2 + DAT_0019453c)), iVar1 == 0)))) goto LAB_0019451a;
    if ((param_1 != 0) && ((*(int *)(param_1 + 0x2c) != 0 || (*(int *)(param_1 + 0x30) != 0)))) {
      if (*(int *)(param_1 + 4) == 0xd) {
        iVar1 = FUN_0019c30c(iVar2 + DAT_00194538,__s1);
        if (iVar1 == 0) {
          iVar1 = FUN_0019c30c(iVar2 + DAT_00194540,*(undefined4 *)(param_3 + 8));
          if (iVar1 == 0) goto LAB_00194516;
          if (param_2 != 0) {
            iVar1 = FUN_0019c30c(*(undefined4 *)(param_2 + 8),iVar2 + DAT_00194544);
            bVar3 = iVar1 != 0;
            goto LAB_0019451c;
          }
        }
LAB_0019451a:
        bVar3 = true;
        goto LAB_0019451c;
      }
      if (param_2 != 0) {
        if ((*(int *)(param_2 + 0x24) == 0) ||
           (iVar1 = *(int *)(*(int *)(param_2 + 0x24) + 0xc), iVar1 == 0)) {
          local_90 = *(undefined **)(param_2 + 8);
        }
        else {
          local_90 = (undefined *)FUN_0018d3d8(*(undefined4 *)(param_2 + 8),iVar1,auStack_50,0x32);
        }
        if ((*(int *)(param_3 + 0x24) == 0) ||
           (iVar1 = *(int *)(*(int *)(param_3 + 0x24) + 0xc), iVar1 == 0)) {
          local_94 = *(undefined **)(param_3 + 8);
        }
        else {
          local_94 = (undefined *)FUN_0018d3d8(*(undefined4 *)(param_3 + 8),iVar1,auStack_84,0x32);
        }
        if ((local_94 == (undefined *)0x0) || (local_90 == (undefined *)0x0)) {
          local_8c = 0;
        }
        else {
          local_8c = FUN_00193f40(*(undefined4 *)(param_1 + 0x2c),local_90,local_94);
          if ((local_8c == 0) && (*(int *)(param_1 + 0x30) != 0)) {
            local_8c = FUN_00193f40(*(int *)(param_1 + 0x30),local_90,local_94);
          }
        }
        if ((local_94 != auStack_84) && (local_94 != *(undefined **)(param_3 + 8))) {
          (***(code ***)(iVar2 + DAT_00194548))(local_94);
        }
        if ((local_90 != auStack_50) && (local_90 != *(undefined **)(param_2 + 8))) {
          (***(code ***)(iVar2 + DAT_00194548))(local_90);
        }
        if (local_8c != 0) {
          bVar3 = *(int *)(local_8c + 0x28) == 2;
          goto LAB_0019451c;
        }
      }
    }
  }
LAB_00194516:
  bVar3 = false;
LAB_0019451c:
  if (local_1c == **(int **)(iVar2 + DAT_00194534)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


