/* Decompiled reference only. Not original C/C++; not built into APK. */
/* Address: 00118e74  Symbol: Stage_Mode */

/* WARNING: Function: __gnu_thumb1_case_uqi replaced with injection: switch8_r0 */
/* WARNING (jumptable): Removing unreachable block (ram,0x00118efc) */
/* WARNING: Removing unreachable block (ram,0x00118efc) */
/* Stage_Mode(cocos2d::CCNode*, int, _Stage_Value*) */

void Stage_Mode(CCNode *param_1,int param_2,_Stage_Value *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  undefined auStack_2c [4];
  char *local_28;
  int local_24;
  void *local_20;
  size_t local_1c [2];
  
  uVar1 = cocos2d::CCFileUtils::fullPathFromRelativePath((char *)(DAT_00119034 + 0x118e82));
  iVar5 = DAT_00119038;
  FUN_001eed40(&local_28,uVar1,auStack_2c);
  iVar5 = iVar5 + 0x118e98;
  iVar6 = *(int *)(iVar5 + DAT_0011903c);
  local_24 = iVar6 + 8;
  local_20 = (void *)0x0;
  local_1c[0] = 0;
  local_20 = (void *)cocos2d::CCFileUtils::getFileData
                               (local_28,(char *)(DAT_00119040 + 0x118ea0),local_1c);
  memcpy(*(void **)(iVar5 + DAT_00119044),local_20,local_1c[0]);
  FUN_001edf58(&local_28);
  Stage_Monsters(param_1,*(int *)(param_3 + 0x14));
  Stage_Monsters(param_1,*(int *)(param_3 + 0x18));
  Stage_Monsters(param_1,*(int *)(param_3 + 0x1c));
  Stage_Monsters(param_1,*(int *)(param_3 + 0x20));
  Stage_Monsters(param_1,*(int *)(param_3 + 0x24));
  fVar7 = (float)Stage_Monsters(param_1,*(int *)(param_3 + 0x28));
  switch(param_2) {
  case 1:
    Ally_Castle_setOpacity(param_1,fVar7);
    Stage_Monsters(param_1,*(int *)(param_3 + 0x2c));
    uVar4 = *(int *)(param_3 + 0x2c) >> 0x1f;
    Monster_Nomar_Boss_Draw_Test(param_1,*(int *)(param_3 + 0x2c) + uVar4 ^ uVar4,false);
    Draw_Boss(param_1,*(int *)(param_3 + 0x30));
    Monster_Draw_Test(param_1,*(int *)(param_3 + 0x30),false);
    break;
  case 2:
    Ally_Castle_setOpacity(param_1,fVar7);
    iVar2 = Get_Monster_HP(8);
    iVar3 = 1;
    goto LAB_00118f96;
  case 5:
    iVar2 = Get_Monster_HP(8);
    Stage_Move_5(iVar2);
    Stage_Monsters(param_1,*(int *)(param_3 + 0x2c));
    Monster_Draw_Test(param_1,*(int *)(param_3 + 0x2c),false);
    param_3[0x50] = (_Stage_Value)0x1;
    break;
  case 6:
    Ally_Castle_setOpacity(param_1,fVar7);
    Stage_Monsters(param_1,DAT_00119048);
    Unit_Draw_Test(param_1,DAT_00119048);
    goto LAB_00118f8e;
  case 7:
    Ally_Castle_setOpacity(param_1,fVar7);
LAB_00118f8e:
    iVar2 = Get_Monster_HP(9);
    iVar3 = 0;
LAB_00118f96:
    Draw_Castle_2(iVar2,iVar3);
    break;
  case 8:
    if (*(int *)(param_3 + 0x2c) != 0) {
      Stage_Monsters(param_1,*(int *)(param_3 + 0x2c));
      uVar4 = *(int *)(param_3 + 0x2c) >> 0x1f;
      fVar7 = (float)Monster_Nomar_Boss_Draw_Test
                               (param_1,*(int *)(param_3 + 0x2c) + uVar4 ^ uVar4,false);
    }
  case 3:
  case 4:
    Ally_Castle_setOpacity(param_1,fVar7);
    Draw_Boss(param_1,*(int *)(param_3 + 0x30));
    break;
  case 9:
    Ally_Castle_setOpacity(param_1,fVar7);
  }
  if (param_3[0x34] != (_Stage_Value)0x0) {
    Stage_Monsters(param_1,DAT_0011904c);
    Effect::Effect_Lode_Zombi(*(Effect **)(**(int **)(iVar5 + DAT_00119050) + DAT_00119054));
  }
  if (param_3[0x35] != (_Stage_Value)0x0) {
    Effect::Effect_Lode_Warp(*(Effect **)(**(int **)(iVar5 + DAT_00119050) + DAT_00119054));
  }
  FUN_001edf58(&local_28);
  local_24 = iVar6 + 8;
  if (local_20 != (void *)0x0) {
    operator_delete__(local_20);
    local_20 = (void *)0x0;
  }
  FUN_001ed6b8(&local_28);
  return;
}


