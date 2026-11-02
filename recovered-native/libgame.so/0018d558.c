/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d558  Symbol: FUN_0018d558 */

uint FUN_0018d558(int param_1,int param_2,char *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  
  if ((param_2 == 0) || (param_1 == 0)) {
    uVar1 = 0xffffffff;
  }
  else if ((((param_3 == (char *)0x0) || (*param_3 != 'x')) || (param_3[1] != 'm')) ||
          ((param_3[2] != 'l' || (uVar1 = 1, param_3[3] != '\0')))) {
    do {
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == 1) {
        for (piVar3 = *(int **)(param_2 + 0x30); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
          if ((param_3 == (char *)piVar3[3]) || (iVar2 = FUN_0019c30c(param_3), iVar2 != 0)) {
            return (uint)(piVar3[2] != 0);
          }
        }
      }
      else if ((iVar2 == 0x11) || (iVar2 == 6)) {
        return 0;
      }
      param_2 = *(int *)(param_2 + 0x14);
      if (param_2 == 0) {
        return 0;
      }
    } while (*(int *)(param_2 + 0x20) != param_2);
    return 0;
  }
  return uVar1;
}


