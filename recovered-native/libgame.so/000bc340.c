/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000bc340  Symbol: FastSave */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FastSave() */

void FastSave(void)

{
  int local_34;
  int local_30 [7];
  
  local_34 = *(int *)(DAT_000bc6b0 + 0xbc34c + DAT_000bc6b4) + 0xc;
  local_30[0] = local_34;
  FUN_001ed9dc(&local_34,DAT_000bc6b8 + 0xbc352);
  FUN_001ed9dc(local_30,DAT_000bc6bc + 0xbc364);
                    /* WARNING: Subroutine does not return */
  cocos2d::CCLog((char *)(DAT_000bc6c0 + 0xbc36c));
}


