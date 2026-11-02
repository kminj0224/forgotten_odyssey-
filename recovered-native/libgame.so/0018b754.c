/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018b754  Symbol: FUN_0018b754 */

int FUN_0018b754(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  code **ppcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar5 = DAT_0018b8ac + 0x18b760;
  if (param_2 == 0) {
    if (param_1 == 0) {
      return 0;
    }
  }
  else if (param_1 == 0) {
    param_1 = *(int *)(param_2 + 0x20);
  }
  if ((param_1 == 0) || (*(int *)(param_1 + 4) != 0xd)) {
    iVar4 = 0;
    iVar7 = iVar5 + DAT_0018b8b8;
    iVar6 = iVar5 + DAT_0018b8d0;
    do {
      if (param_2 == 0) {
        if (param_1 == 0) {
          return iVar4;
        }
        iVar6 = *(int *)(param_1 + 0x48);
        if (iVar6 == 0) {
          return iVar4;
        }
        if (iVar4 != 0) {
          iVar6 = FUN_00193700(iVar4);
          (***(code ***)(iVar5 + DAT_0018b8c0))(iVar4);
          return iVar6;
        }
LAB_0018b884:
        iVar5 = FUN_0019c904(iVar6);
        return iVar5;
      }
      if (*(int *)(param_2 + 4) == 0x11) {
        iVar6 = *(int *)(param_2 + 0x40);
        goto LAB_0018b884;
      }
      if ((*(int *)(param_2 + 4) == 1) && (iVar1 = FUN_0018b658(param_2,iVar7,iVar6), iVar1 != 0)) {
        if (iVar4 != 0) {
          iVar2 = FUN_00193700(iVar4,iVar1);
          if (iVar2 == 0) {
            ppcVar3 = *(code ***)(iVar5 + DAT_0018b8c0);
            (**ppcVar3)(iVar4);
            (**ppcVar3)(iVar1);
            return 0;
          }
          ppcVar3 = *(code ***)(iVar5 + DAT_0018b8c0);
          (**ppcVar3)(iVar4);
          (**ppcVar3)(iVar1);
          iVar1 = iVar2;
        }
        iVar4 = FUN_0019ca64(iVar1,iVar5 + DAT_0018b8c4,7);
        if (iVar4 == 0) {
          return iVar1;
        }
        iVar4 = FUN_0019ca64(iVar1,iVar5 + DAT_0018b8c8,6);
        if (iVar4 == 0) {
          return iVar1;
        }
        iVar2 = FUN_0019ca64(iVar1,iVar5 + DAT_0018b8cc,4);
        iVar4 = iVar1;
        if (iVar2 == 0) {
          return iVar1;
        }
      }
      param_2 = *(int *)(param_2 + 0x14);
    } while( true );
  }
  iVar4 = *(int *)(param_1 + 0xc);
  iVar6 = iVar5 + DAT_0018b8b0;
  iVar7 = iVar5 + DAT_0018b8b4;
  do {
    while( true ) {
      if ((iVar4 == 0) || (*(int *)(iVar4 + 8) == 0)) {
        return 0;
      }
      if (*(int *)(iVar4 + 4) == 1) break;
LAB_0018b7c6:
      iVar4 = *(int *)(iVar4 + 0x18);
    }
    iVar1 = FUN_0019c398(*(int *)(iVar4 + 8),iVar6);
    if ((iVar1 != 0) && (iVar1 = FUN_0019c398(*(undefined4 *)(iVar4 + 8),iVar7), iVar1 != 0)) {
      iVar1 = FUN_0019c398(*(undefined4 *)(iVar4 + 8),iVar5 + DAT_0018b8b8);
      if (iVar1 == 0) {
        iVar5 = FUN_0018b744(iVar4,iVar5 + DAT_0018b8bc);
        return iVar5;
      }
      goto LAB_0018b7c6;
    }
    iVar4 = *(int *)(iVar4 + 0xc);
  } while( true );
}


