/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001aa354  Symbol: FUN_001aa354 */

int FUN_001aa354(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = param_1[0x72];
  iVar7 = DAT_001aa658 + 0x1aa372;
  iVar6 = 2;
  if (*(int *)(iVar3 + 0x14) == 0) {
    do {
      while( true ) {
        iVar6 = (**(code **)(param_1[0x73] + 4))(param_1);
        if (iVar6 != 1) {
          if (iVar6 != 2) {
            return iVar6;
          }
          *(undefined4 *)(iVar3 + 0x14) = 1;
          if (*(int *)(iVar3 + 0x18) == 0) {
            if (param_1[0x26] <= param_1[0x24]) {
              return 2;
            }
            param_1[0x26] = param_1[0x24];
            return 2;
          }
          if (*(int *)(param_1[0x73] + 0x10) == 0) {
            return 2;
          }
          *(undefined4 *)(*param_1 + 0x14) = 0x3d;
          (**(code **)*param_1)(param_1);
          return 2;
        }
        if (*(int *)(iVar3 + 0x18) == 0) break;
        if (*(int *)(iVar3 + 0x18) == 1) {
          if ((DAT_001aa65c < param_1[8]) || (DAT_001aa65c < param_1[7])) {
            *(undefined4 *)(*param_1 + 0x14) = 0x2a;
            *(int *)(*param_1 + 0x18) = DAT_001aa65c;
            (**(code **)*param_1)(param_1);
          }
          if (param_1[0x35] != 8) {
            *(undefined4 *)(*param_1 + 0x14) = 0x10;
            *(int *)(*param_1 + 0x18) = param_1[0x35];
            (**(code **)*param_1)(param_1);
          }
          iVar6 = param_1[9];
          if (10 < iVar6) {
            *(undefined4 *)(*param_1 + 0x14) = 0x1b;
            *(int *)(*param_1 + 0x18) = param_1[9];
            *(undefined4 *)(*param_1 + 0x1c) = 10;
            (**(code **)*param_1)(param_1);
            iVar6 = param_1[9];
          }
          param_1[0x4e] = 1;
          param_1[0x4f] = 1;
          iVar5 = param_1[0x36];
          if (0 < iVar6) {
            iVar4 = 0;
            while( true ) {
              iVar2 = *(int *)(iVar5 + 8);
              if (((3 < iVar2 - 1U) || (*(int *)(iVar5 + 0xc) < 1)) || (4 < *(int *)(iVar5 + 0xc)))
              {
                *(undefined4 *)(*param_1 + 0x14) = 0x13;
                (**(code **)*param_1)(param_1);
                iVar2 = *(int *)(iVar5 + 8);
                iVar6 = param_1[9];
              }
              if (iVar2 < param_1[0x4e]) {
                iVar2 = param_1[0x4e];
              }
              param_1[0x4e] = iVar2;
              iVar2 = param_1[0x4f];
              if (param_1[0x4f] < *(int *)(iVar5 + 0xc)) {
                iVar2 = *(int *)(iVar5 + 0xc);
              }
              iVar4 = iVar4 + 1;
              param_1[0x4f] = iVar2;
              if (iVar6 <= iVar4) break;
              iVar5 = iVar5 + 0x58;
            }
          }
          if ((param_1[0x37] == 0) && ((param_1[0x38] == 0 || (param_1[0x54] == 0)))) {
            iVar5 = param_1[0x67];
            if (iVar5 == 0x3f) {
              iVar5 = *(int *)(iVar7 + DAT_001aa878);
              param_1[0x6a] = 8;
              param_1[0x6b] = iVar5;
              param_1[0x6c] = 0x3f;
              iVar5 = 8;
            }
            else if (iVar5 < 0x40) {
              if (iVar5 == 0xf) {
                iVar5 = *(int *)(iVar7 + DAT_001aa890);
                param_1[0x6a] = 4;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0xf;
                iVar5 = 4;
              }
              else if (iVar5 < 0x10) {
                if (iVar5 == 3) {
                  iVar5 = *(int *)(iVar7 + DAT_001aa880);
                  param_1[0x6a] = 2;
                  param_1[0x6b] = iVar5;
                  param_1[0x6c] = 3;
                  iVar5 = 2;
                }
                else if (iVar5 == 8) {
                  iVar5 = *(int *)(iVar7 + DAT_001aa88c);
                  param_1[0x6a] = 3;
                  param_1[0x6b] = iVar5;
                  param_1[0x6c] = 8;
                  iVar5 = 3;
                }
                else {
                  if (iVar5 != 0) goto LAB_001aa67e;
                  param_1[0x6a] = 1;
                  param_1[0x6b] = *(int *)(iVar7 + DAT_001aa660);
                  param_1[0x6c] = 0;
                  iVar5 = 1;
                }
              }
              else if (iVar5 == 0x23) {
                iVar5 = *(int *)(iVar7 + DAT_001aa888);
                param_1[0x6a] = 6;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x23;
                iVar5 = 6;
              }
              else if (iVar5 == 0x30) {
                iVar5 = *(int *)(iVar7 + DAT_001aa884);
                param_1[0x6a] = 7;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x30;
                iVar5 = 7;
              }
              else {
                if (iVar5 != 0x18) goto LAB_001aa67e;
                iVar5 = *(int *)(iVar7 + DAT_001aa87c);
                param_1[0x6a] = 5;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x18;
                iVar5 = 5;
              }
            }
            else if (iVar5 == 0x8f) {
              iVar5 = *(int *)(iVar7 + DAT_001aa878);
              param_1[0x6a] = 0xc;
              param_1[0x6b] = iVar5;
              param_1[0x6c] = 0x3f;
              iVar5 = 0xc;
            }
            else if (iVar5 < 0x90) {
              if (iVar5 == 99) {
                iVar5 = *(int *)(iVar7 + DAT_001aa878);
                param_1[0x6a] = 10;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x3f;
                iVar5 = 10;
              }
              else if (iVar5 == 0x78) {
                iVar5 = *(int *)(iVar7 + DAT_001aa878);
                param_1[0x6a] = 0xb;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x3f;
                iVar5 = 0xb;
              }
              else {
                if (iVar5 != 0x50) goto LAB_001aa67e;
                iVar5 = *(int *)(iVar7 + DAT_001aa878);
                param_1[0x6a] = 9;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x3f;
                iVar5 = 9;
              }
            }
            else if (iVar5 == 0xc3) {
              iVar5 = *(int *)(iVar7 + DAT_001aa878);
              param_1[0x6a] = 0xe;
              param_1[0x6b] = iVar5;
              param_1[0x6c] = 0x3f;
              iVar5 = 0xe;
            }
            else if (iVar5 < 0xc4) {
              if (iVar5 == 0xa8) {
                iVar5 = *(int *)(iVar7 + DAT_001aa878);
                param_1[0x6a] = 0xd;
                param_1[0x6b] = iVar5;
                param_1[0x6c] = 0x3f;
                iVar5 = 0xd;
              }
              else {
LAB_001aa67e:
                *(undefined4 *)(*param_1 + 0x14) = 0x11;
                *(int *)(*param_1 + 0x18) = param_1[0x66];
                *(int *)(*param_1 + 0x1c) = param_1[0x67];
                *(int *)(*param_1 + 0x20) = param_1[0x68];
                *(int *)(*param_1 + 0x24) = param_1[0x69];
                (**(code **)*param_1)(param_1);
                iVar5 = param_1[0x6a];
                iVar6 = param_1[9];
              }
            }
            else if (iVar5 == 0xe0) {
              iVar5 = *(int *)(iVar7 + DAT_001aa878);
              param_1[0x6a] = 0xf;
              param_1[0x6b] = iVar5;
              param_1[0x6c] = 0x3f;
              iVar5 = 0xf;
            }
            else {
              if (iVar5 != 0xff) goto LAB_001aa67e;
              iVar5 = *(int *)(iVar7 + DAT_001aa878);
              param_1[0x6a] = 0x10;
              param_1[0x6b] = iVar5;
              param_1[0x6c] = 0x3f;
              iVar5 = 0x10;
            }
          }
          else {
            iVar5 = *(int *)(iVar7 + DAT_001aa660);
            param_1[0x6a] = 8;
            param_1[0x6b] = iVar5;
            param_1[0x6c] = 0x3f;
            iVar5 = 8;
          }
          param_1[0x50] = iVar5;
          param_1[0x51] = param_1[0x6a];
          iVar5 = param_1[0x36];
          if (0 < iVar6) {
            iVar6 = 0;
            do {
              *(int *)(iVar5 + 0x24) = param_1[0x6a];
              *(int *)(iVar5 + 0x28) = param_1[0x6a];
              uVar1 = jdiv_round_up(param_1[7] * *(int *)(iVar5 + 8),param_1[0x6a] * param_1[0x4e]);
              *(undefined4 *)(iVar5 + 0x1c) = uVar1;
              uVar1 = jdiv_round_up(param_1[8] * *(int *)(iVar5 + 0xc),param_1[0x6a] * param_1[0x4f]
                                   );
              *(undefined4 *)(iVar5 + 0x20) = uVar1;
              uVar1 = jdiv_round_up(param_1[7] * *(int *)(iVar5 + 8),param_1[0x4e]);
              *(undefined4 *)(iVar5 + 0x2c) = uVar1;
              uVar1 = jdiv_round_up(param_1[8] * *(int *)(iVar5 + 0xc),param_1[0x4f]);
              *(undefined4 *)(iVar5 + 0x30) = uVar1;
              *(undefined4 *)(iVar5 + 0x34) = 1;
              *(undefined4 *)(iVar5 + 0x50) = 0;
              iVar6 = iVar6 + 1;
              iVar5 = iVar5 + 0x58;
            } while (iVar6 < param_1[9]);
          }
          iVar6 = jdiv_round_up(param_1[8],param_1[0x6a] * param_1[0x4f]);
          param_1[0x52] = iVar6;
          if ((param_1[0x54] < param_1[9]) || (param_1[0x38] != 0)) {
            *(undefined4 *)(param_1[0x72] + 0x10) = 1;
          }
          else {
            *(undefined4 *)(param_1[0x72] + 0x10) = 0;
          }
        }
        if (param_1[0x54] != 0) {
          *(undefined4 *)(iVar3 + 0x18) = 0;
          return 1;
        }
        *(undefined4 *)(iVar3 + 0x18) = 2;
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
        *(undefined4 *)(*param_1 + 0x14) = 0x24;
        (**(code **)*param_1)(param_1);
      }
    } while (param_1[0x54] == 0);
    FUN_001aa150(param_1);
    iVar6 = 1;
  }
  return iVar6;
}


