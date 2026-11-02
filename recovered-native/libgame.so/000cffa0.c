/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cffa0  Symbol: getState */

/* Item_Text_View_Layer::getState(int, int) */

void __thiscall Item_Text_View_Layer::getState(Item_Text_View_Layer *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int local_28;
  
  iVar8 = DAT_000d01dc + 0xcffac;
  iVar6 = **(int **)(iVar8 + DAT_000d01e0);
  *(int *)(this + 0x124) = iVar6;
  iVar1 = DAT_000d01f8;
  iVar7 = DAT_000d01f4;
  iVar2 = DAT_000d01ec;
  if (param_2 == 0) {
    iVar1 = **(int **)(iVar8 + DAT_000d01e8) +
            param_1 * 0x14 + **(int **)(iVar8 + DAT_000d01e4) * 2000;
    puVar3 = (undefined4 *)(iVar1 + DAT_000d01f0);
    *(undefined4 *)(this + 0x110) = *puVar3;
    *(undefined4 *)(this + 0x114) = puVar3[1];
    puVar3 = (undefined4 *)(iVar1 + iVar2);
    *(undefined4 *)(this + 0x118) = *(undefined4 *)(iVar1 + iVar7);
    *(undefined4 *)(this + 0x11c) = ((undefined4 *)(iVar1 + iVar7))[1];
  }
  else {
    if (param_2 != 1) {
      if (param_2 == 2) {
        iVar2 = *(int *)(this + 0x110);
        iVar1 = (int)*(char *)(**(int **)(iVar8 + DAT_000d01e8) + **(int **)(iVar8 + DAT_000d01e4) +
                               DAT_000d0200 + 4);
        iVar7 = *(int *)(**(int **)(iVar8 + DAT_000d01e8) +
                         (**(int **)(iVar8 + DAT_000d01e4) * 9 + iVar1 + DAT_000d0204) * 4 + 4);
        if (iVar1 == 1) {
          iVar1 = 7;
          local_28 = 0;
        }
        else if (iVar1 == 2) {
          iVar1 = 7;
          local_28 = 1;
        }
        else if (iVar1 == 3) {
          iVar1 = 6;
          local_28 = 4;
        }
        else if (iVar1 == 4) {
          iVar1 = 5;
          local_28 = 2;
        }
        else if (iVar1 == 5) {
          local_28 = 3;
          iVar1 = 5;
        }
        else {
          iVar1 = 0;
          local_28 = 0;
        }
        iVar8 = *(int *)(iVar8 + DAT_000d0208);
        piVar5 = (int *)(iVar8 + 0x14);
        piVar10 = (int *)(iVar8 + 0x20);
        iVar6 = 0;
        do {
          iVar9 = piVar5[-3];
          if ((((iVar9 <= iVar7) && (iVar7 < *piVar10)) && (*piVar5 == local_28)) && (param_1 == 0))
          {
LAB_000d017a:
            *(int *)(this + 0x110) = iVar6;
            break;
          }
          if ((0x59 < iVar7) && (iVar9 == 0x5a)) {
            if ((*piVar5 != local_28) || (param_1 != 0)) goto LAB_000d00f6;
            goto LAB_000d017a;
          }
          if (iVar9 <= iVar7) {
LAB_000d00f6:
            if (((iVar7 < *piVar10) && (*piVar5 == iVar1)) && (param_1 == 1)) goto LAB_000d017a;
          }
          if ((0x59 < iVar7) && (iVar9 == 0x5a)) {
            if ((*piVar5 != iVar1) || (param_1 != 1)) goto LAB_000d0126;
            goto LAB_000d017a;
          }
          if (iVar9 <= iVar7) {
LAB_000d0126:
            if (((iVar7 < *piVar10) && (*piVar5 == 10)) && (param_1 == 2)) goto LAB_000d017a;
          }
          if ((0x5e < iVar7) && (iVar9 == 0x5f)) {
            if ((*piVar5 != 10) || (param_1 != 2)) goto LAB_000d014e;
            goto LAB_000d017a;
          }
          if (iVar9 <= iVar7) {
LAB_000d014e:
            if (((iVar7 < *piVar10) && (*piVar5 == 0xe)) && (param_1 == 3)) goto LAB_000d017a;
          }
          if (((((0x5e < iVar7) && (iVar9 == 0x5f)) && (*piVar5 == 0xe)) && (param_1 == 3)) ||
             ((*piVar5 == 0x16 && (param_1 == 4)))) goto LAB_000d017a;
          iVar6 = iVar6 + 1;
          piVar5 = piVar5 + 6;
          piVar10 = piVar10 + 6;
        } while (iVar6 != 200);
        *(undefined4 *)(this + 0x114) = 0;
        *(undefined4 *)(this + 0x118) = 0;
        uVar4 = *(undefined4 *)(iVar8 + *(int *)(this + 0x110) * 0x18 + 0xc);
        *(undefined4 *)(this + 0x11c) = uVar4;
        *(undefined4 *)(this + 0x120) = uVar4;
        if (iVar2 != *(int *)(this + 0x110)) {
          return;
        }
        *(undefined4 *)(this + 0x110) = 0;
        return;
      }
      if (param_2 == 4) {
        iVar2 = param_1 + 1;
LAB_000d01c0:
        *(int *)(this + 0x110) = iVar2;
        return;
      }
      if (param_2 == 5) {
        iVar2 = param_1 + 0x97;
        goto LAB_000d01c0;
      }
      *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 * 4 + *(int *)(iVar8 + DAT_000d020c));
      uVar4 = 0;
      *(undefined4 *)(this + 0x114) = 0;
      *(undefined4 *)(this + 0x118) = 0;
      *(undefined4 *)(this + 0x11c) = 0;
      goto LAB_000d01d6;
    }
    iVar2 = **(int **)(iVar8 + DAT_000d01e8) +
            param_1 * 0x14 + iVar6 * 0x50 + **(int **)(iVar8 + DAT_000d01e4) * 0x2d0;
    puVar3 = (undefined4 *)(iVar2 + DAT_000d01fc);
    *(undefined4 *)(this + 0x110) = *puVar3;
    *(undefined4 *)(this + 0x114) = puVar3[1];
    *(undefined4 *)(this + 0x118) = *(undefined4 *)(iVar2 + iVar1);
    *(undefined4 *)(this + 0x11c) = ((undefined4 *)(iVar2 + iVar1))[1];
    puVar3 = (undefined4 *)(iVar2 + 0x2680);
  }
  uVar4 = *puVar3;
LAB_000d01d6:
  *(undefined4 *)(this + 0x120) = uVar4;
  return;
}


