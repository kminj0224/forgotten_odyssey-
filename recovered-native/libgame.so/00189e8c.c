/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189e8c  Symbol: FUN_00189e8c */

undefined4 * FUN_00189e8c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = DAT_00189f9c + 0x189e98;
  if (param_2 != 0) {
    iVar7 = param_2;
    if (param_3 != 0) {
      iVar4 = iVar6 + DAT_00189fa0;
      iVar2 = FUN_0019c30c(param_3,iVar4);
      if (iVar2 != 0) {
        if (param_1 == 0) {
          if (*(int *)(param_2 + 4) == 1) {
            puVar5 = (undefined4 *)(***(code ***)(iVar6 + DAT_00189fa4))(0x18);
            if (puVar5 != (undefined4 *)0x0) {
              memset(puVar5,0,0x18);
              iVar7 = DAT_00189fac;
              puVar5[1] = 0x12;
              uVar3 = FUN_0019c904(iVar6 + iVar7);
              puVar5[2] = uVar3;
              uVar3 = FUN_0019c904(iVar4);
              puVar5[3] = uVar3;
              *puVar5 = *(undefined4 *)(param_2 + 0x30);
              *(undefined4 **)(param_2 + 0x30) = puVar5;
              return puVar5;
            }
            FUN_001898e8(iVar6 + DAT_00189fa8);
            return (undefined4 *)0x0;
          }
          param_1 = *(int *)(param_2 + 0x20);
          if (param_1 == 0) {
            return (undefined4 *)0x0;
          }
        }
        if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
          puVar5 = (undefined4 *)FUN_00189a50(param_1);
          return puVar5;
        }
        return *(undefined4 **)(param_1 + 0x34);
      }
    }
    do {
      iVar6 = *(int *)(iVar7 + 4);
      if (iVar6 - 5U < 2) {
        return (undefined4 *)0x0;
      }
      if (iVar6 == 0x11) {
        return (undefined4 *)0x0;
      }
      if (iVar6 == 1) {
        for (puVar5 = *(undefined4 **)(iVar7 + 0x30); puVar5 != (undefined4 *)0x0;
            puVar5 = (undefined4 *)*puVar5) {
          iVar6 = puVar5[3];
          if (param_3 == 0) {
            if (iVar6 == 0) {
              iVar6 = puVar5[2];
joined_r0x00189f52:
              if (iVar6 != 0) {
                return puVar5;
              }
            }
          }
          else if ((iVar6 != 0) && (puVar5[2] != 0)) {
            iVar6 = FUN_0019c30c(iVar6,param_3);
            goto joined_r0x00189f52;
          }
        }
        if ((param_2 != iVar7) &&
           (puVar5 = *(undefined4 **)(iVar7 + 0x24), puVar5 != (undefined4 *)0x0)) {
          iVar6 = puVar5[3];
          if (param_3 == 0) {
            if (iVar6 == 0) {
              iVar6 = puVar5[2];
joined_r0x00189f8a:
              if (iVar6 != 0) {
                return puVar5;
              }
            }
          }
          else if ((iVar6 != 0) && (puVar5[2] != 0)) {
            iVar6 = FUN_0019c30c(iVar6,param_3);
            goto joined_r0x00189f8a;
          }
        }
      }
      piVar1 = (int *)(iVar7 + 0x14);
      iVar7 = *piVar1;
    } while (*piVar1 != 0);
  }
  return (undefined4 *)0x0;
}


