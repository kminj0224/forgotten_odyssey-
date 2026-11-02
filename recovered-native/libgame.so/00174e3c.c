/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00174e3c  Symbol: png_handle_bKGD */

void png_handle_bKGD(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  byte local_20;
  byte local_1f;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  byte local_1b;
  
  iVar4 = *(int *)(param_1 + 300);
  iVar5 = DAT_00174f90 + 0x174e50;
  if (-1 < iVar4 << 0x1f) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar5 + DAT_00174f9c);
  }
  iVar1 = DAT_00174fa8;
  if (((-1 < iVar4 << 0x1d) &&
      ((uVar2 = (uint)*(byte *)(param_1 + 0x1ea), uVar2 != 3 ||
       (iVar1 = DAT_00174fa0, iVar4 << 0x1e < 0)))) &&
     ((param_2 == 0 || (iVar1 = DAT_00174fa4, -1 < *(int *)(param_2 + 8) << 0x1a)))) {
    iVar4 = 1;
    iVar1 = DAT_00174f94;
    if ((uVar2 == 3) || (iVar4 = 6, (int)(uVar2 << 0x1e) < 0)) {
      if (param_3 == iVar4) goto LAB_00174e9a;
    }
    else if (param_3 == 2) {
LAB_00174e9a:
      png_crc_read(param_1,&local_20,param_3);
      iVar4 = png_crc_finish(param_1,0);
      if (iVar4 != 0) {
        return;
      }
      if (*(byte *)(param_1 + 0x1ea) == 3) {
        *(byte *)(param_1 + 0x1fc) = local_20;
        if ((param_2 != 0) && (*(ushort *)(param_2 + 0x14) != 0)) {
          if ((uint)*(ushort *)(param_2 + 0x14) <= (uint)local_20) {
            png_warning(param_1,iVar5 + DAT_00174fac);
            return;
          }
          iVar4 = (uint)local_20 * 3;
          *(ushort *)(param_1 + 0x1fe) = (ushort)*(byte *)(iVar4 + *(int *)(param_1 + 0x1d8));
          iVar4 = *(int *)(param_1 + 0x1d8) + iVar4;
          *(ushort *)(param_1 + 0x200) = (ushort)*(byte *)(iVar4 + 1);
          *(ushort *)(param_1 + DAT_00174f98) = (ushort)*(byte *)(iVar4 + 2);
        }
      }
      else if ((int)((uint)*(byte *)(param_1 + 0x1ea) << 0x1e) < 0) {
        *(ushort *)(param_1 + 0x1fe) = (ushort)local_20 * 0x100 + (ushort)local_1f;
        *(ushort *)(param_1 + 0x200) = (ushort)local_1e * 0x100 + (ushort)local_1d;
        *(ushort *)(param_1 + DAT_00174f98) = (ushort)local_1c * 0x100 + (ushort)local_1b;
      }
      else {
        sVar3 = (ushort)local_20 * 0x100 + (ushort)local_1f;
        *(short *)(param_1 + 0x204) = sVar3;
        *(short *)(param_1 + DAT_00174f98) = sVar3;
        *(short *)(param_1 + 0x200) = sVar3;
        *(short *)(param_1 + 0x1fe) = sVar3;
      }
      png_set_bKGD(param_1,param_2,param_1 + 0x1fc);
      return;
    }
  }
  png_warning(param_1,iVar5 + iVar1);
  png_crc_finish(param_1,param_3);
  return;
}


