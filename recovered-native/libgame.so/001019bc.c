/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001019bc  Symbol: Unit_init_layer */

/* Monster2510::Unit_init_layer() */

Monster2510 * __thiscall Monster2510::Unit_init_layer(Monster2510 *this)

{
  int iVar1;
  void *pvVar2;
  char *pcVar3;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar4;
  CCPoint local_48;
  int local_44;
  CCPoint local_40;
  int local_3c;
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
  *(undefined4 *)((int)pvVar2 + 0x18) = DAT_00101abc;
  iVar1 = DAT_00101ac0;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_48,extraout_s0,extraout_s1);
  pcVar3 = (char *)(iVar1 + 0x1019ec);
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101ac4 + 0x1019f8),(CCNode *)this,local_48,
                            local_44,0,(_Unit_Stage *)0x0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_40,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101ac8 + 0x101a1c),(CCNode *)this,local_40,
                            local_3c,0,(_Unit_Stage *)0x1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101acc + 0x101a40),(CCNode *)this,local_38,
                            local_34,0,(_Unit_Stage *)0x2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101ad0 + 0x101a64),(CCNode *)this,local_30,
                            local_2c,0,(_Unit_Stage *)0x3);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  uVar4 = vDraw_Script_Fram(pcVar3,(char *)(DAT_00101ad4 + 0x101a88),(CCNode *)this,local_28,
                            local_24,0,(_Unit_Stage *)0x4);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar4,(float)((ulonglong)uVar4 >> 0x20));
  vDraw_Script_Fram(pcVar3,(char *)(DAT_00101ad8 + 0x101aac),(CCNode *)this,local_20,local_1c,0,
                    (_Unit_Stage *)0x5);
  return this;
}


