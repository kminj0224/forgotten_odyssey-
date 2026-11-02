/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192d00  Symbol: FUN_00192d00 */

int FUN_00192d00(int param_1,char **param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  char *local_1c [2];
  
  local_1c[0] = *param_2;
  iVar1 = FUN_00191778(local_1c,0,0);
  iVar5 = DAT_00192d80 + 0x192d24;
  iVar2 = iVar1;
  while( true ) {
    if (iVar2 != 0) {
      return iVar2;
    }
    if (*local_1c[0] != '/') break;
    local_1c[0] = local_1c[0] + 1;
    iVar2 = FUN_00191778(local_1c,0,1);
  }
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x18) != 0) {
      (***(code ***)(iVar5 + DAT_00192d84))();
    }
    pcVar3 = *param_2;
    if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
      uVar4 = FUN_0019c88c(pcVar3,(int)local_1c[0] - (int)pcVar3);
    }
    else {
      uVar4 = FUN_00191be0(pcVar3,(int)local_1c[0] - (int)pcVar3,0);
    }
    *(undefined4 *)(param_1 + 0x18) = uVar4;
  }
  *param_2 = local_1c[0];
  return iVar1;
}


