/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001af9fc  Symbol: FUN_001af9fc */

int FUN_001af9fc(int *param_1,undefined4 param_2,int param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  iVar5 = param_1[1];
  uVar1 = __udivsi3(DAT_001afa88,param_3);
  if (uVar1 == 0) {
    *(undefined4 *)(*param_1 + 0x14) = 0x48;
    (**(code **)*param_1)(param_1);
  }
  if ((int)param_4 <= (int)uVar1) {
    uVar1 = param_4;
  }
  *(uint *)(iVar5 + 0x50) = uVar1;
  iVar5 = FUN_001af29c(param_1,param_2,param_4 << 2);
  if (param_4 != 0) {
    uVar6 = 0;
    do {
      while( true ) {
        if (param_4 - uVar6 < uVar1) {
          uVar1 = param_4 - uVar6;
        }
        iVar2 = FUN_001af8e8(param_1,param_2,uVar1 * param_3);
        if (uVar1 == 0) break;
        piVar3 = (int *)(uVar6 * 4 + iVar5);
        uVar4 = uVar1;
        do {
          uVar4 = uVar4 - 1;
          *piVar3 = iVar2;
          piVar3 = piVar3 + 1;
          iVar2 = iVar2 + param_3;
        } while (uVar4 != 0);
        uVar6 = uVar6 + uVar1;
        if (param_4 <= uVar6) {
          return iVar5;
        }
      }
    } while (uVar6 < param_4);
  }
  return iVar5;
}


