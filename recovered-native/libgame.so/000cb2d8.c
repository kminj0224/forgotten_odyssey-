/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb2d8  Symbol: vTransDialogMsg */

/* vTransDialogMsg(int*) */

void vTransDialogMsg(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int local_28;
  int local_20;
  
  piVar4 = *(int **)(DAT_000cb390 + 0xcb2e4);
  iVar5 = *piVar4;
  if (iVar5 != 0) {
    local_20 = *param_1 + 1;
    if (*(char *)(iVar5 + *param_1) == '\f') {
      vInitDialogMsg();
      iVar1 = DAT_000cb394;
      iVar2 = 0;
      iVar8 = 0;
      iVar6 = 0;
      local_28 = 0;
      while (uVar7 = (uint)(byte)((char *)(iVar5 + local_20))[iVar6], uVar7 != 0) {
        if (DAT_000cb39c < uVar7 + DAT_000cb398) {
          iVar6 = iVar6 + 1;
          iVar2 = iVar2 + 1;
          if (uVar7 == 0xd) {
            iVar3 = *(int *)((int)piVar4 + iVar1);
            piVar4[iVar3 + 0x558] = local_28;
            *(int *)((int)piVar4 + iVar1) = iVar3 + 1;
          }
        }
        else {
          iVar6 = iVar6 + 2;
          iVar2 = iVar2 + 2;
        }
        iVar8 = iVar8 + 1;
        local_28 = local_28 + 10;
      }
      vSetDialogMsg((char *)(iVar5 + local_20),iVar2);
      iVar1 = DAT_000cb3a8;
      iVar5 = DAT_000cb3a4;
      local_20 = local_20 + iVar6 + 1;
      *(undefined4 *)((int)piVar4 + DAT_000cb3a0) = 0;
      iVar6 = (iVar8 + 4) * 10;
      *(int *)((int)piVar4 + iVar1) = iVar8 + 4;
      iVar2 = DAT_000cb3ac;
      iVar5 = *(int *)((int)piVar4 + iVar5);
      *(int *)((int)piVar4 + DAT_000cb3ac) = iVar6;
      if (iVar5 == 1) {
        *(int *)((int)piVar4 + iVar1) = iVar8 + 6;
        *(int *)((int)piVar4 + iVar2) = iVar6 + 10;
      }
      if (*(int *)((int)piVar4 + iVar1) != 0) {
        *(undefined4 *)((int)piVar4 + DAT_000cb3b0) = 0;
      }
    }
    *param_1 = local_20;
  }
  return;
}


