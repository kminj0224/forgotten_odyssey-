/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018f328  Symbol: FUN_0018f328 */

void FUN_0018f328(int *param_1,code *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar1 = DAT_0018f400;
  iVar5 = DAT_0018f3fc + 0x18f334;
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      local_2c = param_1[2];
      local_30 = 0;
      for (local_28 = 0; (0 < local_2c && (local_28 < param_1[1])); local_28 = local_28 + 1) {
        if (((undefined4 *)(*param_1 + local_30))[5] != 0) {
          bVar3 = true;
          puVar4 = (undefined4 *)(*param_1 + local_30);
          while (puVar4 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*puVar4;
            if ((param_2 != (code *)0x0) && (puVar4[4] != 0)) {
              (*param_2)(puVar4[4],puVar4[1]);
            }
            if (param_1[3] == 0) {
              if (puVar4[1] != 0) {
                (***(code ***)(iVar5 + iVar1))();
              }
              if (puVar4[2] != 0) {
                (***(code ***)(iVar5 + iVar1))();
              }
              if (puVar4[3] != 0) {
                (***(code ***)(iVar5 + iVar1))();
              }
            }
            puVar4[4] = 0;
            if (!bVar3) {
              (***(code ***)(iVar5 + iVar1))(puVar4);
            }
            bVar3 = false;
            local_2c = local_2c + -1;
            puVar4 = puVar2;
          }
        }
        local_30 = local_30 + 0x18;
      }
      (***(code ***)(iVar5 + DAT_0018f400))(*param_1);
    }
    if (param_1[3] != 0) {
      FUN_0019d610();
    }
    (***(code ***)(iVar5 + DAT_0018f400))(param_1);
  }
  return;
}


