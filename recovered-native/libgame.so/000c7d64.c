/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000c7d64  Symbol: Rmove_Item_Upgread_Count */

/* Rmove_Item_Upgread_Count(int) */

void Rmove_Item_Upgread_Count(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *(int *)((**(int **)(DAT_000c7dcc + 0xc7d70) + DAT_000c7dd4) * 4 +
                  **(int **)(DAT_000c7dd0 + 0xc7d74));
  piVar2 = (int *)(**(int **)(DAT_000c7dd0 + 0xc7d74) +
                   iVar1 * 0x14 + **(int **)(DAT_000c7dcc + 0xc7d70) * 2000 + DAT_000c7dd8);
  do {
    if (iVar1 < 0) {
      return;
    }
    if ((piVar2[-3] == 0xa9) && (0 < param_1)) {
      iVar4 = *piVar2;
      iVar3 = iVar4 - param_1;
      *piVar2 = iVar3;
      param_1 = param_1 - iVar4;
      if (iVar3 < 1) {
        piVar2[-3] = 0;
        *piVar2 = 0;
        piVar2[-1] = 0;
        piVar2[-2] = 0;
        piVar2[1] = 0;
      }
      if (param_1 < 1) {
        return;
      }
    }
    iVar1 = iVar1 + -1;
    piVar2 = piVar2 + -5;
  } while( true );
}


