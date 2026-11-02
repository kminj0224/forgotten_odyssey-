/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001b39c8  Symbol: FUN_001b39c8 */

int FUN_001b39c8(int param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar8 = DAT_001b3b00;
  iVar7 = *(int *)(param_1 + 0x1d0);
  iVar5 = *(int *)(iVar7 + 0xc);
  iVar10 = DAT_001b3afc + 0x1b39e4;
  if (DAT_001b3b00 < iVar5) {
    uVar6 = *(uint *)(iVar7 + 0x10);
    uVar4 = *(uint *)(iVar7 + 8);
  }
  else {
    uVar6 = *(uint *)(iVar7 + 0x10);
    do {
      uVar3 = uVar6 - 1;
      *(uint *)(iVar7 + 0x10) = uVar3;
      uVar6 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = 0;
        if (*(int *)(param_1 + 0x1b4) == 0) {
          uVar4 = FUN_001b3990(param_1);
          if (uVar4 == 0xff) {
            do {
              iVar5 = FUN_001b3990(param_1);
            } while (iVar5 == 0xff);
            if (iVar5 != 0) {
              *(int *)(param_1 + 0x1b4) = iVar5;
              uVar4 = 0;
              uVar3 = *(uint *)(iVar7 + 0x10);
              goto LAB_001b3a10;
            }
          }
          uVar3 = *(uint *)(iVar7 + 0x10);
        }
LAB_001b3a10:
        uVar4 = *(int *)(iVar7 + 8) << 8 | uVar4;
        uVar6 = uVar3 + 8;
        *(uint *)(iVar7 + 8) = uVar4;
        *(uint *)(iVar7 + 0x10) = uVar6;
        if ((int)uVar6 < 0) {
          uVar6 = uVar3 + 9;
          *(uint *)(iVar7 + 0x10) = uVar6;
          if (uVar6 == 0) {
            iVar5 = 0x10000;
            *(undefined4 *)(iVar7 + 0xc) = 0x10000;
            uVar6 = 0;
            goto LAB_001b3a62;
          }
        }
      }
      iVar5 = *(int *)(iVar7 + 0xc) * 2;
      *(int *)(iVar7 + 0xc) = iVar5;
    } while (iVar5 - iVar8 == 0 || iVar5 < iVar8);
    uVar4 = *(uint *)(iVar7 + 8);
  }
LAB_001b3a62:
  bVar1 = *param_2;
  uVar3 = (uint)bVar1;
  iVar8 = *(int *)((uVar3 & 0x7f) * 4 + *(int *)(iVar10 + DAT_001b3b04));
  iVar10 = iVar8 >> 0x10;
  iVar5 = iVar5 - iVar10;
  iVar9 = iVar5 << (uVar6 & 0xff);
  *(int *)(iVar7 + 0xc) = iVar5;
  bVar2 = (byte)((uint)iVar8 >> 8);
  if ((int)uVar4 < iVar9) {
    if (iVar5 <= DAT_001b3b00) {
      if (iVar5 < iVar10) {
        *param_2 = bVar1 & 0x80 ^ (byte)iVar8;
        uVar3 = uVar3 ^ 0x80;
      }
      else {
        *param_2 = bVar2 ^ bVar1 & 0x80;
      }
    }
  }
  else {
    *(uint *)(iVar7 + 8) = uVar4 - iVar9;
    if (iVar5 < iVar10) {
      *(int *)(iVar7 + 0xc) = iVar10;
      *param_2 = bVar2 ^ bVar1 & 0x80;
    }
    else {
      *(int *)(iVar7 + 0xc) = iVar10;
      *param_2 = bVar1 & 0x80 ^ (byte)iVar8;
      uVar3 = uVar3 ^ 0x80;
    }
  }
  return (int)uVar3 >> 7;
}


