/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001899c4  Symbol: FUN_001899c4 */

undefined4 FUN_001899c4(int **param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  
  if ((param_1 == (int **)0x0) || (*param_1 != (int *)0x0)) {
LAB_00189a44:
    uVar3 = 0xffffffff;
  }
  else {
    for (; (param_2 != 0 && (param_2 != *(int *)(param_2 + 0x20)));
        param_2 = *(int *)(param_2 + 0x14)) {
      if (*(int *)(param_2 + 4) == 1) {
        for (piVar5 = *(int **)(param_2 + 0x30); piVar5 != (int *)0x0; piVar5 = (int *)*piVar5) {
          if (*param_1 != (int *)0x0) {
            for (piVar4 = (int *)**param_1; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
              if ((piVar5[3] == *(int *)(piVar4[3] + 0xc)) || (iVar2 = FUN_0019c30c(), iVar2 != 0))
              {
                bVar1 = true;
                goto LAB_00189a12;
              }
            }
          }
          bVar1 = false;
LAB_00189a12:
          iVar2 = FUN_00189900(param_1,0,0,piVar5,0xffffffff);
          if (iVar2 == 0) goto LAB_00189a44;
          if (bVar1) {
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}


