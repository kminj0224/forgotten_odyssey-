/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00104658  Symbol: Unit_init_layer */

/* SiegeTank9000::Unit_init_layer() */

CCNode * SiegeTank9000::Unit_init_layer(void)

{
  int iVar1;
  CCNode *in_r0;
  char *pcVar2;
  float in_s0;
  float in_s1;
  CCPoint local_18;
  int local_14;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_18,in_s0,in_s1);
  iVar1 = DAT_001046ac;
  pcVar2 = (char *)(DAT_001046a4 + 0x104678);
  vDrawScript_Unit(pcVar2,(char *)(DAT_001046a8 + 0x104682),in_r0,local_18,local_14,0);
  vScript_Unit(pcVar2,(char *)(DAT_001046b0 + 0x104696),in_r0,iVar1,1);
  return in_r0;
}


