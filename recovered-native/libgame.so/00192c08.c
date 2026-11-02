/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00192c08  Symbol: FUN_00192c08 */

int FUN_00192c08(int param_1,char **param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iVar4;
  char *local_1c [2];
  
  local_1c[0] = *param_2;
  iVar4 = DAT_00192c70 + 0x192c14;
  do {
    if (*local_1c[0] != '/') {
      if (param_1 != 0) {
        if (*(int *)(param_1 + 0x18) != 0) {
          (***(code ***)(iVar4 + DAT_00192c74))();
        }
        pcVar2 = *param_2;
        if (*(int *)(param_1 + 0x24) << 0x1e < 0) {
          uVar3 = FUN_0019c88c(pcVar2,(int)local_1c[0] - (int)pcVar2);
        }
        else {
          uVar3 = FUN_00191be0(pcVar2,(int)local_1c[0] - (int)pcVar2,0);
        }
        *(undefined4 *)(param_1 + 0x18) = uVar3;
      }
      *param_2 = local_1c[0];
      return 0;
    }
    local_1c[0] = local_1c[0] + 1;
    iVar1 = FUN_00191778(local_1c,0,1);
  } while (iVar1 == 0);
  return iVar1;
}


