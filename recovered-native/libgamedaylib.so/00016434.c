/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00016434  Symbol: __gnu_end_cleanup */

int __gnu_end_cleanup(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = __cxa_get_globals();
  iVar3 = *(int *)(iVar1 + 8);
  if (iVar3 != 0) {
    if (((((*(char *)(iVar3 + 0x20) == 'G') && (*(char *)(iVar3 + 0x21) == 'N')) &&
         (*(char *)(iVar3 + 0x22) == 'U')) &&
        ((*(char *)(iVar3 + 0x23) == 'C' && (*(char *)(iVar3 + 0x24) == 'C')))) &&
       ((*(char *)(iVar3 + 0x25) == '+' &&
        ((*(char *)(iVar3 + 0x26) == '+' && (*(byte *)(iVar3 + 0x27) < 2)))))) {
      iVar2 = *(int *)(iVar3 + 0x1c) + -1;
      *(int *)(iVar3 + 0x1c) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(iVar3 + 0x18);
        *(undefined4 *)(iVar3 + 0x18) = 0;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    return iVar3 + 0x20;
  }
                    /* WARNING: Subroutine does not return */
  std::terminate();
}


