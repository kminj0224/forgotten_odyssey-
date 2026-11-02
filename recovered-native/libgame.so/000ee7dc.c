/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 000ee7dc  Symbol: Unit_init_layer */

/* Boss16000::Unit_init_layer() */

int * Boss16000::Unit_init_layer(void)

{
  int *in_r0;
  undefined4 uVar1;
  char *pcVar2;
  float in_s0;
  float in_s1;
  undefined8 uVar3;
  _ccColor4B local_24;
  undefined local_23;
  undefined local_22;
  undefined local_21;
  CCPoint local_20;
  int local_1c;
  
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,in_s0,in_s1);
  pcVar2 = (char *)(DAT_000ee8a4 + 0xee7fc);
  vDrawScript_Unit(pcVar2,(char *)(DAT_000ee8a8 + 0xee80e),(char *)(DAT_000ee8ac + 0xee810),
                   (CCNode *)in_r0,local_20,local_1c,1,1,true,false);
  vScript_Unit(pcVar2,(char *)(DAT_000ee8b0 + 0xee826),(CCNode *)in_r0,1,1);
  vScript_Unit(pcVar2,(char *)(DAT_000ee8b4 + 0xee83a),(CCNode *)in_r0,1,2);
  vScript_Unit(pcVar2,(char *)(DAT_000ee8b8 + 0xee84c),(CCNode *)in_r0,1,3);
  vScript_Unit(pcVar2,(char *)(DAT_000ee8bc + 0xee85e),(CCNode *)in_r0,1,4);
  uVar3 = vScript_Unit(pcVar2,(char *)(DAT_000ee8c0 + 0xee870),(CCNode *)in_r0,1,7);
  local_23 = 0;
  local_22 = 0;
  local_24 = (_ccColor4B)0xff;
  local_21 = 0xff;
  uVar1 = cocos2d::CCLayerColor::layerWithColorWidthHeight
                    (&local_24,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  (**(code **)(*in_r0 + 0xcc))(in_r0,uVar1,100,100);
  return in_r0;
}


