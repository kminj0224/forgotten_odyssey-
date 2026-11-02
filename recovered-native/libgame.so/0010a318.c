/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 0010a318  Symbol: Unit_init_layer */

/* Unit_Test::Unit_init_layer() */

Unit_Test * __thiscall Unit_Test::Unit_init_layer(Unit_Test *this)

{
  void *pvVar1;
  char *pcVar2;
  undefined8 uVar3;
  CCPoint local_38;
  int local_34;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  pvVar1 = operator_new(0x24);
  uVar3 = (**(code **)(*(int *)this + 0xac))(this,pvVar1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_38,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  pcVar2 = (char *)(DAT_0010a3d8 + 0x10a34c);
  uVar3 = vDraw_Script_Fram(pcVar2,(char *)(DAT_0010a3dc + 0x10a358),(CCNode *)this,local_38,
                            local_34,0,(_Unit_Stage *)0x0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDraw_Script_Fram(pcVar2,(char *)(DAT_0010a3e0 + 0x10a37c),(CCNode *)this,local_30,
                            local_2c,0,(_Unit_Stage *)0x1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  uVar3 = vDraw_Script_Fram(pcVar2,(char *)(DAT_0010a3e4 + 0x10a3a2),(CCNode *)this,local_28,
                            local_24,0,(_Unit_Stage *)0x2);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar3,(float)((ulonglong)uVar3 >> 0x20));
  vDraw_Script_Fram(pcVar2,(char *)(DAT_0010a3e8 + 0x10a3c6),(CCNode *)this,local_20,local_1c,0,
                    (_Unit_Stage *)0x3);
  return this;
}


