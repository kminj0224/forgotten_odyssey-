/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000fd230  Symbol: Unit_init_layer */

/* Hero9::Unit_init_layer() */

CCNode * Hero9::Unit_init_layer(void)

{
  int iVar1;
  CCNode *in_r0;
  float in_s0;
  float in_s1;
  CCPoint local_18;
  int local_14;
  
  iVar1 = DAT_000fd284;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,in_s0,in_s1);
  vDrawScript_Unit((char *)(iVar1 + 0xfd24a),(char *)(DAT_000fd288 + 0xfd250),in_r0,local_18,
                   local_14,1);
  if (2 < **(int **)(DAT_000fd28c + 0xfd262) - 1U) {
    vScript_Unit((char *)(iVar1 + 0xfd24a),(char *)(DAT_000fd290 + 0xfd274),in_r0,1,1);
  }
  return in_r0;
}


