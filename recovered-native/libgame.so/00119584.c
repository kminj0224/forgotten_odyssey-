/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00119584  Symbol: KG_State_Zombi_CALL */

/* KG_State_Zombi_CALL(cocos2d::CCLayer*, cocos2d::CCLayer*) */

void KG_State_Zombi_CALL(CCLayer *param_1,CCLayer *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  Effect *this;
  code *pcVar8;
  CCNode **ppCVar9;
  int **ppiVar10;
  int *piVar11;
  undefined8 uVar12;
  CCPoint aCStack_20 [12];
  
  iVar1 = (**(code **)(*(int *)param_2 + 0xa8))(param_2);
  iVar2 = __aeabi_fcmplt(*(undefined4 *)(*(int *)(iVar1 + 4) + 0x24),0);
  if (iVar2 != 0) {
    ppCVar9 = *(CCNode ***)(DAT_0011966c + 0x1195ae);
    ppiVar10 = *(int ***)(DAT_00119670 + 0x1195b2);
    this = *(Effect **)(*ppCVar9 + DAT_00119674);
    piVar7 = *ppiVar10;
    puVar3 = (undefined4 *)(**(code **)(*(int *)param_2 + 0x38))(param_2);
    iVar2 = __fixsfsi(*puVar3);
    iVar4 = (**(code **)(*(int *)param_2 + 0x38))(param_2);
    uVar5 = __floatsisf(*(int *)(iVar1 + 0xc) / 2);
    __addsf3(uVar5,*(undefined4 *)(iVar4 + 4));
    iVar4 = __fixsfsi();
    iVar6 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    Effect::Effect_Draw(this,(CCLayer *)piVar7,DAT_00119678,iVar2,iVar4,iVar6,false);
    piVar7 = (int *)Monster_Draw_Test(*ppCVar9,DAT_0011967c,false);
    pcVar8 = *(code **)(*piVar7 + 0x3c);
    uVar5 = (**(code **)(*(int *)param_2 + 0x38))(param_2);
    (*pcVar8)(piVar7,uVar5);
    piVar11 = *ppiVar10;
    pcVar8 = *(code **)(*piVar11 + 0xd8);
    uVar5 = (**(code **)(*(int *)param_2 + 0x14))(param_2);
    uVar12 = (*pcVar8)(piVar11,piVar7,uVar5);
    *(undefined4 *)(*(int *)(iVar1 + 4) + 0x24) = 0;
    pcVar8 = *(code **)(*(int *)param_2 + 0x3c);
    cocos2d::CCPoint::CCPoint(aCStack_20,(float)uVar12,(float)((ulonglong)uVar12 >> 0x20));
    (*pcVar8)(param_2,aCStack_20);
  }
  return;
}


