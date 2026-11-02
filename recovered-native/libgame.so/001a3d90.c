/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001a3d90  Symbol: FUN_001a3d90 */

void FUN_001a3d90(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  char local_80 [100];
  int local_1c;
  
  iVar5 = DAT_001a3e10 + 0x1a3d9c;
  local_1c = **(int **)(iVar5 + DAT_001a3e14);
  if ((param_1 != 0) &&
     (puVar6 = *(undefined4 **)(iVar5 + DAT_001a3e18), puVar6 != (undefined4 *)0x0)) {
    iVar4 = 0;
    iVar7 = **(int **)(iVar5 + DAT_001a3e1c);
    do {
      cVar1 = *(char *)(iVar7 + (*(byte *)(param_1 + iVar4) + 1) * 2);
      local_80[iVar4] = cVar1;
      if (cVar1 == '\0') break;
      iVar4 = iVar4 + 1;
    } while (iVar4 != 99);
    local_80[iVar4] = '\0';
    iVar4 = iVar5 + DAT_001a3e18;
    for (iVar7 = 0; iVar7 < *(int *)(iVar4 + 4); iVar7 = iVar7 + 1) {
      iVar2 = strcmp((char *)puVar6[1],local_80);
      if (iVar2 == 0) {
        uVar3 = *puVar6;
        goto LAB_001a3dfa;
      }
      puVar6 = puVar6 + 2;
    }
  }
  uVar3 = 0;
LAB_001a3dfa:
  if (local_1c != **(int **)(iVar5 + DAT_001a3e14)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


