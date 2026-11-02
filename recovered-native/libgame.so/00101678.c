/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00101678  Symbol: Unit_init_layer */

/* Monster3100::Unit_init_layer() */

Monster3100 * __thiscall Monster3100::Unit_init_layer(Monster3100 *this)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  pvVar2 = operator_new(0x24);
  *(undefined4 *)((int)pvVar2 + 8) = 0x3c;
  *(undefined4 *)((int)pvVar2 + 0xc) = 0x28;
  *(undefined4 *)((int)pvVar2 + 0x18) = DAT_00101730;
  iVar1 = DAT_00101734;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,extraout_s0,extraout_s1);
  pcVar3 = (char *)(iVar1 + 0x1016a8);
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101738 + 0x1016b4),(CCNode *)this,local_38,
                            local_34,0,(_Unit_Stage *)0x0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_0010173c + 0x1016d8),(CCNode *)this,local_30,
                            local_2c,0,(_Unit_Stage *)0x1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101740 + 0x1016fc),(CCNode *)this,local_28,
                            local_24,0,(_Unit_Stage *)0x2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  vDraw_Script_Fram(pcVar3,(char *)(DAT_00101744 + 0x101720),(CCNode *)this,local_20,local_1c,0,
                    (_Unit_Stage *)0x3);
  return this;
}


