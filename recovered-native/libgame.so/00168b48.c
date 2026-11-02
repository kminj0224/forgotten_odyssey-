/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00168b48  Symbol: png_convert_to_rfc1123 */

undefined4 png_convert_to_rfc1123(int param_1,ushort *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int extraout_r1;
  uint extraout_r1_00;
  uint uVar3;
  uint extraout_r1_01;
  uint uVar4;
  uint extraout_r1_02;
  char *__s;
  uint uVar5;
  int iVar6;
  char *__format;
  
  iVar6 = DAT_00168be8 + 0x168b5a;
  uVar2 = 0;
  if (param_1 != 0) {
    __s = *(char **)(param_1 + 0x2d4);
    if (__s == (char *)0x0) {
      __s = (char *)png_malloc(param_1,0x1d);
      *(char **)(param_1 + 0x2d4) = __s;
    }
    bVar1 = *(byte *)((int)param_2 + 3);
    __format = (char *)(iVar6 + DAT_00168bec);
    iVar6 = iVar6 + DAT_00168bf0;
    __aeabi_idivmod(*(byte *)(param_2 + 1) - 1,0xc);
    uVar5 = (uint)*param_2;
    iVar6 = iVar6 + 8 + extraout_r1 * 4;
    __aeabi_uidivmod(*(undefined *)(param_2 + 2),0x18);
    uVar3 = extraout_r1_00 & 0xff;
    __aeabi_uidivmod(*(undefined *)((int)param_2 + 5),0x3c);
    uVar4 = extraout_r1_01 & 0xff;
    __aeabi_uidivmod(*(undefined *)(param_2 + 3),0x3d);
    snprintf(__s,0x1d,__format,bVar1 & 0x1f,iVar6,uVar5,uVar3,uVar4,extraout_r1_02 & 0xff);
    uVar2 = *(undefined4 *)(param_1 + 0x2d4);
  }
  return uVar2;
}


