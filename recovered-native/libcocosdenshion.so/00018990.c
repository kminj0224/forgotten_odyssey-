/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00018990  Symbol: FUN_00018990 */

int * FUN_00018990(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  pcVar4 = *(char **)(param_1 + 0xc);
  cVar1 = *pcVar4;
  do {
    if (cVar1 != 'V' && cVar1 != 'r') {
      if (cVar1 != 'K') {
        return param_2;
      }
      *(char **)(param_1 + 0xc) = pcVar4 + 1;
LAB_000189b8:
      if (param_3 == 0) {
        uVar3 = 0x19;
      }
      else {
        uVar3 = 0x1c;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 6;
LAB_000189d0:
      iVar2 = FUN_00018710(param_1,uVar3,0,0,param_4);
      *param_2 = iVar2;
    }
    else {
      *(char **)(param_1 + 0xc) = pcVar4 + 1;
      if (cVar1 != 'r') {
        if (cVar1 != 'V') goto LAB_000189b8;
        if (param_3 == 0) {
          uVar3 = 0x18;
        }
        else {
          uVar3 = 0x1b;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 9;
        goto LAB_000189d0;
      }
      if (param_3 == 0) {
        uVar3 = 0x17;
      }
      else {
        uVar3 = 0x1a;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 9;
      iVar2 = FUN_00018710(param_1,uVar3,0,0,param_4);
      *param_2 = iVar2;
    }
    if (iVar2 == 0) {
      return (int *)0x0;
    }
    param_2 = (int *)(iVar2 + 4);
    pcVar4 = *(char **)(param_1 + 0xc);
    cVar1 = *pcVar4;
  } while( true );
}


