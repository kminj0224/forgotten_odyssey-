/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019b378  Symbol: FUN_0019b378 */

void FUN_0019b378(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_90;
  char acStack_80 [99];
  undefined local_1d;
  int local_1c;
  
  iVar9 = DAT_0019b578 + 0x19b384;
  local_1c = **(int **)(iVar9 + DAT_0019b57c);
  if (param_1 != 0) {
    if (param_2 != 0) {
      snprintf(acStack_80,100,(char *)(iVar9 + DAT_0019b580),param_2);
      local_1d = 0;
    }
    iVar6 = iVar9 + DAT_0019b584;
    iVar2 = iVar9 + DAT_0019b588;
    for (iVar8 = *(int *)(param_1 + 0xc); iVar8 != 0; iVar8 = *(int *)(iVar8 + 0x18)) {
      if ((*(int *)(iVar8 + 4) == 1) && (*(int *)(iVar8 + 8) != 0)) {
        iVar3 = FUN_0019c398(*(int *)(iVar8 + 8),iVar6);
        if (iVar3 == 0) {
          iVar8 = *(int *)(iVar8 + 0xc);
          iVar2 = iVar9 + DAT_0019b588;
          iVar6 = iVar9 + DAT_0019b58c;
          goto LAB_0019b428;
        }
        iVar3 = FUN_0019c398(*(undefined4 *)(iVar8 + 8),iVar2);
        if (iVar3 == 0) goto LAB_0019b42e;
        iVar4 = FUN_0019c398(*(undefined4 *)(iVar8 + 8),iVar9 + DAT_0019b58c);
        iVar3 = iVar8;
        if (iVar4 == 0) goto LAB_0019b46e;
      }
    }
  }
LAB_0019b55c:
  uVar5 = 0xffffffff;
  goto LAB_0019b564;
LAB_0019b428:
  if (iVar8 == 0) goto LAB_0019b55c;
  if ((*(int *)(iVar8 + 4) == 1) && (*(int *)(iVar8 + 8) != 0)) {
    iVar3 = FUN_0019c398(*(int *)(iVar8 + 8),iVar2);
    if (iVar3 == 0) goto LAB_0019b42e;
    iVar4 = FUN_0019c398(*(undefined4 *)(iVar8 + 8),iVar6);
    iVar3 = iVar8;
    if (iVar4 == 0) goto LAB_0019b46e;
  }
  iVar8 = *(int *)(iVar8 + 0x18);
  goto LAB_0019b428;
LAB_0019b42e:
  iVar2 = DAT_0019b590;
  iVar3 = *(int *)(iVar8 + 0xc);
  if (iVar3 == 0) {
    if (param_2 != 0) {
      uVar5 = FUN_0018c898(param_1,0,iVar9 + DAT_0019b58c);
      FUN_0018c194(iVar8,uVar5);
      FUN_0018af24(uVar5,iVar9 + DAT_0019b598,iVar9 + DAT_0019b594);
      FUN_0018af24(uVar5,iVar9 + iVar2,acStack_80);
    }
  }
  else {
LAB_0019b46e:
    if (param_2 != 0) {
      uVar5 = FUN_0018c898(param_1,0,iVar9 + DAT_0019b58c,0);
      FUN_0018d080(iVar3,uVar5);
      FUN_0018af24(uVar5,iVar9 + DAT_0019b598,iVar9 + DAT_0019b594);
      FUN_0018af24(uVar5,iVar9 + DAT_0019b590,acStack_80);
    }
    iVar2 = DAT_0019b58c;
    iVar6 = iVar9 + DAT_0019b598;
    while (iVar3 != 0) {
      if (((*(int *)(iVar3 + 4) == 1) && (*(int *)(iVar3 + 8) != 0)) &&
         (iVar8 = FUN_0019c398(*(int *)(iVar3 + 8),iVar9 + iVar2), iVar8 == 0)) {
        iVar4 = *(int *)(iVar3 + 0x2c);
        iVar8 = iVar9 + DAT_0019b590;
        local_90 = 0;
        bVar1 = false;
        for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x18)) {
          iVar7 = *(int *)(iVar4 + 0xc);
          if (((iVar7 != 0) && (*(int *)(iVar7 + 4) == 3)) && (*(int *)(iVar7 + 0x18) == 0)) {
            iVar10 = *(int *)(iVar7 + 0x28);
            iVar7 = FUN_0019c398(*(undefined4 *)(iVar4 + 8),iVar6);
            if ((iVar7 == 0) && (iVar7 = FUN_0019c398(iVar10,iVar9 + DAT_0019b594), iVar7 == 0)) {
              bVar1 = true;
            }
            else if ((iVar10 != 0) &&
                    (iVar7 = FUN_0019c398(*(undefined4 *)(iVar4 + 8),iVar8), iVar7 == 0)) {
              local_90 = iVar10;
            }
            if ((local_90 != 0) && (bVar1)) break;
          }
        }
        if ((local_90 == 0) || (!bVar1)) goto LAB_0019b544;
        iVar8 = *(int *)(iVar3 + 0x18);
        FUN_0018b26c(iVar3);
        FUN_0018bf48(iVar3);
        iVar3 = iVar8;
      }
      else {
LAB_0019b544:
        iVar3 = *(int *)(iVar3 + 0x18);
      }
    }
  }
  uVar5 = 0;
LAB_0019b564:
  if (local_1c == **(int **)(iVar9 + DAT_0019b57c)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


