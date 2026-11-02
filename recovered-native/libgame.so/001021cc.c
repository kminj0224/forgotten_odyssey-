/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 001021cc  Symbol: Unit_init_layer */

/* Monster_Test::Unit_init_layer() */

Monster_Test * __thiscall Monster_Test::Unit_init_layer(Monster_Test *this)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  CCMutableArray<cocos2d::CCSpriteFrame*> *this_00;
  int iVar4;
  char *pcVar5;
  Monster_Test *pMVar6;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar7;
  CCPoint local_30;
  int local_2c;
  CCPoint local_28;
  int local_24;
  CCPoint local_20;
  int local_1c;
  
  pvVar1 = operator_new(0x24);
  *(undefined4 *)((int)pvVar1 + 8) = 0x3c;
  *(undefined4 *)((int)pvVar1 + 0xc) = 0x28;
  *(undefined4 *)((int)pvVar1 + 0x18) = 0x708;
  iVar4 = DAT_00102290;
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_30,extraout_s0,extraout_s1);
  pcVar5 = (char *)(iVar4 + 0x1021fc);
  uVar7 = vDraw_Script_Fram(pcVar5,(char *)(DAT_00102294 + 0x102202),(CCNode *)this,local_30,
                            local_2c,0,(_Unit_Stage *)0x0);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_28,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  uVar7 = vDraw_Script_Fram(pcVar5,(char *)(DAT_00102298 + 0x102228),(CCNode *)this,local_28,
                            local_24,0,(_Unit_Stage *)0x1);
  cocos2d::CCPoint::CCPoint((CCPoint *)&local_20,(float)uVar7,(float)((ulonglong)uVar7 >> 0x20));
  vDraw_Script_Fram(pcVar5,(char *)(DAT_0010229c + 0x10224c),(CCNode *)this,local_20,local_1c,0,
                    (_Unit_Stage *)0x2);
  iVar4 = 0;
  pMVar6 = this;
  do {
    iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)this,iVar4);
    uVar3 = *(uint *)(iVar2 + 0x120);
    iVar4 = iVar4 + 1;
    this_00 = (CCMutableArray<cocos2d::CCSpriteFrame*> *)operator_new(0x20);
    cocos2d::CCMutableArray<cocos2d::CCSpriteFrame*>::CCMutableArray(this_00,uVar3);
    *(CCMutableArray<cocos2d::CCSpriteFrame*> **)(pMVar6 + 0x110) = this_00;
    pMVar6 = pMVar6 + 4;
  } while (iVar4 != 3);
  return this;
}


