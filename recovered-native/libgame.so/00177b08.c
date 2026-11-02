/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00177b08  Symbol: png_write_sBIT */

void png_write_sBIT(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 local_24;
  undefined local_20;
  byte local_1c [4];
  
  iVar5 = DAT_00177bb0 + 0x177b18 + DAT_00177bb4;
  local_24 = *(undefined4 *)(iVar5 + 0x40);
  local_20 = *(undefined *)(iVar5 + 0x44);
  if (param_3 << 0x1e < 0) {
    bVar4 = 8;
    if (param_3 != 3) {
      bVar4 = *(byte *)(param_1 + 0x1ec);
    }
    bVar1 = *param_2;
    if (((((bVar1 == 0) || (bVar4 < bVar1)) || (bVar2 = param_2[1], bVar2 == 0)) ||
        ((bVar4 < bVar2 || (bVar3 = param_2[2], bVar3 == 0)))) || (bVar4 < bVar3))
    goto LAB_00177b6c;
    iVar5 = 3;
    local_1c[0] = bVar1;
    local_1c[1] = bVar2;
    local_1c[2] = bVar3;
  }
  else {
    bVar4 = param_2[3];
    if ((bVar4 == 0) || (*(byte *)(param_1 + 0x1ec) < bVar4)) goto LAB_00177b6c;
    iVar5 = 1;
    local_1c[0] = bVar4;
  }
  if (param_3 << 0x1d < 0) {
    bVar4 = param_2[4];
    if ((bVar4 == 0) || (*(byte *)(param_1 + 0x1ec) < bVar4)) {
LAB_00177b6c:
      png_warning(param_1,DAT_00177bb0 + 0x177b18 + DAT_00177bb8);
      return;
    }
    local_1c[iVar5] = bVar4;
    iVar5 = iVar5 + 1;
  }
  png_write_chunk(param_1,&local_24,local_1c,iVar5);
  return;
}


