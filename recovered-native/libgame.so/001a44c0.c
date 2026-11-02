/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a44c0  Symbol: FUN_001a44c0 */

void FUN_001a44c0(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  code **ppcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar2 = DAT_001a4584;
  *(undefined4 *)(&stack0xfffffff0 + DAT_001a4584) = param_3;
  iVar6 = DAT_001a458c + 0x1a44d4;
  *(undefined4 *)(&stack0x000001e8 + DAT_001a4584) = **(undefined4 **)(iVar6 + DAT_001a4588);
  iVar3 = FUN_001a3d90(param_1);
  if ((iVar3 == 0) && (iVar3 = param_1, param_1 == 0)) {
    FUN_001a39bc(DAT_001a459c,iVar6 + DAT_001a4598,0);
  }
  else {
    iVar5 = 0;
    iVar8 = **(int **)(iVar6 + DAT_001a4590);
    do {
      cVar1 = *(char *)(iVar8 + (*(byte *)(iVar3 + iVar5) + 1) * 2);
      (&stack0xfffffff4)[iVar5 + iVar2] = cVar1;
      if (cVar1 == '\0') break;
      iVar5 = iVar5 + 1;
    } while (iVar5 != DAT_001a4594);
    ppcVar4 = *(code ***)(iVar6 + DAT_001a45a0);
    (&stack0xfffffff4)[iVar5 + iVar2] = 0;
    iVar3 = (**ppcVar4)();
    if (iVar3 != 0) {
      piVar7 = (int *)(***(code ***)(iVar6 + DAT_001a45a8))(0xc);
      if (piVar7 == (int *)0x0) {
        (***(code ***)(iVar6 + DAT_001a45ac))(iVar3);
        FUN_001a40d0(iVar6 + DAT_001a45a4);
      }
      else {
        piVar7[1] = param_2;
        iVar5 = *(int *)(&stack0xfffffff0 + iVar2);
        *piVar7 = iVar3;
        piVar7[2] = iVar5;
        FUN_001a4458();
      }
      goto LAB_001a456a;
    }
    FUN_001a40d0(iVar6 + DAT_001a45a4);
  }
  piVar7 = (int *)0x0;
LAB_001a456a:
  if (*(int *)(&stack0x000001e8 + iVar2) == **(int **)(iVar6 + DAT_001a4588)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(piVar7);
}


