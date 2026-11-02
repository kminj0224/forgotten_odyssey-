/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001eb3a8  Symbol: FUN_001eb3a8 */

int * FUN_001eb3a8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  char local_38 [4];
  int *local_34;
  undefined auStack_30 [4];
  char local_2c;
  uint local_28;
  undefined4 local_24;
  
  FUN_001ea1f4(local_38,param_1);
  if (local_38[0] != '\0') {
    iVar5 = (int)param_1 + *(int *)(*param_1 + -0xc);
    piVar6 = *(int **)(iVar5 + 0x84);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_001c4358();
    }
    uVar7 = *(uint *)(iVar5 + 0x7c);
    if (*(char *)(iVar5 + 0x78) == '\0') {
      piVar3 = *(int **)(iVar5 + 0x80);
      if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_001c4358();
      }
      uVar1 = (**(code **)(*piVar3 + 0x28))(piVar3,0x20);
      *(undefined4 *)(iVar5 + 0x74) = uVar1;
      *(undefined *)(iVar5 + 0x78) = 1;
    }
    else {
      uVar1 = *(undefined4 *)(iVar5 + 0x74);
    }
    cVar4 = '\x01' - (char)uVar7;
    if (1 < uVar7) {
      cVar4 = '\0';
    }
    local_24 = CONCAT31(local_24._1_3_,cVar4);
    local_28 = uVar7;
    (**(code **)(*piVar6 + 0x14))(auStack_30,piVar6,uVar7,local_24,iVar5,uVar1,param_3,param_4);
    if (local_2c != '\0') {
      iVar5 = (int)param_1 + *(int *)(*param_1 + -0xc);
      FUN_001d1404(iVar5,*(uint *)(iVar5 + 0x14) | 1);
    }
  }
  piVar6 = local_34;
  iVar5 = *(int *)(*local_34 + -0xc);
  if (((((*(uint *)((int)local_34 + iVar5 + 0xc) & 0x2000) != 0) &&
       (iVar2 = std::uncaught_exception(), iVar2 == 0)) &&
      (piVar6 = *(int **)((int)piVar6 + iVar5 + 0x7c), piVar6 != (int *)0x0)) &&
     (iVar5 = (**(code **)(*piVar6 + 0x18))(), iVar5 == -1)) {
    iVar5 = (int)local_34 + *(int *)(*local_34 + -0xc);
    FUN_001d1404(iVar5,*(uint *)(iVar5 + 0x14) | 1);
  }
  return param_1;
}


