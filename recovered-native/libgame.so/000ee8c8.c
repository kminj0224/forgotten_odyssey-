/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee8c8  Symbol: Unit_init_layer */

/* Boss1::Unit_init_layer() */

CCNode * Boss1::Unit_init_layer(void)

{
  int iVar1;
  CCNode *in_r0;
  char *pcVar2;
  float in_s0;
  float in_s1;
  CCPoint local_18;
  int local_14;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,in_s0,in_s1);
  iVar1 = DAT_000ee918;
  pcVar2 = (char *)(DAT_000ee910 + 0xee8e8);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000ee914 + 0xee8f2),in_r0,local_18,local_14,0);
  vScript_Unit(pcVar2,(char *)(DAT_000ee91c + 0xee906),in_r0,iVar1,1);
  return in_r0;
}


