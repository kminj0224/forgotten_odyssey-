/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001afee4  Symbol: FUN_001afee4 */

void FUN_001afee4(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar5 = *(int *)(param_1 + 0x1a4);
  bVar1 = *param_2;
  iVar4 = *(int *)((bVar1 & 0x7f) * 4 + *(int *)(DAT_001b0078 + 0x1afefe + DAT_001b007c));
  iVar8 = iVar4 >> 0x10;
  iVar6 = *(int *)(iVar5 + 0x10) - iVar8;
  *(int *)(iVar5 + 0x10) = iVar6;
  if ((int)(uint)bVar1 >> 7 == param_3) {
    if (DAT_001b0084 < iVar6) {
      return;
    }
    if (iVar6 < iVar8) {
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + iVar6;
    }
    *param_2 = bVar1 & 0x80 ^ (byte)((uint)iVar4 >> 8);
  }
  else {
    if (iVar8 <= iVar6) {
      *(int *)(iVar5 + 0x10) = iVar8;
      *(int *)(iVar5 + 0xc) = *(int *)(iVar5 + 0xc) + iVar6;
    }
    *param_2 = (byte)iVar4 ^ bVar1 & 0x80;
  }
  iVar6 = DAT_001b0084;
  uVar2 = DAT_001b0080;
  iVar8 = *(int *)(iVar5 + 0x10);
  iVar4 = *(int *)(iVar5 + 0x1c);
  do {
    iVar8 = iVar8 << 1;
    iVar4 = iVar4 + -1;
    uVar3 = *(int *)(iVar5 + 0xc) * 2;
    *(int *)(iVar5 + 0x10) = iVar8;
    *(uint *)(iVar5 + 0xc) = uVar3;
    *(int *)(iVar5 + 0x1c) = iVar4;
    if (iVar4 == 0) {
      uVar7 = (int)uVar3 >> 0x13;
      iVar4 = 0;
      if ((int)uVar7 < 0x100) {
        if (uVar7 == 0xff) {
          *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + 1;
        }
        else {
          iVar4 = *(int *)(iVar5 + 0x20);
          if (iVar4 == 0) {
            *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
          }
          else if (-1 < iVar4) {
            if (*(int *)(iVar5 + 0x18) != 0) {
              do {
                FUN_001afd4c(0,param_1);
                iVar4 = *(int *)(iVar5 + 0x18) + -1;
                *(int *)(iVar5 + 0x18) = iVar4;
              } while (iVar4 != 0);
              iVar4 = *(int *)(iVar5 + 0x20);
            }
            FUN_001afd4c(iVar4,param_1);
          }
          if (*(int *)(iVar5 + 0x14) != 0) {
            iVar4 = *(int *)(iVar5 + 0x18);
            while (iVar4 != 0) {
              FUN_001afd4c(0,param_1);
              iVar4 = *(int *)(iVar5 + 0x18) + -1;
              *(int *)(iVar5 + 0x18) = iVar4;
            }
            do {
              FUN_001afd4c(0xff,param_1);
              FUN_001afd4c(0,param_1);
              iVar4 = *(int *)(iVar5 + 0x14) + -1;
              *(int *)(iVar5 + 0x14) = iVar4;
            } while (iVar4 != 0);
          }
          *(uint *)(iVar5 + 0x20) = uVar7 & 0xff;
          uVar3 = *(uint *)(iVar5 + 0xc);
          iVar4 = *(int *)(iVar5 + 0x1c);
        }
      }
      else {
        if (-1 < *(int *)(iVar5 + 0x20)) {
          if (*(int *)(iVar5 + 0x18) == 0) {
            FUN_001afd4c(*(int *)(iVar5 + 0x20) + 1,param_1);
            iVar4 = *(int *)(iVar5 + 0x20);
          }
          else {
            do {
              FUN_001afd4c(0,param_1);
              iVar4 = *(int *)(iVar5 + 0x18) + -1;
              *(int *)(iVar5 + 0x18) = iVar4;
            } while (iVar4 != 0);
            FUN_001afd4c(*(int *)(iVar5 + 0x20) + 1,param_1);
            iVar4 = *(int *)(iVar5 + 0x20);
          }
          if (iVar4 == 0xfe) {
            FUN_001afd4c(0,param_1);
          }
          uVar3 = *(uint *)(iVar5 + 0xc);
          iVar4 = *(int *)(iVar5 + 0x1c);
        }
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x14);
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(uint *)(iVar5 + 0x20) = uVar7 & 0xff;
      }
      iVar8 = *(int *)(iVar5 + 0x10);
      iVar4 = iVar4 + 8;
      *(uint *)(iVar5 + 0xc) = uVar3 & uVar2;
      *(int *)(iVar5 + 0x1c) = iVar4;
    }
  } while (iVar8 <= iVar6);
  return;
}


