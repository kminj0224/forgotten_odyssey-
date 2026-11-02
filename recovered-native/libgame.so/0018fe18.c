/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fe18  Symbol: FUN_0018fe18 */

int * FUN_0018fe18(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code **ppcVar8;
  int iVar9;
  int local_24;
  
  iVar4 = DAT_0018ff5c;
  iVar7 = DAT_0018ff4c + 0x18fe24;
  iVar6 = iVar7 + DAT_0018ff50;
  if (*(int *)(iVar6 + 0x78) == 0) {
    iVar5 = *(int *)(iVar6 + 0x7c);
    if (iVar5 < 0xf) {
      iVar9 = iVar7 + DAT_0018ff58;
      *(int *)(iVar5 * 0x10 + iVar9) = iVar7 + DAT_0018ff54;
      iVar1 = DAT_0018ff60;
      *(int *)(iVar9 + iVar5 * 0x10 + 4) = iVar7 + iVar4;
      iVar4 = DAT_0018ff64;
      iVar2 = iVar5 * 0x10 + 8;
      *(int *)(iVar2 + iVar9) = iVar7 + iVar1;
      *(int *)(iVar9 + iVar2 + 4) = iVar7 + iVar4;
      *(undefined4 *)(iVar6 + 0x78) = 1;
      *(int *)(iVar6 + 0x7c) = iVar5 + 1;
    }
    *(undefined4 *)(iVar7 + DAT_0018ff50 + 0x78) = 1;
  }
  if (param_1 != 0) {
    piVar3 = (int *)FUN_00193d0c(param_1);
    if (piVar3 != (int *)0x0) {
      if ((*piVar3 == 0) || (iVar4 = FUN_0019c30c(*piVar3,iVar7 + DAT_0018ff68), iVar4 != 0)) {
        local_24 = FUN_00191be0(param_1,0,0);
      }
      else {
        local_24 = 0;
      }
      FUN_001919b8(piVar3);
      if (local_24 != 0) {
        iVar4 = *(int *)(iVar7 + DAT_0018ff50 + 0x7c) + -1;
        ppcVar8 = (code **)(iVar7 + DAT_0018ff58 + iVar4 * 0x10);
        for (; -1 < iVar4; iVar4 = iVar4 + -1) {
          if (((*ppcVar8 != (code *)0x0) && (iVar6 = (**ppcVar8)(local_24), iVar6 != 0)) &&
             (iVar6 = (*ppcVar8[1])(local_24), iVar6 != 0)) goto LAB_0018fee2;
          ppcVar8 = ppcVar8 + -4;
        }
        iVar6 = 0;
LAB_0018fee2:
        (***(code ***)(iVar7 + DAT_0018ff6c))(local_24);
        if (iVar6 != 0) {
LAB_0018ff26:
          piVar3 = (int *)FUN_0018f94c(param_2);
          iVar5 = DAT_0018ff58;
          if (piVar3 == (int *)0x0) {
            return (int *)0x0;
          }
          *piVar3 = iVar6;
          iVar4 = iVar4 * 0x10 + 8;
          piVar3[1] = *(int *)(iVar4 + iVar7 + iVar5);
          piVar3[2] = *(int *)(iVar7 + iVar5 + iVar4 + 4);
          return piVar3;
        }
      }
    }
    iVar4 = *(int *)(iVar7 + DAT_0018ff50 + 0x7c) + -1;
    ppcVar8 = (code **)(iVar7 + DAT_0018ff58 + iVar4 * 0x10);
    for (; -1 < iVar4; iVar4 = iVar4 + -1) {
      if (((*ppcVar8 != (code *)0x0) && (iVar6 = (**ppcVar8)(param_1), iVar6 != 0)) &&
         (iVar6 = (*ppcVar8[1])(param_1), iVar6 != 0)) goto LAB_0018ff26;
      ppcVar8 = ppcVar8 + -4;
    }
  }
  return (int *)0x0;
}


