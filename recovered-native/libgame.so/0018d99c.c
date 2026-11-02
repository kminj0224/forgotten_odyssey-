/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d99c  Symbol: FUN_0018d99c */

/* WARNING: Removing unreachable block (ram,0x0018daa0) */
/* WARNING: Removing unreachable block (ram,0x0018da98) */
/* WARNING: Removing unreachable block (ram,0x0018da5e) */

undefined4 FUN_0018d99c(int param_1,int param_2,int param_3,void **param_4,int param_5)

{
  int iVar1;
  void *__s;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int local_44;
  void *local_3c;
  int *local_1c;
  
  iVar6 = DAT_0018dc90 + 0x18d9ac;
  local_1c = (int *)0x0;
  if (param_4 == (void **)0x0) {
    return 0xffffffff;
  }
  if (param_3 == 0) {
    return 0xffffffff;
  }
  if (param_5 == 0) {
    return 0xffffffff;
  }
  if (*(int *)(param_3 + 4) != 1) {
    return 1;
  }
  iVar1 = *(int *)(param_3 + 0x20);
  if (param_2 == 0) {
LAB_0018d9ee:
    local_44 = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
  }
  else {
    if ((iVar1 != 0) && (iVar1 != param_2)) {
      return 0xffffffff;
    }
    local_44 = param_2;
    if (param_2 == 0) goto LAB_0018d9ee;
  }
  iVar1 = *(int *)(param_5 + 0x50);
  if (param_1 != 0) {
    local_1c = *(int **)(param_1 + 8);
  }
  *param_4 = (void *)0x0;
  local_3c = (void *)0x0;
  if ((*(int *)(param_3 + 0x20) != local_44) || (0xb < *(uint *)(param_3 + 4)))
  goto switchD_0018db16_caseD_9;
  uVar7 = 1 << (*(uint *)(param_3 + 4) & 0xff);
  if ((uVar7 & DAT_0018dc94) == 0) {
    if (-1 < (int)(uVar7 << 0x1d)) goto switchD_0018db16_caseD_9;
    __s = (void *)(***(code ***)(iVar6 + DAT_0018dc98))(0x30);
    iVar4 = DAT_0018dca0;
    if (__s != (void *)0x0) {
      memset(__s,0,0x30);
      goto LAB_0018daac;
    }
  }
  else {
    __s = (void *)(***(code ***)(iVar6 + DAT_0018dc98))(0x3c);
    iVar4 = DAT_0018dc9c;
    if (__s != (void *)0x0) {
      memset(__s,0,0x3c);
LAB_0018daac:
      iVar4 = DAT_0018dca4;
      *(undefined4 *)((int)__s + 4) = *(undefined4 *)(param_3 + 4);
      *(int *)((int)__s + 0x20) = param_5;
      iVar3 = *(int *)(param_3 + 8);
      iVar4 = iVar6 + iVar4;
      if (((iVar3 == iVar4 + 8) || (iVar3 == iVar4 + 0x10)) || (iVar3 == iVar4)) {
LAB_0018dae8:
        *(int *)((int)__s + 8) = iVar3;
      }
      else if (iVar3 != 0) {
        if (iVar1 == 0) {
          uVar2 = FUN_0019c904(iVar3);
        }
        else {
          iVar4 = FUN_0019ccb4(iVar1);
          iVar3 = *(int *)(param_3 + 8);
          if (iVar4 != 0) goto LAB_0018dae8;
          uVar2 = FUN_0019d178(iVar1,iVar3,0xffffffff);
        }
        *(undefined4 *)((int)__s + 8) = uVar2;
      }
      uVar7 = *(int *)(param_3 + 4) - 1;
      local_3c = __s;
      if (uVar7 < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x0018db12 */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (*(code *)(*(int *)(iVar6 + DAT_0018dca8 + uVar7 * 4) + iVar6 + DAT_0018dca8))();
        return uVar2;
      }
      goto switchD_0018db16_caseD_9;
    }
  }
  FUN_001898e8(iVar6 + iVar4);
switchD_0018db16_caseD_9:
  if (local_1c != (int *)0x0) {
    if ((param_1 == 0) || (piVar5 = *(int **)(param_1 + 8), piVar5 != local_1c)) {
      FUN_001897a4();
    }
    else if (*piVar5 != 0) {
      if (piVar5[2] != 0) {
        *(int *)piVar5[1] = piVar5[2];
      }
      local_1c[2] = *local_1c;
      *local_1c = 0;
    }
  }
  *param_4 = local_3c;
  return 0xffffffff;
}


