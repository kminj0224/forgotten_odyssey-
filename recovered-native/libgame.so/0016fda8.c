/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0016fda8  Symbol: FUN_0016fda8 */

void FUN_0016fda8(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  int unaff_r4;
  uint unaff_r5;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (((unaff_r5 & 8) != 0) && (param_3 != 0)) {
    sVar1 = *(short *)(unaff_r4 + 0x1dc);
    uVar7 = 8 - *(byte *)(unaff_r4 + 0x240);
    uVar6 = 8 - *(byte *)(unaff_r4 + DAT_0016ffa8);
    uVar5 = 8 - *(byte *)(unaff_r4 + DAT_0016ffa8 + 1);
    if (sVar1 != 0) {
      iVar4 = 0;
      do {
        pbVar2 = (byte *)(*(int *)(unaff_r4 + 0x1d8) + iVar4);
        *pbVar2 = (byte)((int)(uint)*pbVar2 >> (uVar7 & -(uint)(uVar7 < 9) & 0xff));
        iVar3 = *(int *)(unaff_r4 + 0x1d8) + iVar4;
        *(char *)(iVar3 + 1) =
             (char)((int)(uint)*(byte *)(iVar3 + 1) >> (uVar6 & -(uint)(uVar6 < 9) & 0xff));
        iVar3 = *(int *)(unaff_r4 + 0x1d8) + iVar4;
        iVar4 = iVar4 + 3;
        *(char *)(iVar3 + 2) =
             (char)((int)(uint)*(byte *)(iVar3 + 2) >> (uVar5 & -(uint)(uVar5 < 9) & 0xff));
      } while (iVar4 != ((ushort)(sVar1 - 1) + 1) * 3);
    }
  }
  return;
}


