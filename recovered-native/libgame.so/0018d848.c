/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018d848  Symbol: FUN_0018d848 */

undefined4
FUN_0018d848(int param_1,int param_2,int param_3,int *param_4,int **param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  if ((((param_3 != 0) && (param_1 != 0)) && (param_5 != (int **)0x0)) && (param_4 != (int *)0x0)) {
    *param_4 = 0;
    pcVar3 = *(char **)(param_3 + 0xc);
    if (((pcVar3 == (char *)0x0) || (*pcVar3 != 'x')) ||
       ((pcVar3[1] != 'm' || ((pcVar3[2] != 'l' || (pcVar3[3] != '\0')))))) {
      if (*param_5 != (int *)0x0) {
        for (piVar4 = (int *)**param_5; piVar4 != (int *)0x0; piVar4 = (int *)*piVar4) {
          if ((piVar4[5] + 1 < 0 == SCARRY4(piVar4[5],1)) && (piVar4[4] == -1)) {
            pcVar3 = *(char **)(piVar4[3] + 8);
            if ((((pcVar3 != (char *)0x0) && (*pcVar3 != '\0')) &&
                ((param_7 == 0 || (*(int *)(piVar4[3] + 0xc) != 0)))) &&
               ((pcVar3 == *(char **)(param_3 + 8) || (iVar1 = FUN_0019c30c(), iVar1 != 0)))) {
              piVar4[2] = param_3;
              *param_4 = piVar4[3];
              return 0;
            }
          }
        }
      }
      if (param_2 == 0) {
        iVar1 = FUN_0018a5c0(param_1,*(undefined4 *)(param_3 + 8),*(undefined4 *)(param_3 + 0xc));
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        iVar2 = FUN_00189900(param_5,0xffffffff,param_3,iVar1,0xfffffffd);
        if (iVar2 != 0) {
          *param_4 = iVar1;
          return 0;
        }
      }
      else {
        iVar1 = FUN_0018d5cc(param_1,param_2,*(undefined4 *)(param_3 + 8),
                             *(undefined4 *)(param_3 + 0xc),0);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        if (*param_5 != (int *)0x0) {
          for (puVar5 = (undefined4 *)**param_5; puVar5 != (undefined4 *)0x0;
              puVar5 = (undefined4 *)*puVar5) {
            if ((((int)puVar5[5] < param_6) && (puVar5[4] == -1)) &&
               ((*(int *)(param_3 + 0xc) == *(int *)(puVar5[3] + 0xc) ||
                (iVar2 = FUN_0019c30c(), iVar2 != 0)))) {
              puVar5[4] = param_6;
              break;
            }
          }
        }
        iVar2 = FUN_00189900(param_5,0xffffffff,param_3,iVar1,param_6);
        if (iVar2 != 0) {
          *param_4 = iVar1;
          return 0;
        }
      }
      FUN_00189514(iVar1);
    }
    else {
      iVar1 = FUN_00189a50(param_1);
      *param_4 = iVar1;
      if (iVar1 != 0) {
        return 0;
      }
    }
  }
  return 0xffffffff;
}


