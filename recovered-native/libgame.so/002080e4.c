/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 002080e4  Symbol: FUN_002080e4 */

int FUN_002080e4(int *param_1)

{
  int iVar1;
  __off_t _Var2;
  pollfd local_80;
  stat sStack_78;
  
  iVar1 = ioctl((int)*(short *)(*param_1 + 0xe),DAT_002081a4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    local_80.fd = (int)*(short *)(*param_1 + 0xe);
    local_80.events = 1;
    iVar1 = poll(&local_80,1,0);
    if ((iVar1 < 1) || (iVar1 = fstat((int)*(short *)(*param_1 + 0xe),&sStack_78), iVar1 != 0)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 0;
      if ((sStack_78.st_mode & 0xf000) == 0x8000) {
        _Var2 = lseek((int)*(short *)(*param_1 + 0xe),0,1);
        iVar1 = sStack_78.st_blksize - _Var2;
      }
    }
  }
  return iVar1;
}


