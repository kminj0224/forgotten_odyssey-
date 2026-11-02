/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0018ff70  Symbol: FUN_0018ff70 */

void FUN_0018ff70(void)

{
  code *pcVar1;
  
  pcVar1 = **(code ***)(DAT_0018ff8c + 0x18ff7a + DAT_0018ff90);
  if (pcVar1 == (code *)0x0) {
    FUN_0018fe18();
  }
  else {
    (*pcVar1)();
  }
  return;
}


