/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018e988  Symbol: FUN_0018e988 */

void FUN_0018e988(int *param_1,code *param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (((param_1 != (int *)0x0) && (param_2 != (code *)0x0)) && (*param_1 != 0)) {
    iVar5 = 0;
    for (iVar6 = 0; iVar6 < param_1[1]; iVar6 = iVar6 + 1) {
      piVar1 = (int *)(*param_1 + iVar5);
      if (((int *)(*param_1 + iVar5))[5] != 0) {
        while (piVar4 = piVar1, piVar4 != (int *)0x0) {
          piVar1 = (int *)*piVar4;
          iVar2 = param_1[2];
          if (piVar4[4] != 0) {
            (*param_2)(piVar4[4],param_3,piVar4[1],piVar4[2],piVar4[3]);
          }
          if ((iVar2 != param_1[2]) && (piVar4 == (int *)(*param_1 + iVar5))) {
            piVar3 = (int *)piVar4[5];
            if ((int *)piVar4[5] != (int *)0x0) {
              piVar3 = piVar4;
            }
            piVar1 = piVar4;
            if ((int *)*piVar4 == piVar1) {
              piVar1 = piVar3;
            }
          }
        }
      }
      iVar5 = iVar5 + 0x18;
    }
  }
  return;
}


