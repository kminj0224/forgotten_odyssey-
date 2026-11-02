/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00175ee4  Symbol: png_handle_IHDR */

void png_handle_IHDR(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined auStack_3c [4];
  undefined auStack_38 [4];
  byte local_34;
  byte local_33;
  undefined local_32;
  undefined local_31;
  undefined local_30;
  int local_2c;
  
  iVar1 = DAT_0017607c;
  iVar7 = DAT_00176078 + 0x175efa;
  local_2c = **(int **)(iVar7 + DAT_0017607c);
  if (*(int *)(param_1 + 300) << 0x1f < 0) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar7 + DAT_00176094);
  }
  if (param_3 != 0xd) {
                    /* WARNING: Subroutine does not return */
    png_error(param_1,iVar7 + DAT_00176080);
  }
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 1;
  png_crc_read(param_1,auStack_3c,0xd);
  png_crc_finish(param_1,0);
  uVar3 = png_get_uint_31(param_1,auStack_3c);
  uVar4 = png_get_uint_31(param_1,auStack_38);
  uVar6 = (uint)local_33;
  *(undefined4 *)(param_1 + 0x18c) = uVar3;
  *(undefined4 *)(param_1 + 400) = uVar4;
  iVar2 = DAT_00176084;
  *(byte *)(param_1 + DAT_00176088) = local_34;
  *(undefined *)(param_1 + iVar2) = local_30;
  *(byte *)(param_1 + 0x1ea) = local_33;
  *(undefined *)(param_1 + 0x2fc) = local_31;
  *(undefined *)(param_1 + 0x31c) = local_32;
  if (uVar6 < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0017600c */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(iVar7 + DAT_00176090 + *(int *)(iVar7 + DAT_00176090 + uVar6 * 4)))();
    return;
  }
  uVar5 = (uint)local_34 * (uint)*(byte *)(param_1 + 0x1ee);
  *(char *)(param_1 + DAT_0017608c) = (char)uVar5;
  if ((uVar5 & 0xff) < 8) {
    uVar5 = (uVar5 & 0xff) * *(int *)(param_1 + 0x18c) + 7 >> 3;
  }
  else {
    uVar5 = *(int *)(param_1 + 0x18c) * (uVar5 * 0x1000000 >> 0x1b);
  }
  *(uint *)(param_1 + 0x19c) = uVar5;
  png_set_IHDR(param_1,param_2,uVar3,uVar4,(uint)local_34,uVar6,local_30,local_32,local_31);
  if (local_2c == **(int **)(iVar7 + iVar1)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


