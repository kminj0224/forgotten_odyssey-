/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00190cec  Symbol: FUN_00190cec */

int FUN_00190cec(FILE *param_1,void *param_2,size_t param_3)

{
  size_t sVar1;
  int iVar2;
  
  iVar2 = DAT_00190d28 + 0x190cf8;
  if ((param_2 == (void *)0x0) || (param_1 == (FILE *)0x0)) {
LAB_00190d1c:
    iVar2 = -1;
  }
  else {
    sVar1 = fwrite(param_2,param_3,1,param_1);
    if (sVar1 == 0) {
      if ((int)((uint)*(ushort *)&param_1->_IO_read_base << 0x19) < 0) {
        FUN_00190594(0,iVar2 + DAT_00190d2c);
        goto LAB_00190d1c;
      }
    }
    iVar2 = param_3 * sVar1;
  }
  return iVar2;
}


