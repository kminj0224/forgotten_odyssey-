/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00178d00  Symbol: FUN_00178d00 */

void FUN_00178d00(undefined4 param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r4;
  uint uVar7;
  int unaff_r5;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int param_10;
  int in_stack_00000018;
  undefined *in_stack_0000001c;
  uint in_stack_00000020;
  int in_stack_00000028;
  uint in_stack_0000002c;
  
  uVar10 = FUN_001782c4();
  uVar8 = 0;
  if ((uint)uVar10 < param_3) {
    iVar1 = 0;
    do {
      uVar7 = (uint)*(byte *)((int)((ulonglong)uVar10 >> 0x20) + iVar1 + 1);
      uVar3 = (uint)*(byte *)(param_4 + iVar1 + 1);
      iVar9 = *(byte *)(in_stack_00000018 + iVar1) - uVar7;
      iVar4 = uVar3 - uVar7;
      uVar2 = iVar9 + (iVar9 >> 0x1f) ^ iVar9 >> 0x1f;
      uVar5 = iVar4 + (iVar4 >> 0x1f) ^ iVar4 >> 0x1f;
      uVar6 = iVar4 + iVar9 >> 0x1f;
      uVar6 = iVar4 + iVar9 + uVar6 ^ uVar6;
      if ((((int)uVar6 < (int)uVar2) || ((int)uVar5 < (int)uVar2)) &&
         (uVar3 = (uint)*(byte *)(in_stack_00000018 + iVar1), (int)uVar6 < (int)uVar5)) {
        uVar3 = uVar7;
      }
      uVar3 = *(byte *)(in_stack_00000028 + iVar1) - uVar3;
      uVar2 = uVar3 & 0xff;
      *(char *)(param_10 + iVar1) = (char)uVar3;
      if (0x7f < uVar2) {
        uVar2 = 0x100 - uVar2;
      }
      uVar8 = uVar8 + uVar2;
    } while ((uVar8 <= in_stack_0000002c) && (iVar1 = iVar1 + 1, iVar1 + (uint)uVar10 < param_3));
  }
  if (*(char *)(unaff_r4 + 700) == '\x02') {
    uVar3 = DAT_00178d18 & uVar8;
    uVar8 = uVar8 >> 10 & DAT_00178d10;
    if (unaff_r5 != 0) {
      iVar1 = 0;
      do {
        if (*(char *)(*(int *)(unaff_r4 + 0x2c0) + iVar1) == '\x04') {
          uVar2 = (uint)*(ushort *)(iVar1 * 2 + *(int *)(unaff_r4 + 0x2c4));
          uVar3 = uVar2 * uVar3 >> 8;
          uVar8 = uVar2 * uVar8 >> 8;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < unaff_r5);
    }
    uVar2 = (uint)*(ushort *)(*(int *)(unaff_r4 + 0x2cc) + 8);
    uVar6 = uVar2 * uVar8 >> 3;
    uVar8 = DAT_00178d14;
    if (uVar6 <= DAT_00178d10) {
      uVar8 = uVar6 * 0x400 + (uVar3 * uVar2 >> 3);
    }
  }
  if (uVar8 < in_stack_00000020) {
    in_stack_0000001c = *(undefined **)(unaff_r4 + 0x1c0);
  }
  png_write_filtered_row(unaff_r4,in_stack_0000001c);
  if (*(char *)(unaff_r4 + DAT_00178800) != '\0') {
    iVar4 = 1;
    iVar1 = 1;
    if (1 < unaff_r5) {
      do {
        *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar4) =
             *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar4 + -1);
        iVar4 = iVar4 + 1;
        iVar1 = unaff_r5;
      } while (iVar4 < unaff_r5);
    }
    *(undefined *)(*(int *)(unaff_r4 + 0x2c0) + iVar1) = *in_stack_0000001c;
  }
  return;
}


