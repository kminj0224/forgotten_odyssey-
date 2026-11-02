/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00107ec4  Symbol: KG_SiegeTank_Draw */

/* KG_SiegeTank_Draw(cocos2d::CCLayer*, cocos2d::CCNode*) */

void KG_SiegeTank_Draw(CCLayer *param_1,CCNode *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  CCLayer *pCVar7;
  code *pcVar8;
  undefined8 uVar9;
  CCPoint aCStack_20 [12];
  
  iVar1 = (**(code **)(*(int *)param_1 + 0xa0))();
  piVar2 = (int *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xa8))();
  iVar1 = Random(-0x1e,0x1e);
  uVar4 = __floatsisf(iVar1 + 100);
  piVar2 = **(int ***)(DAT_00107fc8 + 0x107efe);
  iVar1 = *piVar2;
  uVar5 = __subsf3(DAT_00107fcc,uVar4);
  uVar6 = __floatsisf(*(int *)(**(int **)*puVar3 + 0x2c) / 2);
  uVar5 = __subsf3(uVar5,uVar6);
  __addsf3(uVar5,DAT_00107fd0);
  uVar5 = __fixsfsi();
  (**(code **)(iVar1 + 0xd8))(piVar2,param_1,uVar5);
  Init_Unit_Stage((_Unit_Stage *)puVar3);
  uVar9 = (**(code **)(*(int *)param_1 + 0xac))(param_1,puVar3);
  pcVar8 = *(code **)(*(int *)param_1 + 0x3c);
  cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar9,(float)((ulonglong)uVar9 >> 0x20));
  (*pcVar8)(param_1,aCStack_20);
  *(undefined4 *)(puVar3[1] + 0x54) = uVar4;
  uVar4 = DAT_00107fd8;
  *(undefined *)(puVar3[1] + 0xd) = 0;
  *(undefined4 *)(puVar3[1] + 100) = 0xffffffff;
  *(undefined4 *)puVar3[1] = 7;
  *(undefined4 *)(puVar3[1] + 0x38) = DAT_00107fdc;
  uVar5 = DAT_00107fe0;
  *(undefined4 *)(puVar3[1] + 0x20) = DAT_00107fe0;
  *(undefined4 *)(puVar3[1] + 0x40) = uVar4;
  *(undefined *)(puVar3[1] + 0x2c) = 0;
  *(undefined4 *)(puVar3[1] + 0x58) = uVar5;
  *(undefined4 *)(puVar3[1] + 0x50) = 0;
  uVar4 = DAT_00107fe4;
  *(undefined4 *)(puVar3[1] + 0x24) = DAT_00107fe4;
  *(undefined4 *)(puVar3[1] + 0x28) = uVar4;
  *(undefined *)(puVar3[1] + 0x34) = 0;
  iVar1 = (**(code **)(*(int *)param_1 + 0xa0))(param_1);
  pCVar7 = (CCLayer *)cocos2d::CCNode::getChildByTag((CCNode *)param_1,iVar1);
  ani_Base_ani(pCVar7);
  return;
}


