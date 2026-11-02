/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001d2644  Symbol: FUN_001d2644 */

undefined * FUN_001d2644(undefined *param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  int iVar7;
  
  iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  uVar4 = *(uint *)(iVar1 + 0x14);
  uVar2 = 0;
  *param_1 = 0;
  if (uVar4 != 0) goto LAB_001d26c8;
  if (*(int *)(iVar1 + 0x70) != 0) {
    FUN_001e7d14(*(int *)(iVar1 + 0x70));
    iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
  }
  if (param_3 == 0) {
    uVar2 = 0;
    if ((*(uint *)(iVar1 + 0xc) & 0x1000) != 0) {
      piVar6 = *(int **)(iVar1 + 0x78);
      if ((byte *)piVar6[2] < (byte *)piVar6[3]) {
        uVar2 = (uint)*(byte *)piVar6[2];
      }
      else {
        uVar2 = (**(code **)(*piVar6 + 0x24))(piVar6);
        iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
      }
      iVar7 = *(int *)(iVar1 + 0x7c);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001c4358();
      }
      if (uVar2 != 0xffffffff) {
        if ((*(byte *)(*(int *)(iVar7 + 0x18) + (uVar2 & 0xff)) & 8) != 0) {
          do {
            pbVar3 = (byte *)piVar6[3];
            if (pbVar3 <= (byte *)piVar6[2]) {
              iVar1 = (**(code **)(*piVar6 + 0x28))(piVar6);
              if (iVar1 != -1) {
                pbVar5 = (byte *)piVar6[2];
                pbVar3 = (byte *)piVar6[3];
                goto LAB_001d2740;
              }
LAB_001d2788:
              iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
              goto LAB_001d2794;
            }
            pbVar5 = (byte *)piVar6[2] + 1;
            piVar6[2] = (int)pbVar5;
LAB_001d2740:
            if (pbVar5 < pbVar3) {
              uVar2 = (uint)*pbVar5;
            }
            else {
              uVar2 = (**(code **)(*piVar6 + 0x24))(piVar6);
              if (uVar2 == 0xffffffff) goto LAB_001d2788;
            }
          } while ((*(byte *)(*(int *)(iVar7 + 0x18) + (uVar2 & 0xff)) & 8) != 0);
          iVar1 = (int)param_2 + *(int *)(*param_2 + -0xc);
        }
        goto LAB_001d269c;
      }
LAB_001d2794:
      uVar2 = 2;
    }
  }
  else {
LAB_001d269c:
    uVar2 = 0;
  }
  uVar4 = *(uint *)(iVar1 + 0x14);
  if ((uVar4 == 0) && (uVar2 == 0)) {
    *param_1 = 1;
    return param_1;
  }
LAB_001d26c8:
  FUN_001d0d2c(iVar1,uVar2 | 4 | uVar4);
  return param_1;
}


