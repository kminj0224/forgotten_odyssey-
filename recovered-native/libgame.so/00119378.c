/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119378  Symbol: KG_State_Freezing_CALL */

/* KG_State_Freezing_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Freezing_CALL(CCLayer *param_1,CCLayer *param_2)

{
  _Unit_Stage *p_Var1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  code *pcVar5;
  float extraout_s0;
  float extraout_s1;
  undefined8 uVar6;
  undefined local_30;
  undefined local_2f;
  undefined local_2e;
  undefined4 local_2c;
  CCPoint aCStack_28 [8];
  CCPoint aCStack_20 [12];
  
  p_Var1 = (_Unit_Stage *)(**(code **)(*(int *)param_2 + 0xa8))(param_2);
  local_30 = 0x7f;
  local_2f = 0x7f;
  local_2e = 0xff;
  (**(code **)(*(int *)param_2 + 0xf4))(param_2,&local_30);
  local_2c = CONCAT13(local_2c._3_1_,0xff7f7f);
  SetAttackColor(param_2,local_2c,p_Var1);
  *(undefined *)(*(int *)(p_Var1 + 4) + 0x90) = 1;
  iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,0);
  if ((iVar2 == 0) &&
     (iVar2 = cocos2d::CCNode::getChildByTag((CCNode *)param_2,DAT_00119430), iVar2 == 0)) {
    piVar3 = (int *)cocos2d::CCSprite::spriteWithFile((char *)(DAT_00119434 + 0x1193da));
    pcVar5 = *(code **)(*piVar3 + 0x74);
    cocos2d::CCPoint::CCPoint(aCStack_28,extraout_s0,extraout_s1);
    (*pcVar5)(piVar3,aCStack_28);
    pcVar5 = *(code **)(*piVar3 + 0x3c);
    puVar4 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x7c))(param_2);
    uVar6 = __mulsf3(*puVar4,0x3f000000);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar6,(float)((ulonglong)uVar6 >> 0x20));
    (*pcVar5)(piVar3,aCStack_20);
    (**(code **)(*(int *)param_2 + 0xcc))(param_2,piVar3,DAT_00119430,DAT_00119430);
  }
  return;
}


