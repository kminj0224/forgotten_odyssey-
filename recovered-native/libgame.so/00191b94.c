/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00191b94  Symbol: FUN_00191b94 */

void * FUN_00191b94(void)

{
  void *__s;
  int iVar1;
  
  iVar1 = DAT_00191bcc + 0x191b9e;
  __s = (void *)(***(code ***)(iVar1 + DAT_00191bd0))(0x2c);
  if (__s == (void *)0x0) {
    (***(code ***)(iVar1 + DAT_00191bd8))
              (**(undefined4 **)(iVar1 + DAT_00191bd4),iVar1 + DAT_00191bdc);
  }
  else {
    memset(__s,0,0x2c);
  }
  return __s;
}


