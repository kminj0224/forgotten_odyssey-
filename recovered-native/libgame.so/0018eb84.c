/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018eb84  Symbol: FUN_0018eb84 */

undefined4
FUN_0018eb84(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,code *param_5)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  void **ppvVar4;
  void **ppvVar5;
  int iVar6;
  void **ppvVar7;
  
  iVar6 = DAT_0018ec70 + 0x18eb90;
  if ((param_2 != 0) && (param_1 != (int *)0x0)) {
    iVar1 = FUN_0018e83c();
    ppvVar7 = (void **)0x0;
    ppvVar4 = (void **)(*param_1 + iVar1 * 0x18);
    if (ppvVar4[5] != (void *)0x0) {
      while (ppvVar5 = ppvVar4, ppvVar5 != (void **)0x0) {
        iVar2 = FUN_0019c30c(ppvVar5[1],param_2);
        if (((iVar2 != 0) && (iVar2 = FUN_0019c30c(ppvVar5[2],param_3), iVar2 != 0)) &&
           (iVar2 = FUN_0019c30c(ppvVar5[3],param_4), iVar2 != 0)) {
          if ((param_5 != (code *)0x0) && (ppvVar5[4] != (void *)0x0)) {
            (*param_5)(ppvVar5[4],ppvVar5[1]);
          }
          ppvVar5[4] = (void *)0x0;
          if (param_1[3] == 0) {
            if (ppvVar5[1] != (void *)0x0) {
              (***(code ***)(iVar6 + DAT_0018ec74))();
            }
            if (ppvVar5[2] != (void *)0x0) {
              (***(code ***)(iVar6 + DAT_0018ec74))();
            }
            if (ppvVar5[3] != (void *)0x0) {
              (***(code ***)(iVar6 + DAT_0018ec74))();
            }
          }
          iVar2 = DAT_0018ec74;
          ppvVar4 = (void **)*ppvVar5;
          if (ppvVar7 == (void **)0x0) {
            if (ppvVar4 == (void **)0x0) {
              ppvVar5[5] = (void *)0x0;
              goto LAB_0018ec54;
            }
            memcpy((void *)(*param_1 + iVar1 * 0x18),ppvVar4,0x18);
            pcVar3 = **(code ***)(iVar6 + DAT_0018ec74);
          }
          else {
            *ppvVar7 = ppvVar4;
            pcVar3 = **(code ***)(iVar6 + iVar2);
            ppvVar4 = ppvVar5;
          }
          (*pcVar3)(ppvVar4);
LAB_0018ec54:
          param_1[2] = param_1[2] + -1;
          return 0;
        }
        ppvVar7 = ppvVar5;
        ppvVar4 = (void **)*ppvVar5;
      }
    }
  }
  return 0xffffffff;
}


