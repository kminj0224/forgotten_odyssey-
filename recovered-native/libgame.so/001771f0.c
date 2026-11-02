/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001771f0  Symbol: png_write_iCCP */

void png_write_iCCP(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined local_30;
  int local_2c [2];
  
  iVar4 = DAT_0017732c + 0x177210;
  local_34 = *(undefined4 *)(iVar4 + DAT_00177330 + 0x70);
  local_30 = *(undefined *)(iVar4 + DAT_00177330 + 0x74);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_48 = 0;
  local_44 = 0;
  iVar1 = png_check_keyword(param_1,param_2,local_2c);
  if (iVar1 == 0) {
    return;
  }
  if (param_3 != 0) {
    png_warning(param_1,iVar4 + DAT_00177338);
  }
  if (param_4 == (byte *)0x0) {
    param_5 = 0;
  }
  else if (3 < (int)param_5) {
    uVar3 = (uint)*param_4 << 0x18 | (uint)param_4[3] | (uint)param_4[1] << 0x10 |
            (uint)param_4[2] << 8;
    iVar2 = DAT_00177340;
    if (((int)uVar3 < 0) || (iVar2 = DAT_00177334, (int)param_5 < (int)uVar3)) goto LAB_001772bc;
    goto LAB_00177268;
  }
  uVar3 = 0;
  iVar2 = DAT_00177334;
  if ((int)param_5 < 0) {
LAB_001772bc:
    png_warning(param_1,iVar4 + iVar2);
    png_free(param_1,local_2c[0]);
    return;
  }
LAB_00177268:
  if ((int)uVar3 < (int)param_5) {
    png_warning(param_1,iVar4 + DAT_0017733c);
    param_5 = uVar3;
  }
  if (param_5 == 0) {
    png_write_chunk_start(param_1,&local_34,iVar1 + 2);
    *(undefined *)(local_2c[0] + iVar1 + 1) = 0;
    png_write_chunk_data(param_1,local_2c[0],iVar1 + 2);
  }
  else {
    iVar4 = FUN_00176524(param_1,param_4,param_5,0,&local_48);
    png_write_chunk_start(param_1,&local_34,iVar4 + iVar1 + 2);
    *(undefined *)(local_2c[0] + iVar1 + 1) = 0;
    png_write_chunk_data(param_1,local_2c[0],iVar1 + 2);
    if (iVar4 != 0) {
      FUN_00176a90(param_1,&local_48);
    }
  }
  png_write_chunk_end(param_1);
  png_free(param_1,local_2c[0]);
  return;
}


