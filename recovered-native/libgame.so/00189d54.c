/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00189d54  Symbol: FUN_00189d54 */

undefined4 * FUN_00189d54(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = DAT_00189e78 + 0x189d60;
  if ((param_3 != 0) && (param_2 != 0)) {
    iVar4 = iVar5 + DAT_00189e7c;
    iVar1 = FUN_0019c30c(param_3,iVar4);
    if (iVar1 != 0) {
      if (param_1 == 0) {
        if (*(int *)(param_2 + 4) == 1) {
          puVar2 = (undefined4 *)(***(code ***)(iVar5 + DAT_00189e80))(0x18);
          if (puVar2 != (undefined4 *)0x0) {
            memset(puVar2,0,0x18);
            puVar2[1] = 0x12;
            uVar3 = FUN_0019c904(iVar4);
            iVar1 = DAT_00189e88;
            puVar2[2] = uVar3;
            uVar3 = FUN_0019c904(iVar5 + iVar1);
            puVar2[3] = uVar3;
            *puVar2 = *(undefined4 *)(param_2 + 0x30);
            *(undefined4 **)(param_2 + 0x30) = puVar2;
            return puVar2;
          }
          FUN_001898e8(iVar5 + DAT_00189e84);
          return (undefined4 *)0x0;
        }
        param_1 = *(int *)(param_2 + 0x20);
        if (param_1 == 0) {
          return (undefined4 *)0x0;
        }
      }
      if (*(undefined4 **)(param_1 + 0x34) == (undefined4 *)0x0) {
        puVar2 = (undefined4 *)FUN_00189a50(param_1);
        return puVar2;
      }
      return *(undefined4 **)(param_1 + 0x34);
    }
    bVar6 = *(int *)(param_2 + 4) != 2;
    for (iVar5 = param_2;
        ((iVar5 != 0 && (iVar1 = *(int *)(iVar5 + 4), 1 < iVar1 - 5U)) && (iVar1 != 0x11));
        iVar5 = *(int *)(iVar5 + 0x14)) {
      if (iVar1 == 1) {
        for (puVar2 = *(undefined4 **)(iVar5 + 0x30); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if ((((puVar2[2] != 0) && (iVar1 = FUN_0019c30c(puVar2[2],param_3), iVar1 != 0)) &&
              ((bVar6 || (puVar2[3] != 0)))) &&
             (iVar1 = FUN_00189818(param_1,param_2,iVar5,puVar2[3]), iVar1 == 1)) {
            return puVar2;
          }
        }
        if (((param_2 != iVar5) &&
            (puVar2 = *(undefined4 **)(iVar5 + 0x24), puVar2 != (undefined4 *)0x0)) &&
           (((puVar2[2] != 0 && (iVar1 = FUN_0019c30c(puVar2[2],param_3), iVar1 != 0)) &&
            (((bVar6 || (puVar2[3] != 0)) &&
             (iVar1 = FUN_00189818(param_1,param_2,iVar5,puVar2[3]), iVar1 == 1)))))) {
          return puVar2;
        }
      }
    }
  }
  return (undefined4 *)0x0;
}


