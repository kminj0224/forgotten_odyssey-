/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018fdf4  Symbol: FUN_0018fdf4 */

void FUN_0018fdf4(void)

{
  code *pcVar1;
  
  pcVar1 = **(code ***)(DAT_0018fe10 + 0x18fdfe + DAT_0018fe14);
  if (pcVar1 == (code *)0x0) {
    FUN_0018fd18();
  }
  else {
    (*pcVar1)();
  }
  return;
}


