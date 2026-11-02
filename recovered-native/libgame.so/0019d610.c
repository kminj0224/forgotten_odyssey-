/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019d610  Symbol: FUN_0019d610 */

void FUN_0019d610(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = DAT_0019d6d0 + 0x19d61c;
  if (param_1 != (int *)0x0) {
    if ((*(int *)(iVar4 + DAT_0019d6d4) != 0) || (iVar2 = FUN_0019d5e4(), iVar2 != 0)) {
      iVar5 = iVar4 + DAT_0019d6d4;
      FUN_0019c27c(*(undefined4 *)(iVar5 + 4));
      iVar2 = *param_1;
      *param_1 = iVar2 + -1;
      if (iVar2 + -1 < 1) {
        FUN_0019c280(*(undefined4 *)(iVar5 + 4));
        if (param_1[5] != 0) {
          FUN_0019d610();
        }
        iVar2 = DAT_0019d6d8;
        if (param_1[1] != 0) {
          iVar5 = 0;
          iVar6 = 0;
          while ((iVar6 < param_1[2] && (0 < param_1[3]))) {
            piVar3 = (int *)(param_1[1] + iVar5);
            if (*(int *)((int)piVar3 + 0xc) != 0) {
              bVar1 = true;
              while (piVar3 != (int *)0x0) {
                piVar3 = (int *)*piVar3;
                if (!bVar1) {
                  (***(code ***)(iVar4 + iVar2))();
                }
                bVar1 = false;
                param_1[3] = param_1[3] + -1;
              }
            }
            iVar6 = iVar6 + 1;
            iVar5 = iVar5 + 0x14;
          }
          (***(code ***)(iVar4 + DAT_0019d6d8))(param_1[1]);
        }
        iVar2 = DAT_0019d6d8;
        piVar3 = (int *)param_1[4];
        while (piVar3 != (int *)0x0) {
          piVar3 = (int *)*piVar3;
          (***(code ***)(iVar4 + iVar2))();
        }
        (***(code ***)(iVar4 + iVar2))(param_1);
      }
      else {
        FUN_0019c280(*(undefined4 *)(iVar5 + 4));
      }
    }
  }
  return;
}


