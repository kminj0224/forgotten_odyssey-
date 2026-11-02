/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000cb218  Symbol: vInitDialogMsg */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* vInitDialogMsg() */

void vInitDialogMsg(void)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_000cb24c + 0xcb224);
  *(undefined4 *)(iVar1 + DAT_000cb250) = 0;
  *(undefined4 *)(iVar1 + 0x1560) = 0;
  *(undefined4 *)(iVar1 + DAT_000cb254) = 0;
  *(undefined4 *)(iVar1 + DAT_000cb258) = 0;
  *(undefined4 *)(iVar1 + DAT_000cb25c) = 0;
  *(undefined4 *)(iVar1 + DAT_000cb260) = 0;
  memset((void *)(iVar1 + DAT_000cb264),0,400);
  return;
}


