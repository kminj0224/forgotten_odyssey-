/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ef3c  Symbol: FUN_0018ef3c */

undefined4 FUN_0018ef3c(void **param_1,void *param_2)

{
  void *__s;
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *__dest;
  void *pvVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int local_34;
  undefined4 *local_2c;
  
  iVar6 = DAT_0018f064 + 0x18ef48;
  if (((param_1 != (void **)0x0) && (7 < (int)param_2)) && ((int)param_2 < 0x4001)) {
    pvVar4 = param_1[1];
    puVar7 = (undefined4 *)*param_1;
    if (puVar7 != (undefined4 *)0x0) {
      __s = (void *)(***(code ***)(iVar6 + DAT_0018f068))((int)param_2 * 0x18);
      *param_1 = __s;
      if (__s != (void *)0x0) {
        memset(__s,0,(int)param_2 * 0x18);
        param_1[1] = param_2;
        puVar5 = puVar7;
        for (local_34 = 0; iVar1 = DAT_0018f06c, local_34 < (int)pvVar4; local_34 = local_34 + 1) {
          if (puVar5[5] != 0) {
            iVar1 = FUN_0018e83c(param_1,puVar5[1],puVar5[2],puVar5[3]);
            memcpy((void *)((int)*param_1 + iVar1 * 0x18),puVar5,0x18);
            *(undefined4 *)((int)*param_1 + iVar1 * 0x18) = 0;
          }
          puVar5 = puVar5 + 6;
        }
        local_2c = puVar7;
        for (local_34 = 0; local_34 < (int)pvVar4; local_34 = local_34 + 1) {
          puVar5 = (undefined4 *)*local_2c;
          while (puVar5 != (undefined4 *)0x0) {
            puVar2 = (undefined4 *)*puVar5;
            iVar3 = FUN_0018e83c(param_1,puVar5[1],puVar5[2],puVar5[3]);
            iVar3 = iVar3 * 0x18;
            __dest = (undefined4 *)((int)*param_1 + iVar3);
            if (__dest[5] == 0) {
              memcpy(__dest,puVar5,0x18);
              *(undefined4 *)((int)*param_1 + iVar3) = 0;
              (***(code ***)(iVar6 + iVar1))(puVar5);
              puVar5 = puVar2;
            }
            else {
              *puVar5 = *__dest;
              *(undefined4 **)((int)*param_1 + iVar3) = puVar5;
              puVar5 = puVar2;
            }
          }
          local_2c = local_2c + 6;
        }
        (***(code ***)(iVar6 + DAT_0018f06c))(puVar7);
        return 0;
      }
      *param_1 = puVar7;
    }
  }
  return 0xffffffff;
}


