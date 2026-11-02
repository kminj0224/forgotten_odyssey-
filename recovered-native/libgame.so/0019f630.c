/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0019f630  Symbol: FUN_0019f630 */

undefined4 FUN_0019f630(uint param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort *puVar4;
  uint *puVar5;
  
  if (param_2 != (int *)0x0) {
    if (DAT_0019f6ac < param_1) {
      if (param_2[1] != 0) {
        iVar2 = param_2[1] + -1;
        iVar3 = 0;
        while (iVar3 <= iVar2) {
          iVar1 = (iVar2 + iVar3) / 2;
          puVar5 = (uint *)(param_2[3] + iVar1 * 8);
          if (param_1 < *puVar5) {
            iVar2 = iVar1 + -1;
          }
          else {
            if (param_1 <= puVar5[1]) {
              return 1;
            }
            iVar3 = iVar1 + 1;
          }
        }
      }
    }
    else if (*param_2 != 0) {
      iVar2 = *param_2 + -1;
      iVar3 = 0;
      while (iVar3 <= iVar2) {
        iVar1 = (iVar2 + iVar3) / 2;
        puVar4 = (ushort *)(param_2[2] + iVar1 * 4);
        if ((param_1 & 0xffff) < (uint)*puVar4) {
          iVar2 = iVar1 + -1;
        }
        else {
          if ((param_1 & 0xffff) <= (uint)puVar4[1]) {
            return 1;
          }
          iVar3 = iVar1 + 1;
        }
      }
    }
  }
  return 0;
}


