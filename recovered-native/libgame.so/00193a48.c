/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00193a48  Symbol: FUN_00193a48 */

void FUN_00193a48(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char acStack_28 [12];
  int local_1c;
  
  iVar4 = DAT_00193c8c + 0x193a54;
  local_1c = **(int **)(iVar4 + DAT_00193c90);
  if ((param_1 != 0) && (piVar1 = (int *)FUN_00191b94(), piVar1 != (int *)0x0)) {
    piVar1[9] = 1;
    iVar2 = FUN_001933bc(piVar1,param_1);
    if (iVar2 == 0) {
      uVar5 = 0;
      if (*piVar1 == 0) {
LAB_00193aaa:
        if (piVar1[2] != 0) {
          iVar2 = FUN_001926bc(piVar1[2],iVar4 + DAT_00193ca0);
          if (iVar2 == 0) goto LAB_00193c2a;
          uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193ca4);
          uVar5 = FUN_0019c9a0(uVar5,iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        }
        if (piVar1[4] != 0) {
          iVar3 = FUN_001926bc(piVar1[4],iVar4 + DAT_00193ca8);
          iVar2 = DAT_00193cac;
          if (iVar3 == 0) goto LAB_00193c2a;
          uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193ca4);
          uVar5 = FUN_0019c9a0(uVar5,iVar3);
          uVar5 = FUN_0019c9a0(uVar5,iVar4 + iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar3);
        }
        if (piVar1[3] != 0) {
          iVar2 = FUN_001926bc(piVar1[3],iVar4 + DAT_00193ca0);
          if (iVar2 == 0) goto LAB_00193c2a;
          if (piVar1[4] == 0) {
            uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193ca4);
          }
          uVar5 = FUN_0019c9a0(uVar5,iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        }
        if (piVar1[5] != 0) {
          snprintf(acStack_28,10,(char *)(iVar4 + DAT_00193cb0));
          uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193c98);
          uVar5 = FUN_0019c9a0(uVar5,acStack_28);
        }
        if (piVar1[6] != 0) {
          iVar2 = FUN_001926bc(piVar1[6],iVar4 + DAT_00193cb4);
          if (iVar2 == 0) goto LAB_00193c2a;
          uVar5 = FUN_0019c9a0(uVar5,iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        }
        if (piVar1[10] == 0) {
          if (piVar1[7] != 0) {
            iVar2 = FUN_001926bc(piVar1[7],iVar4 + DAT_00193cbc);
            if (iVar2 == 0) goto LAB_00193c2a;
            uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193cb8);
            uVar5 = FUN_0019c9a0(uVar5,iVar2);
            (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
          }
        }
        else {
          uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193cb8);
          uVar5 = FUN_0019c9a0(uVar5,piVar1[10]);
        }
        if (piVar1[1] != 0) {
          iVar2 = FUN_001926bc(piVar1[1],iVar4 + DAT_00193cc0);
          if (iVar2 == 0) goto LAB_00193c2a;
          uVar5 = FUN_0019c9a0(uVar5,iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        }
        if (piVar1[8] != 0) {
          iVar3 = iVar4 + DAT_00193cc4;
          iVar2 = FUN_001926bc(piVar1[8],iVar3);
          if (iVar2 == 0) goto LAB_00193c2a;
          uVar5 = FUN_0019c9a0(uVar5,iVar3);
          uVar5 = FUN_0019c9a0(uVar5,iVar2);
          (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        }
        FUN_001919b8(piVar1);
        goto LAB_00193c68;
      }
      iVar2 = FUN_001926bc(*piVar1,iVar4 + DAT_00193c94);
      if (iVar2 != 0) {
        uVar5 = FUN_0019c9a0(0,iVar2);
        uVar5 = FUN_0019c9a0(uVar5,iVar4 + DAT_00193c98);
        (***(code ***)(iVar4 + DAT_00193c9c))(iVar2);
        goto LAB_00193aaa;
      }
LAB_00193c2a:
      (***(code ***)(iVar4 + DAT_00193ccc))
                (**(undefined4 **)(iVar4 + DAT_00193cc8),iVar4 + DAT_00193cd0);
    }
    FUN_001919b8(piVar1);
  }
  uVar5 = 0;
LAB_00193c68:
  if (local_1c == **(int **)(iVar4 + DAT_00193c90)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


