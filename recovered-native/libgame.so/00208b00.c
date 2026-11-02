/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00208b00  Symbol: FUN_00208b00 */

int * FUN_00208b00(int param_1,int *param_2,int param_3,undefined4 param_4)

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
LAB_00208b28:
      if (param_3 == 0) {
        uVar3 = 0x19;
      }
      else {
        uVar3 = 0x1c;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 6;
LAB_00208b40:
      iVar2 = FUN_00208880(param_1,uVar3,0,0,param_4);
      *param_2 = iVar2;
    }
    else {
      *(char **)(param_1 + 0xc) = pcVar4 + 1;
      if (cVar1 != 'r') {
        if (cVar1 != 'V') goto LAB_00208b28;
        if (param_3 == 0) {
          uVar3 = 0x18;
        }
        else {
          uVar3 = 0x1b;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 9;
        goto LAB_00208b40;
      }
      if (param_3 == 0) {
        uVar3 = 0x17;
      }
      else {
        uVar3 = 0x1a;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 9;
      iVar2 = FUN_00208880(param_1,uVar3,0,0,param_4);
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


