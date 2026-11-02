/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d468  Symbol: FUN_0018d468 */

undefined4 FUN_0018d468(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *local_2c;
  int local_24;
  
  iVar1 = DAT_0018d554;
  iVar4 = DAT_0018d550 + 0x18d474;
  if (((param_3 != 0) && (param_1 != 0)) && (param_4 != (int *)0x0)) {
    *param_4 = 0;
    iVar1 = FUN_0019c30c(param_3,iVar4 + iVar1);
    if (iVar1 == 0) {
      local_24 = 0;
      iVar1 = param_2;
      iVar4 = 0;
      do {
        iVar3 = *(int *)(iVar1 + 4);
        iVar2 = iVar4;
        iVar6 = local_24;
        if (iVar3 == 1) {
          for (piVar5 = *(int **)(iVar1 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
            if (piVar5[3] != 0) {
              if (iVar4 != 0) {
                local_2c = *(int **)(iVar4 + 0x30);
                do {
                  if ((local_2c[3] == piVar5[3]) ||
                     (((local_2c[3] != 0 && (piVar5[3] != 0)) &&
                      (iVar2 = FUN_0019c30c(), iVar2 != 0)))) goto LAB_0018d51c;
                  local_2c = (int *)*local_2c;
                } while (local_2c != (int *)0x0);
              }
              if ((param_3 == piVar5[2]) || (iVar2 = FUN_0019c30c(param_3), iVar2 != 0)) {
                if (local_24 == 0) {
LAB_0018d516:
                  *param_4 = (int)piVar5;
                  return 1;
                }
                iVar2 = FUN_00189818(param_1,param_2,iVar4,piVar5[3]);
                if (iVar2 < 0) {
                  return 0xffffffff;
                }
                if (iVar2 != 0) goto LAB_0018d516;
              }
            }
LAB_0018d51c:
            iVar2 = iVar1;
            iVar6 = iVar4;
          }
        }
        else if ((iVar3 == 0x11) || (iVar3 == 6)) {
          return 0;
        }
        iVar1 = *(int *)(iVar1 + 0x14);
        if (iVar1 == 0) {
          return 0;
        }
        iVar4 = iVar2;
        local_24 = iVar6;
        if (*(int *)(iVar1 + 0x20) == iVar1) {
          return 0;
        }
      } while( true );
    }
    iVar1 = FUN_00189a50(param_1);
    *param_4 = iVar1;
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0xffffffff;
}


