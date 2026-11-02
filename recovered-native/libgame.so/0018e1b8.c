/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018e1b8  Symbol: FUN_0018e1b8 */

undefined4 FUN_0018e1b8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int local_3c;
  int *local_1c;
  
  iVar5 = DAT_0018e4b4 + 0x18e1c4;
  local_1c = (int *)0x0;
  if (param_1 != 0) {
    local_1c = *(int **)(param_1 + 8);
  }
  local_3c = -1;
  iVar2 = param_3;
  do {
    iVar6 = iVar2;
    if (iVar6 == 0) {
LAB_0018e5e0:
      uVar7 = 0;
LAB_0018e5ec:
      if (local_1c != (int *)0x0) {
        if ((param_1 == 0) || (piVar3 = *(int **)(param_1 + 8), piVar3 != local_1c)) {
          FUN_001897a4();
        }
        else if (*piVar3 != 0) {
          if (piVar3[2] != 0) {
            *(int *)piVar3[1] = piVar3[2];
          }
          local_1c[2] = *local_1c;
          *local_1c = 0;
        }
      }
      return uVar7;
    }
    if (*(int *)(iVar6 + 0x20) == param_2) {
LAB_0018e252:
      *(undefined4 *)(iVar6 + 0x20) = param_4;
      uVar1 = *(int *)(iVar6 + 4) - 1;
      if (uVar1 < 0x14) {
        iVar5 = iVar5 + DAT_0018e4b8;
                    /* WARNING: Could not emulate address calculation at 0x0018e266 */
                    /* WARNING: Treating indirect jump as call */
        uVar7 = (*(code *)(*(int *)(iVar5 + uVar1 * 4) + iVar5))();
        return uVar7;
      }
      uVar7 = 0xffffffff;
      goto LAB_0018e5ec;
    }
    if (*(int *)(iVar6 + 0x18) != 0) {
      do {
        iVar6 = *(int *)(iVar6 + 0x18);
        if ((*(int *)(iVar6 + 4) == 0x14) || (*(int *)(iVar6 + 0x20) == *(int *)(param_3 + 0x20)))
        break;
      } while (*(int *)(iVar6 + 0x18) != 0);
      if (*(int *)(iVar6 + 0x20) == *(int *)(param_3 + 0x20)) goto LAB_0018e252;
    }
    while( true ) {
      if (iVar6 == param_3) goto LAB_0018e5e0;
      iVar2 = *(int *)(iVar6 + 4);
      if (((iVar2 == 0x13) || (iVar2 == 1)) || (iVar2 == 0x14)) {
        if ((local_1c != (int *)0x0) && (*local_1c != 0)) {
          while ((piVar3 = (int *)local_1c[1], piVar3 != (int *)0x0 && (local_3c <= piVar3[5]))) {
            local_1c[1] = piVar3[1];
            if ((undefined4 *)local_1c[1] == (undefined4 *)0x0) {
              *local_1c = 0;
            }
            else {
              *(undefined4 *)local_1c[1] = 0;
            }
            *piVar3 = local_1c[2];
            local_1c[2] = (int)piVar3;
          }
          for (puVar4 = (undefined4 *)*local_1c; puVar4 != (undefined4 *)0x0;
              puVar4 = (undefined4 *)*puVar4) {
            if (local_3c <= (int)puVar4[4]) {
              puVar4[4] = 0xffffffff;
            }
          }
        }
        local_3c = local_3c + -1;
      }
      iVar2 = *(int *)(iVar6 + 0x18);
      if ((*(int *)(iVar6 + 0x18) != 0) ||
         ((*(int *)(iVar6 + 4) == 2 && (iVar2 = *(int *)(*(int *)(iVar6 + 0x14) + 0xc), iVar2 != 0))
         )) break;
      iVar6 = *(int *)(iVar6 + 0x14);
    }
  } while( true );
}


